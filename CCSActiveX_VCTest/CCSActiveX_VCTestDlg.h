
// CCSActiveX_VCTestDlg.h : ͷ�ļ�
//

#pragma once
#include "CDSTActiveX0.h"


// CCCSActiveX_VCTestDlg �Ի���
class CCCSActiveX_VCTestDlg : public CDialogEx
{
// ����
public:
	CCCSActiveX_VCTestDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CCSACTIVEX_VCTEST_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()


	HWND m_hActiveXSelf;
	IUnknown* m_pUnk;

	//void LoadActiveX(LPCTSTR strActiveXName, REFIID riidOfActiveX, int x, int y, int nWidth, int nHeight);
public:
	afx_msg void OnBnClickedOk();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	DECLARE_EVENTSINK_MAP()
	void OnDbClickExFoxitpdfsdkproctrl1(long hWnd, long ClientX, long ClientY, BOOL* bRet);
	void OnZoomChangeFoxitpdfsdkproctrl1();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	CDSTActiveX0 m_stActiveX;
};
