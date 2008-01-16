///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 26 2007)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __svnadditemsbasedlg__
#define __svnadditemsbasedlg__

#include <wx/string.h>
#include <wx/checklst.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class SvnAddItemsBaseDlg
///////////////////////////////////////////////////////////////////////////////
class SvnAddItemsBaseDlg : public wxDialog 
{
	private:
	
	protected:
		wxCheckListBox* m_checkListFiles;
		wxStaticText* m_staticText1;
		wxTextCtrl* m_textIgnoreFilePatterns;
		wxButton* m_buttonApplyPattern;
		wxStaticLine* m_staticline1;
		wxButton* m_buttonOK;
		wxButton* m_buttonCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnApplyPattern( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnButtonOK( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnButtonCancel( wxCommandEvent& event ){ event.Skip(); }
		
	
	public:
		SvnAddItemsBaseDlg( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Subversion: Add Files "), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 562,633 ), long style = wxDEFAULT_DIALOG_STYLE );
	
};

#endif //__svnadditemsbasedlg__
