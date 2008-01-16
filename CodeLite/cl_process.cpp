#include "cl_process.h"
#include <wx/txtstrm.h>
#include <wx/sstream.h>
#include "procutils.h" 

clProcess::clProcess(int id, const wxString &cmdLine, bool redirect)
: wxProcess(NULL, id)
, m_pid(-1)
, m_uid(id)
, m_cmd(cmdLine)
, m_redirect(redirect)
{
}

clProcess::~clProcess()
{
}

long clProcess::GetPid()
{
	return m_pid;
}

void clProcess::SetPid(long pid)
{
	m_pid = pid;
}

void clProcess::Terminate()
{
	wxKillError rc;
#ifdef __WXMSW__
	std::map<unsigned long, bool> tree;
	ProcUtils::GetProcTree(tree, GetPid());

	std::map<unsigned long, bool>::iterator iter = tree.begin();
	for(; iter != tree.end(); iter++){
		wxKill(iter->first, wxSIGKILL, &rc);
	}
#else
	wxKill(GetPid(), wxSIGKILL, &rc, wxKILL_CHILDREN);
#endif 

	// Sleep for 20 ms to allow the process to be killed and 
	// the main frame to handle the event or else we can get 
	// memory leak
	wxMilliSleep( 150 );
}

long clProcess::Start(bool hide)
{
	if(m_redirect){
		Redirect();
	}
	
	long flags = wxEXEC_ASYNC | wxEXEC_MAKE_GROUP_LEADER ;
	if( !hide ){
		flags |= wxEXEC_NOHIDE;
	}
	
	m_pid = wxExecute(m_cmd, flags, this);
	return m_pid;
}

bool clProcess::HasInput(wxString &input, wxString &errors)
{
	if(m_redirect == false){
		wxASSERT_MSG(false, wxT("Process is not redirected"));
		return false;
	}
	
	bool hasInput = false;
	while ( IsInputAvailable() )
	{
		wxTextInputStream tis(*GetInputStream());
		wxChar ch = tis.GetChar();
		input << ch;
		hasInput = true;
		if(ch == wxT('\n'))
			break;
	}

	while ( IsErrorAvailable() )
	{
		wxTextInputStream tis(*GetErrorStream());
		wxChar ch = tis.GetChar();
		errors << ch;
		hasInput = true;
		if(ch == wxT('\n'))
			break;
	}
	return hasInput;
}

bool clProcess::ReadAll(wxString &input, wxString &errors)
{
	if(m_redirect == false){
		wxASSERT_MSG(false, wxT("Process is not redirected"));
		return false;
	}

	bool hasInput = false;
	while ( IsInputAvailable() )
	{
		wxTextInputStream tis(*GetInputStream());
		input << tis.GetChar();
		hasInput = true;
	}

	while ( IsErrorAvailable() )
	{
		wxTextInputStream tis(*GetErrorStream());
		errors << tis.GetChar();
		hasInput = true;
	}
	return hasInput;
}

bool clProcess::Write(const wxString &text)
{
	if(m_redirect == false){
		wxASSERT_MSG(false, wxT("Process is not redirected"));
		return false;
	}
	wxTextOutputStream tos(*GetOutputStream());
	tos.WriteString(text);
	return true;
}




