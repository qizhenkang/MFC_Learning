
// MFC_VS2015.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFC_VS2015App: 
// �йش����ʵ�֣������ MFC_VS2015.cpp
//

class CMFC_VS2015App : public CWinApp
{
public:
	CMFC_VS2015App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFC_VS2015App theApp;