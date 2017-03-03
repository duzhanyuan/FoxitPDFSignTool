
// CCSActiveX_VCTestDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "CCSActiveX_VCTest.h"
#include "CCSActiveX_VCTestDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCCSActiveX_VCTestDlg 对话框



CCCSActiveX_VCTestDlg::CCCSActiveX_VCTestDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_CCSACTIVEX_VCTEST_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCCSActiveX_VCTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_STACTIVEXCTRL1, m_stActiveX);
}

BEGIN_MESSAGE_MAP(CCCSActiveX_VCTestDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CCCSActiveX_VCTestDlg::OnBnClickedOk)
	ON_WM_CTLCOLOR()
	ON_WM_SIZE()
END_MESSAGE_MAP()


// CCCSActiveX_VCTestDlg 消息处理程序

BOOL CCCSActiveX_VCTestDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	//LoadActiveX(TEXT("CSActiveX.Grid"), __uuidof(CSActiveX::IGrid), 0, 0, 400, 300);

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CCCSActiveX_VCTestDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CCCSActiveX_VCTestDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



//void CCCSActiveX_VCTestDlg::LoadActiveX(LPCTSTR strActiveXName, REFIID riidOfActiveX, int x, int y, int nWidth, int nHeight)
//{
//	//Initialize ATL control containment code.
//	BOOL(WINAPI *m_AtlAxWinInit)();
//	m_AtlAxWinInit = (BOOL(WINAPI *)(void))::GetProcAddress
//	(hATLLib, "AtlAxWinInit");
//	m_AtlAxWinInit();
//	// Get the dimensions of the main window's client
//	// area, and enumerate the child windows. Pass the
//	// dimensions to the child windows during enumeration.
//	m_hActiveXSelf = ::CreateWindowEx(
//		WS_EX_CLIENTEDGE, \
//		TEXT("AtlAxWin"), \
//		strActiveXName, \
//		WS_CHILD | WS_VISIBLE | WS_EX_RTLREADING, \
//		x, y, nWidth, nHeight, \
//		this->m_hWnd, \
//		NULL, \
//		NULL, \
//		NULL);
//	if (!m_hActiveXSelf)
//	{
//		::MessageBox(NULL, TEXT("Can not load AtlAxWin!"),
//			TEXT(""), MB_OK | MB_ICONSTOP);
//		throw int(106901);
//	}
//	HRESULT(WINAPI *m_AtlAxGetControl) (HWND h, IUnknown** pp);
//	m_AtlAxGetControl = (HRESULT(WINAPI *)
//		(HWND, IUnknown**))::GetProcAddress(hATLLib, "AtlAxGetControl");
//	m_AtlAxGetControl(m_hActiveXSelf, &m_pUnk);
//	m_pUnk->QueryInterface(riidOfActiveX, (LPVOID *)&m_pDotNetCOMPtr);
//	if (m_pDotNetCOMPtr != NULL)
//	{
//		m_pDotNetCOMPtr->SetAdapterDllPtr((long)this->m_hWnd);
//	}
//	else
//	{
//		// Get the dimensions of the main window's client
//		// area, and enumerate the child windows. Pass the
//		// dimensions to the child windows during enumeration.
//		::DestroyWindow(m_hActiveXSelf);
//		m_hActiveXSelf = ::CreateWindowEx(
//			WS_EX_CLIENTEDGE,
//			TEXT("AtlAxWin"),
//			TEXT("MSHTML:""Please register ActiveX control before using this plugin."""),
//			WS_CHILD | WS_VISIBLE | WS_CLIPCHILDREN |
//			WS_EX_RTLREADING,
//			x, y, nWidth, nHeight,
//			this->m_hWnd,
//			NULL,
//			NULL,
//			NULL);
//	}
//}


//#include "CDatePngGenerator0.h"

void CCCSActiveX_VCTestDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码

	this->m_stActiveX.Pass();

	CDialogEx::OnOK();
}


HBRUSH CCCSActiveX_VCTestDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  在此更改 DC 的任何特性

	// TODO:  如果默认的不是所需画笔，则返回另一个画笔
	return hbr;
}
BEGIN_EVENTSINK_MAP(CCCSActiveX_VCTestDlg, CDialogEx)
	ON_EVENT(CCCSActiveX_VCTestDlg, IDC_FOXITPDFSDKPROCTRL1, 59, CCCSActiveX_VCTestDlg::OnDbClickExFoxitpdfsdkproctrl1, VTS_I4 VTS_I4 VTS_I4 VTS_PBOOL)
	ON_EVENT(CCCSActiveX_VCTestDlg, IDC_FOXITPDFSDKPROCTRL1, 3, CCCSActiveX_VCTestDlg::OnZoomChangeFoxitpdfsdkproctrl1, VTS_NONE)
END_EVENTSINK_MAP()


void CCCSActiveX_VCTestDlg::OnDbClickExFoxitpdfsdkproctrl1(long hWnd, long ClientX, long ClientY, BOOL* bRet)
{
	// TODO: 在此处添加消息处理程序代码
}


void CCCSActiveX_VCTestDlg::OnZoomChangeFoxitpdfsdkproctrl1()
{
	// TODO: 在此处添加消息处理程序代码
}


void CCCSActiveX_VCTestDlg::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码

	CRect cRect;
	this->GetWindowRect(&cRect);
	int width = cRect.right - cRect.left - 20;
	int height = cRect.bottom - cRect.top - 39;
	if(this->m_stActiveX.GetSafeHwnd() != nullptr)
		this->m_stActiveX.MoveWindow(CRect(0, 0, width, height - 40));
}
