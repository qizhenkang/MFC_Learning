
// MFC_VS2015Dlg.h : ͷ�ļ�
//

#pragma once


// CMFC_VS2015Dlg �Ի���
class CMFC_VS2015Dlg : public CDialogEx
{
// ����
public:
	CMFC_VS2015Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_VS2015_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
