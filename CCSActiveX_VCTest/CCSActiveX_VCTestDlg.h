
// CCSActiveX_VCTestDlg.h : 头文件
//

#pragma once
#include "CDSTActiveX0.h"


// CCCSActiveX_VCTestDlg 对话框
class CCCSActiveX_VCTestDlg : public CDialogEx
{
// 构造
public:
	CCCSActiveX_VCTestDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CCSACTIVEX_VCTEST_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
