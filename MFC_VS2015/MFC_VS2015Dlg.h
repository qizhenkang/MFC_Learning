
// MFC_VS2015Dlg.h : 头文件
//

#pragma once


// CMFC_VS2015Dlg 对话框
class CMFC_VS2015Dlg : public CDialogEx
{
// 构造
public:
	CMFC_VS2015Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_VS2015_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedAddButton();
	double m_editSummand;
	double m_editAddend;
	double m_editSum;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedInstructButton();
};
