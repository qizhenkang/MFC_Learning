// AddPage.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC_VS2015.h"
#include "AddPage.h"
#include "afxdialogex.h"


// CAddPage �Ի���

IMPLEMENT_DYNAMIC(CAddPage, CPropertyPage)

CAddPage::CAddPage()
	: CPropertyPage(IDD_ADD_PAGE)
{

}

CAddPage::~CAddPage()
{
}

void CAddPage::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CAddPage, CPropertyPage)
END_MESSAGE_MAP()


// CAddPage ��Ϣ�������


BOOL CAddPage::OnSetActive()
{
	// TODO: �ڴ����ר�ô����/����û���
	// ��ø����ڣ������Ա�CPropertySheet��
	CPropertySheet* psheet = (CPropertySheet*)GetParent();
	//�������Ա�ֻ�С���ɡ���ť
	psheet->SetFinishText(_T("���"));

	return CPropertyPage::OnSetActive();
}


BOOL CAddPage::OnWizardFinish()
{
	// TODO: �ڴ����ר�ô����/����û���
	// ��ʾ�����
	MessageBox(_T("ʹ��˵�������Ķ��꣡"));

	return CPropertyPage::OnWizardFinish();
}
