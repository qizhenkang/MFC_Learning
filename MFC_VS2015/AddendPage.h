#pragma once


// CAddendPage �Ի���

class CAddendPage : public CPropertyPage
{
	DECLARE_DYNAMIC(CAddendPage)

public:
	CAddendPage();
	virtual ~CAddendPage();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADDEND_PAGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
