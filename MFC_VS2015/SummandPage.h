#pragma once


// CSummandPage �Ի���

class CSummandPage : public CPropertyPage
{
	DECLARE_DYNAMIC(CSummandPage)

public:
	CSummandPage();
	virtual ~CSummandPage();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SUMMAND_PAGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnSetActive();
};
