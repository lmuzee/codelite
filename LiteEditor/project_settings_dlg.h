//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2008 by Eran Ifrah
// file name            : project_settings_dlg.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
#ifndef __project_settings_dlg__
#define __project_settings_dlg__

/**
@file
Subclass of ProjectSettingsBaseDlg, which is generated by wxFormBuilder.
@todo Add your event handlers directly to this file.
*/

#include "project_settings_base_dlg.h"
#include "project_settings.h"
#include "compiler.h"

/** Implementing ProjectSettingsBaseDlg */
class ProjectSettingsDlg : public ProjectSettingsBaseDlg
{
	wxString m_projectName;
	wxString m_configName;
	wxString m_oldConfigurationName;
	long m_selecteCustomTaregt;
	
protected:
	void ConnectEvents();
	void InitDialog(const wxString &configName, const wxString &oldConfig);
	void DoUpdatePages(bool checked);

	/**
	 * Copy values from the project settings configuration file to the
	 * GUI controls
	 * \param confName configuration name to copy
	 */
	void CopyValues(const wxString &confName);

	/**
	 * Save values from the GUI controls back to
	 * project settings configuration file
	 * \param confName configuration name to save
	 */
	void SaveValues(const wxString &confName);

	/**
	 * Clear the GUI controls values
	 */
	void ClearValues();

	void DisableCompilerPage(bool disable);
	void DisableLinkerPage(bool disable);
	void DisableCustomBuildPage(bool disable);
	void DisableGeneralPage(bool disable);
	void DisableCustomMkSteps(bool disable);

	void PopupAddOptionDlg(wxTextCtrl *ctrl);
	void PopupAddOptionCheckDlg(wxTextCtrl *ctrl, const wxString& title, const Compiler::CmpCmdLineOptions& options);

	void OnEditCommand(wxCheckListBox* list);
	void OnUpCommand(wxCheckListBox* list);
	void OnDownCommand(wxCheckListBox* list);
	void OnNewCommand(wxCheckListBox* list);
	void OnDeleteCommand(wxCheckListBox* list);
	void UpdateConfigurationTypeChoice(const wxString &itemToSelect);
	
	virtual void OnCmdEvtVModified( wxCommandEvent& event );
	virtual void OnDebuggingRemoteTarget(wxCommandEvent &e);
	virtual void OnButtonHelp(wxCommandEvent &e);
	virtual void OnBrowseCommandWD(wxCommandEvent &e);
	virtual void OnBrowseIntermediateDir(wxCommandEvent &e);
	virtual void OnBrowseCustomBuildWD(wxCommandEvent &e);
	
	/** 
	 * Custom target handling
	 */ 
	virtual void OnNewTarget(wxCommandEvent &e);
	virtual void OnEditTarget(wxCommandEvent &e);
	virtual void OnDeleteTarget(wxCommandEvent &e);
	virtual void OnItemActivated(wxListEvent &e);
	virtual void OnItemSelected(wxListEvent &e);
	virtual void OnDeleteTargetUI(wxUpdateUIEvent &e);
	virtual void OnEditTargetUI(wxUpdateUIEvent &e);
	virtual void OnSelectDebuggerPath(wxCommandEvent &e);
	
	void DoEditItem(long item);
	void DoUpdateItem(long item, const wxString& target, const wxString& cmd);
	wxString GetTargetCommand(const wxString &target);
public:
	/** Constructor */
	ProjectSettingsDlg( wxWindow* parent, const wxString &configName, const wxString &projectName, const wxString &title );
	virtual ~ProjectSettingsDlg();
	
	virtual void OnCheckCompilerNeeded(wxCommandEvent &event);
	virtual void OnCheckLinkerNeeded(wxCommandEvent &event);
	virtual void OnConfigurationTypeSelected(wxCommandEvent &event);
	virtual void OnAddSearchPath(wxCommandEvent &event);
	virtual void OnAddLibraryPath(wxCommandEvent &event);
	virtual void OnAddLibrary(wxCommandEvent &event);
	virtual void OnNewPreBuildCommand(wxCommandEvent & event) {
		OnNewCommand(m_checkListPreBuildCommands);
		event.Skip();
	}
	virtual void OnEditPreBuildCommand(wxCommandEvent &event) {
		OnEditCommand(m_checkListPreBuildCommands);
		event.Skip();
	}
	virtual void OnUpPreBuildCommand(wxCommandEvent &event) {
		OnUpCommand(m_checkListPreBuildCommands);
		event.Skip();
	}
	virtual void OnDownPreBuildCommand(wxCommandEvent &event) {
		OnDownCommand(m_checkListPreBuildCommands);
		event.Skip();
	}
	virtual void OnDeletePreBuildCommand(wxCommandEvent &event) {
		OnDeleteCommand(m_checkListPreBuildCommands);
		event.Skip();
	}
	virtual void OnNewPostBuildCommand(wxCommandEvent & event) {
		OnNewCommand(m_checkListPostBuildCommands);
		event.Skip();
	}
	virtual void OnEditPostBuildCommand(wxCommandEvent &event) {
		OnEditCommand(m_checkListPostBuildCommands);
		event.Skip();
	}
	virtual void OnUpPostBuildCommand(wxCommandEvent &event) {
		OnUpCommand(m_checkListPostBuildCommands);
		event.Skip();
	}
	virtual void OnDownPostBuildCommand(wxCommandEvent &event) {
		OnDownCommand(m_checkListPostBuildCommands);
		event.Skip();
	}
	virtual void OnDeletePostBuildCommand(wxCommandEvent &event) {
		OnDeleteCommand(m_checkListPostBuildCommands);
		event.Skip();
	}
	virtual void OnButtonOK(wxCommandEvent &event);
	virtual void OnButtonApply(wxCommandEvent &event);
	virtual void OnButtonConfigurationManager(wxCommandEvent &event);
	virtual void OnButtonAddPreprocessor(wxCommandEvent &event);
	virtual void OnButtonAddLinkerOptions(wxCommandEvent &event);
	virtual void OnButtonAddCompilerOptions(wxCommandEvent &event);
	virtual void OnCustomBuildEnabled(wxCommandEvent &event);
	virtual void OnResourceCmpNeeded(wxCommandEvent &e);
	virtual void OnResourceCmpAddPath(wxCommandEvent &e);
	virtual void OnResourceCmpAddOption(wxCommandEvent &e);
	virtual void OnChoiceMakefileTool(wxCommandEvent &e);
};

#endif // __project_settings_dlg__
