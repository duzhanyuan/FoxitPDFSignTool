// STActiveXCtrl.cpp : CSTActiveXCtrl ActiveX 控件类的实现。

#include "stdafx.h"
#include "STActiveX.h"
#include "STActiveXCtrl.h"
#include "STActiveXPropPage.h"
#include "afxdialogex.h"
#include <io.h>			// _access
#include <GdiPlus.h>	// 绘图
//#include <gdiplusflat.h>
#include <vector>



using namespace Gdiplus;
//using namespace Gdiplus::DllExports;
//using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CSTActiveXCtrl, COleControl)

// 消息映射

BEGIN_MESSAGE_MAP(CSTActiveXCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	ON_WM_CREATE()
	//ON_WM_CTLCOLOR()
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1_Click)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2_Click)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3_Click)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4_Click)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5_Click)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6_Click)
	ON_BN_CLICKED(IDC_BUTTON7, OnButton7_Click)
	ON_BN_CLICKED(IDC_BUTTON8, OnButton8_Click)
	ON_BN_CLICKED(IDC_BUTTON9, OnButton9_Click)
	ON_BN_CLICKED(IDC_BUTTON10, OnButton10_Click)
	ON_BN_CLICKED(IDC_BUTTON11, OnButton11_Click)
	ON_BN_CLICKED(IDC_BUTTON12, OnButton12_Click)
	ON_BN_CLICKED(IDC_BUTTON13, OnButton13_Click)
	ON_BN_CLICKED(IDC_BUTTON14, OnButton14_Click)
	ON_BN_CLICKED(IDC_BUTTON15, OnButton15_Click)
	ON_BN_CLICKED(IDC_BUTTON16, OnButton16_Click)
	ON_BN_CLICKED(IDC_BUTTON17, OnButton17_Click)
END_MESSAGE_MAP()

// 调度映射

BEGIN_DISPATCH_MAP(CSTActiveXCtrl, COleControl)
	DISP_FUNCTION_ID(CSTActiveXCtrl, "OpenFile", dispidOpenFile, OpenFile, VT_BSTR, VTS_BSTR VTS_BSTR)
	DISP_FUNCTION_ID(CSTActiveXCtrl, "Pass", dispidPass, Pass, VT_BSTR, VTS_NONE)
END_DISPATCH_MAP()

// 事件映射

BEGIN_EVENT_MAP(CSTActiveXCtrl, COleControl)
END_EVENT_MAP()

// 自定义事件映射

BEGIN_EVENTSINK_MAP(CSTActiveXCtrl, COleControl)
	ON_EVENT(CSTActiveXCtrl, IDB_FOXITSDKCTRL1, 59, CSTActiveXCtrl::OnDbClickExFoxitpdfsdkproctrl1, VTS_I4 VTS_I4 VTS_I4 VTS_PBOOL)
	ON_EVENT(CSTActiveXCtrl, IDB_FOXITSDKCTRL1, 3, CSTActiveXCtrl::OnZoomChangeFoxitpdfsdkproctrl1, VTS_NONE)
END_EVENTSINK_MAP()

// 属性页

// TODO: 根据需要添加更多属性页。请记住增加计数!
BEGIN_PROPPAGEIDS(CSTActiveXCtrl, 1)
	PROPPAGEID(CSTActiveXPropPage::guid)
END_PROPPAGEIDS(CSTActiveXCtrl)

// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CSTActiveXCtrl, "STACTIVEX.STActiveXCtrl.1",
	0xd3285ec9, 0x5667, 0x4b9b, 0xa9, 0x89, 0xca, 0x98, 0xdd, 0x1f, 0x8e, 0x59)

	// 键入库 ID 和版本

	IMPLEMENT_OLETYPELIB(CSTActiveXCtrl, _tlid, _wVerMajor, _wVerMinor)

	// 接口 ID

	const IID IID_DSTActiveX = { 0x5AC282DB, 0xCB80, 0x4A59, { 0xA5, 0xC6, 0x23, 0x73, 0x13, 0x94, 0xD1, 0x1 } };
const IID IID_DSTActiveXEvents = { 0x8D2F6C43, 0xAD2F, 0x4E63, { 0x90, 0xDB, 0x24, 0xDC, 0xA7, 0x19, 0x9, 0xA4 } };

// 控件类型信息

static const DWORD _dwSTActiveXOleMisc =
OLEMISC_ACTIVATEWHENVISIBLE |
OLEMISC_SETCLIENTSITEFIRST |
OLEMISC_INSIDEOUT |
OLEMISC_CANTLINKINSIDE |
OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CSTActiveXCtrl, IDS_STACTIVEX, _dwSTActiveXOleMisc)

// CSTActiveXCtrl::CSTActiveXCtrlFactory::UpdateRegistry -
// 添加或移除 CSTActiveXCtrl 的系统注册表项

BOOL CSTActiveXCtrl::CSTActiveXCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO:  验证您的控件是否符合单元模型线程处理规则。
	// 有关更多信息，请参考 MFC 技术说明 64。
	// 如果您的控件不符合单元模型规则，则
	// 必须修改如下代码，将第六个参数从
	// afxRegApartmentThreading 改为 0。

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_STACTIVEX,
			IDB_STACTIVEX,
			afxRegApartmentThreading,
			_dwSTActiveXOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// CSTActiveXCtrl::CSTActiveXCtrl - 构造函数

CSTActiveXCtrl::CSTActiveXCtrl()
{
	InitializeIIDs(&IID_DSTActiveX, &IID_DSTActiveXEvents);
	// TODO:  在此初始化控件的实例数据。

	// Important：Need in activeX control to draw another activeX control
	AfxEnableControlContainer();

}

// CSTActiveXCtrl::~CSTActiveXCtrl - 析构函数

CSTActiveXCtrl::~CSTActiveXCtrl()
{
	// TODO:  在此清理控件的实例数据。
}

// CSTActiveXCtrl::OnDraw - 绘图函数

void CSTActiveXCtrl::OnDraw(
	CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	// TODO:  用您自己的绘图代码替换下面的代码。

	CRect cRect;
	this->GetClientRect(&cRect);

	LPRECT lpRect = new RECT();
	lpRect->top = 0;
	lpRect->left = 0;
	lpRect->bottom = cRect.bottom - cRect.top;
	lpRect->right = cRect.right - cRect.left;
	pdc->Rectangle(lpRect);
}

// CSTActiveXCtrl::DoPropExchange - 持久性支持

void CSTActiveXCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: 为每个持久的自定义属性调用 PX_ 函数。
}


// CSTActiveXCtrl::OnResetState - 将控件重置为默认状态

void CSTActiveXCtrl::OnResetState()
{
	COleControl::OnResetState();  // 重置 DoPropExchange 中找到的默认值

	// TODO:  在此重置任意其他控件状态。
}


// CSTActiveXCtrl 消息处理程序

int CSTActiveXCtrl::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (COleControl::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码

// 创建工具栏按钮

	for (int i = 0; i < CSTActiveXCtrl::SBtnCount; i++)
	{
		m_btnList[i].Create(TEXT(""), BS_DEFPUSHBUTTON | WS_VISIBLE | WS_CHILD | BS_BITMAP | BS_OWNERDRAW, CRect(32 * i + 1, 0 + 1, 32 * (i + 1) + 1, 32 + 1), this, IDC_BUTTON1 + i);
		m_btnList[i].LoadBitmaps(IDB_BITMAP1 + i * 2, IDB_BITMAP1 + i * 2 + 1, IDB_BITMAP1 + i * 2, IDB_BITMAP1 + i * 2 + 1);
		m_btnList[i].SizeToContent();  //使按钮适应图片大小
		m_btnList[i].ShowWindow(TRUE);
	}

// 创建搜索框

	LPRECT lpRect = new RECT();
	this->m_btnList[0].GetClientRect(lpRect);
	GetDlgItem(IDC_BUTTON1 + this->SBtnCount - 1)->GetWindowRect(lpRect);//获取控件基于全频的位置
	ScreenToClient(lpRect);//转换为对话框上的相对位置
	int x = lpRect->right;
	int y = lpRect->top;
	m_pEdit = new CSkinEdit();                  // 基于2D效果的编辑框  
	CRect rect;
	rect.SetRect(x + 10, y + 10, x + 10 + 200, y + 10 + 20); // 确定编辑框在对话框中的尺寸大小  
	m_pEdit->Create(WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL, rect, this, IDC_EDIT1);
	this->m_pEdit->ShowWindow(TRUE);
	//LOGFONT lf;
	//CFont font;
	//::GetObject((HFONT)GetStockObject(SYSTEM_FONT), sizeof(lf), &lf);
	//font.CreateFontIndirect(&lf);
	static CFont font;
	font.DeleteObject();
	font.CreatePointFont(100, _T("宋体"));
	m_pEdit->SetFont(&font);
	m_pEdit->SetLimitText(MAX_PATH);

// 创建PDF显示控件

	CRect cRect;
	this->GetClientRect(&cRect);
	int width = cRect.right - cRect.left - 2;
	int height = cRect.bottom - cRect.top - 39;
	this->m_foxitPdfSdkCtrl.Create(TEXT(""), TEXT(""), WS_VISIBLE | WS_CHILD, CRect(1, 39, width + 1, height + 39 - 1), this, IDB_FOXITSDKCTRL1);
	this->m_foxitPdfSdkCtrl.ShowWindow(TRUE);
	this->m_foxitPdfSdkCtrl.ShowToolBar(false);
	this->m_foxitPdfSdkCtrl.ShowTitleBar(false);
	CString cfgFile = L"./Config.ini";
	USES_CONVERSION;
	if ((_access(W2A(cfgFile), 0x06)) == -1)
	{
		WritePrivateProfileStringW(L"UNLOCK", L"sn", L"SDKAXYX9470", cfgFile);
		WritePrivateProfileStringW(L"UNLOCK", L"unlockCode", L"2B50AF883D293B810017F0C069FAC2F93420E64E", cfgFile);
	}
	WCHAR sn[MAX_PATH];
	WCHAR unlockCode[MAX_PATH];
	GetPrivateProfileStringW(L"UNLOCK", L"sn", L"", sn, MAX_PATH, cfgFile);
	GetPrivateProfileStringW(L"UNLOCK", L"unlockCode", L"", unlockCode, MAX_PATH, cfgFile);
	this->m_foxitPdfSdkCtrl.UnLockActiveX(sn, unlockCode);

	//OpenFile(L"C:\\Users\\72975\\Desktop\\unity游戏开发指南.pdf", L"C:\\Users\\72975\\OneDrive\\PIC\\SndPdHI2UFZZSHpnMlNaTlkyc0xsbnJncGgvZE9BZXdPUlBLWmp3Nm9VdWNBcllDaHZVNTN3PT0.jpg");

	return 0;
}


HBRUSH CSTActiveXCtrl::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = COleControl::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  在此更改 DC 的任何特性
	HBRUSH hbrEdit = ::CreateSolidBrush(RGB(0, 0, 0));
	//if (nCtlColor == CTLCOLOR_STATIC)
	{
		if (pWnd->GetDlgCtrlID() == IDC_EDIT1)
		{
			pDC->SetBkColor(RGB(10, 210, 0));
			pDC->SetTextColor(RGB(255, 255, 0));
			return hbrEdit;
		}
	}
	// TODO:  如果默认的不是所需画笔，则返回另一个画笔
	return hbr;
}
void CSTActiveXCtrl::OnSize(UINT nType, int cx, int cy)
{
	COleControl::OnSize(nType, cx, cy);
	
	// TODO: 在此处添加消息处理程序代码

	CRect cRect;
	this->GetWindowRect(&cRect);
	int width = cRect.right - cRect.left - 2;
	int height = cRect.bottom - cRect.top - 39;
	this->m_foxitPdfSdkCtrl.MoveWindow(CRect(1, 39, width + 1, height + 39 - 1));
}
/// 屏蔽图片的双击事件
void CSTActiveXCtrl::OnDbClickExFoxitpdfsdkproctrl1(long hWnd, long ClientX, long ClientY, BOOL* bRet)
{
	// TODO: 在此处添加消息处理程序代码
	*bRet = TRUE;
}
/// 视图大小改变事件，同步修改签名尺寸
void CSTActiveXCtrl::OnZoomChangeFoxitpdfsdkproctrl1()
{
	// TODO: 在此处添加消息处理程序代码
	this->SetSignImgs();
}
/// 控制编辑框删除用户
BOOL CSTActiveXCtrl::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	if (WM_KEYDOWN == pMsg->message/* && this->m_pEdit->GetSafeHwnd() == ::GetFocus()*/)
	{
		CString sFind;
		switch (pMsg->wParam)
		{
		case VK_RETURN:
			this->m_pEdit->GetWindowText(sFind);
			this->m_foxitPdfSdkCtrl.FindFirst(sFind, false, false);
			break;
		case VK_UP:
			this->m_foxitPdfSdkCtrl.FindNext(FALSE);
			break;
		case VK_DOWN:
			this->m_foxitPdfSdkCtrl.FindNext(TRUE);
			break;
		default:
			break;
		}
	}

	return COleControl::PreTranslateMessage(pMsg);
}
/// 首页
void CSTActiveXCtrl::OnButton1_Click()
{
	this->m_foxitPdfSdkCtrl.GoToPage(0);
}
/// 上一页
void CSTActiveXCtrl::OnButton2_Click()
{
	this->m_foxitPdfSdkCtrl.GoToPrevPage();
}
/// 下一页
void CSTActiveXCtrl::OnButton3_Click()
{
	this->m_foxitPdfSdkCtrl.GoToNextPage();
}
/// 尾页
void CSTActiveXCtrl::OnButton4_Click()
{
	int pageCount = this->m_foxitPdfSdkCtrl.GetPageCount();
	this->m_foxitPdfSdkCtrl.GoToPage(pageCount - 1);
}
/// 上一视图
void CSTActiveXCtrl::OnButton5_Click()
{
	this->m_foxitPdfSdkCtrl.GoBackwardStack();
}
/// 下一视图
void CSTActiveXCtrl::OnButton6_Click()
{
	this->m_foxitPdfSdkCtrl.GoForwardStack();
}
/// 顺时针旋转
void CSTActiveXCtrl::OnButton7_Click()
{
	short cur = this->m_foxitPdfSdkCtrl.GetRotate();
	this->m_foxitPdfSdkCtrl.SetRotate((short)((cur + 1) % 4));
}
/// 逆时针旋转
void CSTActiveXCtrl::OnButton8_Click()
{
	short cur = this->m_foxitPdfSdkCtrl.GetRotate();
	this->m_foxitPdfSdkCtrl.SetRotate((short)((cur + 4 - 1) % 4));
}
/// 放大
void CSTActiveXCtrl::OnButton9_Click()
{
	int zoomLevel = this->m_foxitPdfSdkCtrl.GetZoomLevel();
	this->m_foxitPdfSdkCtrl.SetZoomLevel(zoomLevel * 2);
}
/// 缩小
void CSTActiveXCtrl::OnButton10_Click()
{
	int zoomLevel = this->m_foxitPdfSdkCtrl.GetZoomLevel();
	this->m_foxitPdfSdkCtrl.SetZoomLevel(zoomLevel / 2);
}
/// 放大工具
void CSTActiveXCtrl::OnButton11_Click()
{
	this->m_foxitPdfSdkCtrl.SetCurrentTool(L"ZoomIn Tool");
}
/// 缩小工具
void CSTActiveXCtrl::OnButton12_Click()
{
	this->m_foxitPdfSdkCtrl.SetCurrentTool(L"ZoomOut Tool");
}
/// 手型工具
void CSTActiveXCtrl::OnButton13_Click()
{
	this->m_foxitPdfSdkCtrl.SetCurrentTool(L"Hand Tool");
}
/// 实际大小
void CSTActiveXCtrl::OnButton14_Click()
{
	this->m_foxitPdfSdkCtrl.SetZoomLevel(0);
}
/// 适应页面
void CSTActiveXCtrl::OnButton15_Click()
{
	this->m_foxitPdfSdkCtrl.SetZoomLevel(1);
}
/// 适应页宽
void CSTActiveXCtrl::OnButton16_Click()
{
	this->m_foxitPdfSdkCtrl.SetZoomLevel(2);
}
/// 搜索
void CSTActiveXCtrl::OnButton17_Click()
{
	CString sFind;
	this->m_pEdit->GetWindowText(sFind);
	bool result = this->m_foxitPdfSdkCtrl.FindFirst(sFind, false, false);
}


/// abandoned
BOOL CSTActiveXCtrl::LoadImageFromResource(ATL::CImage *pImage, UINT nResID, LPCTSTR lpTyp)
{
	if (pImage == NULL)
	{
		return false;
	}
	pImage->Destroy();
	// 查找资源
	HRSRC hRsrc = ::FindResource(AfxGetResourceHandle(), MAKEINTRESOURCE(nResID), lpTyp);
	if (hRsrc == NULL)
	{
		return false;
	}
	// 加载资源
	HGLOBAL hImgData = ::LoadResource(AfxGetResourceHandle(), hRsrc);
	if (hImgData == NULL)
	{
		::FreeResource(hImgData);
		return false;
	}
	// 锁定内存中的指定资源
	LPVOID lpVoid = ::LockResource(hImgData);
	LPSTREAM pStream = NULL;
	DWORD dwSize = ::SizeofResource(AfxGetResourceHandle(), hRsrc);
	HGLOBAL hNew = ::GlobalAlloc(GHND, dwSize);
	LPBYTE lpByte = (LPBYTE)::GlobalLock(hNew);
	::memcpy(lpByte, lpVoid, dwSize);
	// 解除内存中的指定资源
	::GlobalUnlock(hNew);
	// 从指定内存创建流对象
	HRESULT ht = ::CreateStreamOnHGlobal(hNew, TRUE, &pStream);
	if (ht != S_OK)
	{
		GlobalFree(hNew);
	}
	else
	{
		// 加载图片
		pImage->Load(pStream);
		GlobalFree(hNew);
	}
	// 释放资源
	::FreeResource(hImgData);
	return true;
}
BOOL CSTActiveXCtrl::ImageFromIDResource(UINT nID, LPCTSTR sTR, Gdiplus::Image *&pImg)
{
	HINSTANCE hInst = AfxGetResourceHandle();
	HRSRC hRsrc = ::FindResource(hInst, MAKEINTRESOURCE(nID), sTR); // type
	if (!hRsrc)
	{
		return FALSE;
	}
	// load resource into memory
	DWORD len = SizeofResource(hInst, hRsrc);
	BYTE* lpRsrc = (BYTE*)LoadResource(hInst, hRsrc);
	if (!lpRsrc)
	{
		return FALSE;
	}
	// Allocate global memory on which to create stream
	HGLOBAL m_hMem = GlobalAlloc(GMEM_FIXED, len);
	BYTE* pmem = (BYTE*)GlobalLock(m_hMem);
	memcpy(pmem, lpRsrc, len);
	GlobalUnlock(m_hMem);
	IStream* pstm;
	CreateStreamOnHGlobal(m_hMem, FALSE, &pstm);
	// load from stream
	pImg = Gdiplus::Image::FromStream(pstm);
	// free/release stuff
	pstm->Release();
	FreeResource(lpRsrc);
	GlobalFree(m_hMem);
	return TRUE;
}
//BOOL CSTActiveXCtrl::GenerateDateImage()
//{
//	CClientDC dc(this);
//	HDC hdcSrc = CreateCompatibleDC(dc);
//	HDC hdcDes = CreateCompatibleDC(dc);
//	vector<ATL::CImage> imgList(SDigitPicCount);
//
//	//HBITMAP hDesBmp = CreateCompatibleBitmap(dc, SDigitPicMountOfDate*SDigitPicWidth, SDigitPicHeight);
//	//if (hDesBmp == nullptr)
//	//{
//	//	CString msg;
//	//	msg.Format(L"CreateCompatibleBitmap失败：hDesBmp");
//	//	MessageBox(msg);
//	//	return false;
//	//}
//
//	for (int i = 0; i < SDigitPicCount; i++)
//	{
//		ATL::CImage image;
//		MessageBox(L"1");
//		//image.LoadFromResource(AfxGetResourceHandle(), IDB_PNG1 + i);
//		LoadImageFromResource(&image, IDB_PNG1 + i, L"sd0.png");
//		MessageBox(L"2");
//		if (image.IsNull())
//		{
//			CString msg;
//			msg.Format(L"LoadBitmap失败：第%d张图片", i);
//			MessageBox(msg);
//			return false;
//		}
//		
//		MessageBox(L"LoadBitmap成功");
//
//		if (image.GetBPP() == 32) //确认该图像包含Alpha通道
//		{
//			for (int j = 0; j < image.GetWidth(); j++)
//			{
//				for (int k = 0; k < image.GetHeight(); k++)
//				{
//					byte *pByte = static_cast<byte *>(image.GetPixelAddress(j, k));
//					pByte[0] = pByte[0] * pByte[3] / 255;
//					pByte[1] = pByte[1] * pByte[3] / 255;
//					pByte[2] = pByte[2] * pByte[3] / 255;
//				}
//			}
//		}
//
//		imgList.push_back(image);
//
//		//image.Draw(pDC->m_hDC, 0, 0);
//		//image.Destroy();
//		//ReleaseDC(pDC);
//		//HBITMAP hSrcBmp = ::LoadBitmap(AfxGetApp()->m_hInstance, MAKEINTRESOURCE(IDB_PNG1 + i));
//		//if (hSrcBmp == nullptr)
//		//{
//		//	CString msg;
//		//	msg.Format(L"LoadBitmap失败：第%d张图片", i);
//		//	MessageBox(msg);
//		//	return false;
//		//}
//		//imgList.push_back(hSrcBmp);
//		//CBitmap bitmap;
//		//bitmap.Attach(hSrcBmp);	//关联位图对象
//		//BITMAP bmp;
//		//bitmap.GetBitmap(&bmp);	//获取位图信息
//		//int destWidth = 0;
//		//int destHeight = CSTActiveXCtrl::SSignSize;
//		//int srWidth = bmp.bmWidth;
//		//int srHeight = bmp.bmHeight;
//		//if (srHeight != destHeight)
//		//{
//		//	destWidth = (int)((double)srWidth * (double)destHeight / (double)srHeight);
//		//}
//		//else
//		//{
//		//	destWidth = srWidth;
//		//	destHeight = srHeight;
//		//}
//		//sizeList.push_back(SizeF(destWidth, destHeight));
//	}
//
//	SYSTEMTIME st = { 0 };
//	::GetLocalTime(&st);
//
//	int year = st.wYear;
//	int month = st.wMonth;
//	int day = st.wDay;
//	int hour = st.wHour;
//	int minute = st.wMinute;
//
//	int drawTask[SDigitPicMountOfDate];
//
//	drawTask[0] = year / 1000;
//	drawTask[0] = year % 1000 / 100;
//	drawTask[0] = year % 100 / 10;
//	drawTask[0] = year % 10 / 1;
//	drawTask[0] = 10;
//	drawTask[0] = month / 10;
//	drawTask[0] = month % 10 / 1;
//	drawTask[0] = 10;
//	drawTask[0] = day / 10;
//	drawTask[0] = day % 10 / 1;
//	drawTask[0] = 12;
//	drawTask[0] = hour / 10;
//	drawTask[0] = hour % 10 / 1;
//	drawTask[0] = 11;
//	drawTask[0] = minute / 10;
//	drawTask[0] = minute % 10 / 1;
//
//
//	//HBITMAP oldHDesBmp = static_cast<HBITMAP>(SelectObject(hdcDes, hDesBmp));
//	
//	for (int i = 0, loc = 0; i < SDigitPicMountOfDate; i++)
//	{
//		//HBITMAP oldHSrcBmp = static_cast<HBITMAP>(SelectObject(hdcSrc, imgList[i]));
//		//StretchBlt(hdcDes, 0, loc += SDigitPicWidth, SDigitPicWidth, SDigitPicHeight, hdcSrc, 0, 0, SDigitPicWidth, SDigitPicHeight, SRCCOPY);
//		imgList[i].Draw(hdcDes, 0, loc += SDigitPicWidth);
//	}
//
//	
//
//	//ATL::CImage image;
//	//image.Attach(hDesBmp);
//	//HRESULT hResult = image.Save(_T(""));
//	//if (FAILED(hResult))
//	//{
//	//	CString msg;
//	//	msg.Format(L"保存图片失败");
//	//	MessageBox(msg);
//	//	return false;
//	//}
//	//image.Detach();
//
//	::DeleteDC(hdcDes);
//	::DeleteDC(hdcSrc);
//	::DeleteDC(dc);
//	//for (int i = 0; i < imgList.size(); i++)
//	//{
//	//	::DeleteObject(imgList.at(i));	
//	//}
//	//::DeleteObject(hDesBmp);
//
//	return true;
//}


BOOL CSTActiveXCtrl::GenerateDateImage()
{
	CoInitialize(NULL);
	CLSID clsid;
	CLSIDFromProgID(OLESTR("PngGenerator.CDatePngGenerator"), &clsid);
	ATL::CComPtr<IDatePngGenerator> pGetRes;

	//HRESULT hResult = pGetRes.CoCreateInstance(clsid);
	//HRESULT hResult = CoCreateInstance(clsid, NULL, CLSCTX_ALL, __uuidof(IDatePngGenerator), (LPVOID*)&pGetRes);
	IClassFactory* p_classfactory;
	HRESULT hResult = CoGetClassObject(clsid, CLSCTX_ALL, NULL, IID_IClassFactory, (LPVOID*)&p_classfactory);
	
	if (hResult != S_OK)
		return false;
	
	hResult = p_classfactory->CreateInstance(NULL, __uuidof(IDatePngGenerator), (LPVOID*)&pGetRes);

	if (hResult != S_OK)
		return false;

	bool b = pGetRes->GenerateDateImage();
	
	pGetRes.Release();
	CoUninitialize();

	return b;
}
Gdiplus::Image* CSTActiveXCtrl::LoadImageEx(LPCTSTR pszFileName)
{
	ASSERT(pszFileName != NULL);

	CFile file;
	DWORD dwSize;

	// 打开文件  
	if (!file.Open(pszFileName,
		CFile::modeRead /*|
		CFile::shareDenyWrite*/))
	{
		TRACE(_T("Load (file): Error opening file %s\n"), pszFileName);
		return FALSE;
	};

	// 根据文件大小分配HGLOBAL内存  
	dwSize = (DWORD)file.GetLength();
	HGLOBAL hGlobal = GlobalAlloc(GMEM_MOVEABLE | GMEM_NODISCARD, dwSize);
	if (!hGlobal)
	{
		TRACE(_T("Load (file): Error allocating memory\n"));
		return FALSE;
	};

	char *pData = reinterpret_cast<char*>(GlobalLock(hGlobal));
	if (!pData)
	{
		TRACE(_T("Load (file): Error locking memory\n"));
		GlobalFree(hGlobal);
		return FALSE;
	};

	// 将文件内容读到HGLOBAL内存中  
	TRY
	{
		file.Read(pData, dwSize);
	}
	CATCH(CFileException, e);
	{
		TRACE(_T("Load (file): An exception occured while reading the file %s\n"),
			pszFileName);
		GlobalFree(hGlobal);
		e->Delete();
		file.Close();
		return FALSE;
	}
	END_CATCH

	GlobalUnlock(hGlobal);
	file.Close();

	// 利用hGlobal内存中的数据创建stream  
	IStream *pStream = NULL;
	if (CreateStreamOnHGlobal(hGlobal, TRUE, &pStream) != S_OK)
	{
		return FALSE;
	}

	Gdiplus::Image *pImage = Gdiplus::Image::FromStream(pStream);
	ASSERT(pImage != NULL);

		// 要加上这一句，否则由GlobalAlloc得来的hGlobal内存没有被释放，导致内存泄露，由于  
		// CreateStreamOnHGlobal第二个参数被设置为TRUE，所以调用pStream->Release()会自动  
		// 将hGlobal内存（参见msdn对CreateStreamOnHGlobal的说明）  
	pStream->Release();
	
	return pImage;
}
BOOL CSTActiveXCtrl::SetSignImgs()
{
	// 注意：原始图片是有大小的，这里设置的大小需要和原始图片做等比缩放，不然图片会变形
	double zoomLevel = (double)this->m_foxitPdfSdkCtrl.GetZoomLevel() / 100;

	// 设置签名图路径及宽高
	CString csSignedImagePath = this->m_ImgPath;
	//Image *imgSignedImage = Image::FromFile(csSignedImagePath);
	Image *imgSignedImage = this->LoadImageEx(csSignedImagePath);  // Image::FromFile(csSignedImagePath);
	if (!imgSignedImage)
		return FALSE;
	int nSignedImageHeight = (int)((double)CSTActiveXCtrl::SSignSize * zoomLevel);
	int nSignedImageWidth =
		(int)((double)imgSignedImage->GetWidth() / (double)imgSignedImage->GetHeight() * (double)nSignedImageHeight);
	this->m_foxitPdfSdkCtrl.SetSignedImageParams(csSignedImagePath, nSignedImageWidth, nSignedImageHeight);

	// 设置日期图路径及宽高
	CString csDateImagePath = _T("_Date.jpg");
	ULONG uLength = MAX_PATH;
	WCHAR wPath[MAX_PATH];
	GetCurrentDirectory(uLength, wPath);
	//Image *imgDateImage = Image::FromFile(csDateImagePath);
	Image *imgDateImage = this->LoadImageEx(csDateImagePath);	 //Image::FromFile(csDateImagePath);
	if (!imgDateImage)
		return FALSE;
	int nDateImageHeight = (int)((double)CSTActiveXCtrl::SSignSize * zoomLevel);
	int nDateImageWidth =
		(int)((double)imgDateImage->GetWidth() / (double)imgDateImage->GetHeight() * (double)nDateImageHeight
			* 0.8);		/*日期图片宽度需要适当缩放，显示更紧凑一点*/
	this->m_foxitPdfSdkCtrl.SetDateImageParams(csDateImagePath, nDateImageWidth, nDateImageHeight);

	return TRUE;
}
BSTR CSTActiveXCtrl::OpenFile(LPCTSTR pdfPath, LPCTSTR imgPath)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	CString strResult;

	// TODO: Add your dispatch handler code here
	while (1)	// goto语句
	{
		this->m_PdfPath = pdfPath;
		this->m_ImgPath = imgPath;
		USES_CONVERSION;
		if ((_access(W2A(pdfPath), 0x06)) == -1 || (_access(W2A(imgPath), 0x02)) == -1)
		{
			strResult = _T("给定文件不存在或者不具备读写访问权限");
			break;
		}
		if (!this->m_foxitPdfSdkCtrl.OpenFile(pdfPath, _T("")))
		{
			strResult = _T("打开PDF文件失败");
			break;
		}
		if (!this->GenerateDateImage())
		{
			strResult = _T("生成签名日期图片失败");
			break;
		}
		if (!this->SetSignImgs())
		{
			strResult = _T("设置签名图片参数失败");
			break;
		}

		strResult = _T("0");
		break;
	}

	return strResult.AllocSysString();
}
BSTR CSTActiveXCtrl::Pass(void)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	CString strResult;

	// TODO: Add your dispatch handler code here
	try {
		while (1)	// goto语句
		{
			CString strTmpPdfPath = m_PdfPath;
			strTmpPdfPath.MakeUpper();
			strTmpPdfPath.Replace(_T(".PDF"), _T("_TMP.PDF"));

			if (!this->m_foxitPdfSdkCtrl.IsSDImageExist())
			{
				strResult = _T("未检测到签名");
				break;
			}
			else {
				if (!this->m_foxitPdfSdkCtrl.ComposeImageAndSaveAs(strTmpPdfPath))
				{
					strResult = _T("保存临时文档失败");
					break;
				}

				this->m_foxitPdfSdkCtrl.CloseFile();

				BOOL isSuccess = false;
				int times = 100;
				while (isSuccess || times-- > 0)
				{
					isSuccess = ::DeleteFile(m_PdfPath);
					isSuccess = ::MoveFile(strTmpPdfPath, m_PdfPath);
					if (isSuccess)
						break;
					::Sleep(100);
				}
				if (!isSuccess)
					strResult = _T("保存临时文档到目标文档失败");
				else
					strResult = _T("0");
			}

			break;
		}
	}
	catch (...)
	{
		strResult = _T("保存发生异常");
	}

	return strResult.AllocSysString();
}
