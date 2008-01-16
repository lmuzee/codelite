#ifndef PROCUTILS_H
#define PROCUTILS_H

#ifdef WXMAKINGDLL_CODELITE
#    define WXDLLIMPEXP_CL WXEXPORT
#elif defined(WXUSINGDLL_CODELITE)
#    define WXDLLIMPEXP_CL WXIMPORT
#else
#    define WXDLLIMPEXP_CL
#endif

#include "precompiled_header.h"
#include "wx/string.h"
#include "wx/arrstr.h"

#ifdef __WXMSW__
#include <windows.h>
#include <SetupAPI.h>
#include <Psapi.h>
#include <tlhelp32.h>
#endif 

struct ProcessEntry {
	wxString name;
	long pid;
};

class ProcUtils {
public:
	ProcUtils();
	~ProcUtils();

	static void GetProcTree(std::map<unsigned long, bool> &parentsMap, long pid);
	static void ExecuteCommand(const wxString &command, wxArrayString &output, long flags = wxEXEC_NODISABLE| wxEXEC_SYNC);
	static void ExecuteInteractiveCommand(const wxString &command);
	static wxString GetProcessNameByPid(long pid);
	static void GetProcessList(std::vector<ProcessEntry> &proclist);
	static void GetChildren(long pid, std::vector<long> &children);
	static bool Shell();
	static bool Locate(const wxString &name, wxString &where);
};

#endif // PROCUTILS_H
