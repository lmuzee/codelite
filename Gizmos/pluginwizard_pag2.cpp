///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 26 2007)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "pluginwizard_pag2.h"

///////////////////////////////////////////////////////////////////////////

PluginWizardPage2::PluginWizardPage2( wxWizard* parent) 
: wxWizardPageSimple( parent )
{
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Build Information:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer2->Add( m_staticText1, 0, wxALL, 5 );
	
	m_staticline1 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer2->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Project Path:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer2->Add( m_staticText3, 0, wxALL, 5 );
	
	m_dirPicker = new DirPicker(this);
	bSizer2->Add( m_dirPicker, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Select the root path of CodeLite source files:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer2->Add( m_staticText4, 0, wxALL, 5 );
	
	m_rootPath = new DirPicker(this);
	bSizer2->Add( m_rootPath, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	this->SetSizer( bSizer2 );
	this->Layout();
}
