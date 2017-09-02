#pragma once
#include "SummandPage.h"
#include "AddendPage.h"
#include "AddPage.h"


// CAddSheet

class CAddSheet : public CPropertySheet
{
	DECLARE_DYNAMIC(CAddSheet)
	CSummandPage	m_summandPage;
	CAddendPage     m_addendPage;
	CAddPage        m_addPage;

public:
	CAddSheet(UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	CAddSheet(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	virtual ~CAddSheet();

protected:
	DECLARE_MESSAGE_MAP()
};


