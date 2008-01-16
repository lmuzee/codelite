#ifndef PLUGIN_DATA_H
#define PLUGIN_DATA_H

#include "wx/string.h"

class PluginData 
{
	wxString m_projectPath;
	wxString m_pluginName;
	wxString m_codelitePath;
	wxString m_pluginDescription;
public:
	PluginData();
	~PluginData();
	
	//Setters
	void SetCodelitePath(const wxString& codelitePath) {this->m_codelitePath = codelitePath;}
	void SetPluginDescription(const wxString& pluginDescription) {this->m_pluginDescription = pluginDescription;}
	void SetPluginName(const wxString& pluginName) {this->m_pluginName = pluginName;}
	void SetProjectPath(const wxString& projectPath) {this->m_projectPath = projectPath;}
	//Getters
	const wxString& GetCodelitePath() const {return m_codelitePath;}
	const wxString& GetPluginDescription() const {return m_pluginDescription;}
	const wxString& GetPluginName() const {return m_pluginName;}
	const wxString& GetProjectPath() const {return m_projectPath;}
	
};
#endif //PLUGIN_DATA_H
