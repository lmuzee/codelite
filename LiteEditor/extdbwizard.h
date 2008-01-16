#ifndef EXTDBWIZARD_H
#define EXTDBWIZARD_H
#include <wx/wizard.h>
#include "ext_db_page1.h"
#include "ext_db_page2.h"
#include "ext_db_page3.h"
#include "extdbdata.h"

class ExtDbWizard : public wxWizard 
{
	wxWizardPageSimple *m_page1;
	wxWizardPageSimple *m_page2;
	wxWizardPageSimple *m_page3;

public:
	ExtDbWizard(wxWindow *parent, wxWindowID id);
	virtual ~ExtDbWizard();

	/**
	 * Start the wizard
	 * \param info if the wizard succeeded, info will contain the data collected from user
	 * \return true on successfull run, false otherwise
	 */
	bool Run(ExtDbData &info);
};

#endif //EXTDBWIZARD_H
