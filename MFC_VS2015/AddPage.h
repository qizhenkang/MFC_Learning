#pragma once


// CAddPage �Ի���

class CAddPage : public CPropertyPage
{
	DECLARE_DYNAMIC(CAddPage)

public:
	CAddPage();
	virtual ~CAddPage();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADD_PAGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnSetActive();
	virtual BOOL OnWizardFinish();
};
