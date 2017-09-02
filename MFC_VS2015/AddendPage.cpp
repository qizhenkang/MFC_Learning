// AddendPage.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC_VS2015.h"
#include "AddendPage.h"
#include "afxdialogex.h"


// CAddendPage 对话框

IMPLEMENT_DYNAMIC(CAddendPage, CPropertyPage)

CAddendPage::CAddendPage()
	: CPropertyPage(IDD_ADDEND_PAGE)
{

}

CAddendPage::~CAddendPage()
{
}

void CAddendPage::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CAddendPage, CPropertyPage)
END_MESSAGE_MAP()


// CAddendPage 消息处理程序
