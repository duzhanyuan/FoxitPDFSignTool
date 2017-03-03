// STActiveXCtrl.cpp : CSTActiveXCtrl ActiveX �ؼ����ʵ�֡�

#include "stdafx.h"
#include "STActiveX.h"
#include "STActiveXCtrl.h"
#include "STActiveXPropPage.h"
#include "afxdialogex.h"
#include <io.h>			// _access
#include <GdiPlus.h>	// ��ͼ
//#include <gdiplusflat.h>
#include <vector>



using namespace Gdiplus;
//using namespace Gdiplus::DllExports;
//using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CSTActiveXCtrl, COleControl)

// ��Ϣӳ��

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

// ����ӳ��

BEGIN_DISPATCH_MAP(CSTActiveXCtrl, COleControl)
	DISP_FUNCTION_ID(CSTActiveXCtrl, "OpenFile", dispidOpenFile, OpenFile, VT_BSTR, VTS_BSTR VTS_BSTR)
	DISP_FUNCTION_ID(CSTActiveXCtrl, "Pass", dispidPass, Pass, VT_BSTR, VTS_NONE)
END_DISPATCH_MAP()

// �¼�ӳ��

BEGIN_EVENT_MAP(CSTActiveXCtrl, COleControl)
END_EVENT_MAP()

// �Զ����¼�ӳ��

BEGIN_EVENTSINK_MAP(CSTActiveXCtrl, COleControl)
	ON_EVENT(CSTActiveXCtrl, IDB_FOXITSDKCTRL1, 59, CSTActiveXCtrl::OnDbClickExFoxitpdfsdkproctrl1, VTS_I4 VTS_I4 VTS_I4 VTS_PBOOL)
	ON_EVENT(CSTActiveXCtrl, IDB_FOXITSDKCTRL1, 3, CSTActiveXCtrl::OnZoomChangeFoxitpdfsdkproctrl1, VTS_NONE)
END_EVENTSINK_MAP()

// ����ҳ

// TODO: ������Ҫ��Ӹ�������ҳ�����ס���Ӽ���!
BEGIN_PROPPAGEIDS(CSTActiveXCtrl, 1)
	PROPPAGEID(CSTActiveXPropPage::guid)
END_PROPPAGEIDS(CSTActiveXCtrl)

// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CSTActiveXCtrl, "STACTIVEX.STActiveXCtrl.1",
	0xd3285ec9, 0x5667, 0x4b9b, 0xa9, 0x89, 0xca, 0x98, 0xdd, 0x1f, 0x8e, 0x59)

	// ����� ID �Ͱ汾

	IMPLEMENT_OLETYPELIB(CSTActiveXCtrl, _tlid, _wVerMajor, _wVerMinor)

	// �ӿ� ID

	const IID IID_DSTActiveX = { 0x5AC282DB, 0xCB80, 0x4A59, { 0xA5, 0xC6, 0x23, 0x73, 0x13, 0x94, 0xD1, 0x1 } };
const IID IID_DSTActiveXEvents = { 0x8D2F6C43, 0xAD2F, 0x4E63, { 0x90, 0xDB, 0x24, 0xDC, 0xA7, 0x19, 0x9, 0xA4 } };

// �ؼ�������Ϣ

static const DWORD _dwSTActiveXOleMisc =
OLEMISC_ACTIVATEWHENVISIBLE |
OLEMISC_SETCLIENTSITEFIRST |
OLEMISC_INSIDEOUT |
OLEMISC_CANTLINKINSIDE |
OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CSTActiveXCtrl, IDS_STACTIVEX, _dwSTActiveXOleMisc)

// CSTActiveXCtrl::CSTActiveXCtrlFactory::UpdateRegistry -
// ��ӻ��Ƴ� CSTActiveXCtrl ��ϵͳע�����

BOOL CSTActiveXCtrl::CSTActiveXCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO:  ��֤���Ŀؼ��Ƿ���ϵ�Ԫģ���̴߳������
	// �йظ�����Ϣ����ο� MFC ����˵�� 64��
	// ������Ŀؼ������ϵ�Ԫģ�͹�����
	// �����޸����´��룬��������������
	// afxRegApartmentThreading ��Ϊ 0��

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


// CSTActiveXCtrl::CSTActiveXCtrl - ���캯��

CSTActiveXCtrl::CSTActiveXCtrl()
{
	InitializeIIDs(&IID_DSTActiveX, &IID_DSTActiveXEvents);
	// TODO:  �ڴ˳�ʼ���ؼ���ʵ�����ݡ�

	// Important��Need in activeX control to draw another activeX control
	AfxEnableControlContainer();

}

// CSTActiveXCtrl::~CSTActiveXCtrl - ��������

CSTActiveXCtrl::~CSTActiveXCtrl()
{
	// TODO:  �ڴ�����ؼ���ʵ�����ݡ�
}

// CSTActiveXCtrl::OnDraw - ��ͼ����

void CSTActiveXCtrl::OnDraw(
	CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	// TODO:  �����Լ��Ļ�ͼ�����滻����Ĵ��롣

	CRect cRect;
	this->GetClientRect(&cRect);

	LPRECT lpRect = new RECT();
	lpRect->top = 0;
	lpRect->left = 0;
	lpRect->bottom = cRect.bottom - cRect.top;
	lpRect->right = cRect.right - cRect.left;
	pdc->Rectangle(lpRect);
}

// CSTActiveXCtrl::DoPropExchange - �־���֧��

void CSTActiveXCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Ϊÿ���־õ��Զ������Ե��� PX_ ������
}


// CSTActiveXCtrl::OnResetState - ���ؼ�����ΪĬ��״̬

void CSTActiveXCtrl::OnResetState()
{
	COleControl::OnResetState();  // ���� DoPropExchange ���ҵ���Ĭ��ֵ

	// TODO:  �ڴ��������������ؼ�״̬��
}


// CSTActiveXCtrl ��Ϣ�������

int CSTActiveXCtrl::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (COleControl::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  �ڴ������ר�õĴ�������

// ������������ť

	for (int i = 0; i < CSTActiveXCtrl::SBtnCount; i++)
	{
		m_btnList[i].Create(TEXT(""), BS_DEFPUSHBUTTON | WS_VISIBLE | WS_CHILD | BS_BITMAP | BS_OWNERDRAW, CRect(32 * i + 1, 0 + 1, 32 * (i + 1) + 1, 32 + 1), this, IDC_BUTTON1 + i);
		m_btnList[i].LoadBitmaps(IDB_BITMAP1 + i * 2, IDB_BITMAP1 + i * 2 + 1, IDB_BITMAP1 + i * 2, IDB_BITMAP1 + i * 2 + 1);
		m_btnList[i].SizeToContent();  //ʹ��ť��ӦͼƬ��С
		m_btnList[i].ShowWindow(TRUE);
	}

// ����������

	LPRECT lpRect = new RECT();
	this->m_btnList[0].GetClientRect(lpRect);
	GetDlgItem(IDC_BUTTON1 + this->SBtnCount - 1)->GetWindowRect(lpRect);//��ȡ�ؼ�����ȫƵ��λ��
	ScreenToClient(lpRect);//ת��Ϊ�Ի����ϵ����λ��
	int x = lpRect->right;
	int y = lpRect->top;
	m_pEdit = new CSkinEdit();                  // ����2DЧ���ı༭��  
	CRect rect;
	rect.SetRect(x + 10, y + 10, x + 10 + 200, y + 10 + 20); // ȷ���༭���ڶԻ����еĳߴ��С  
	m_pEdit->Create(WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL, rect, this, IDC_EDIT1);
	this->m_pEdit->ShowWindow(TRUE);
	//LOGFONT lf;
	//CFont font;
	//::GetObject((HFONT)GetStockObject(SYSTEM_FONT), sizeof(lf), &lf);
	//font.CreateFontIndirect(&lf);
	static CFont font;
	font.DeleteObject();
	font.CreatePointFont(100, _T("����"));
	m_pEdit->SetFont(&font);
	m_pEdit->SetLimitText(MAX_PATH);

// ����PDF��ʾ�ؼ�

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

	//OpenFile(L"C:\\Users\\72975\\Desktop\\unity��Ϸ����ָ��.pdf", L"C:\\Users\\72975\\OneDrive\\PIC\\SndPdHI2UFZZSHpnMlNaTlkyc0xsbnJncGgvZE9BZXdPUlBLWmp3Nm9VdWNBcllDaHZVNTN3PT0.jpg");

	return 0;
}


HBRUSH CSTActiveXCtrl::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = COleControl::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  �ڴ˸��� DC ���κ�����
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
	// TODO:  ���Ĭ�ϵĲ������軭�ʣ��򷵻���һ������
	return hbr;
}
void CSTActiveXCtrl::OnSize(UINT nType, int cx, int cy)
{
	COleControl::OnSize(nType, cx, cy);
	
	// TODO: �ڴ˴������Ϣ����������

	CRect cRect;
	this->GetWindowRect(&cRect);
	int width = cRect.right - cRect.left - 2;
	int height = cRect.bottom - cRect.top - 39;
	this->m_foxitPdfSdkCtrl.MoveWindow(CRect(1, 39, width + 1, height + 39 - 1));
}
/// ����ͼƬ��˫���¼�
void CSTActiveXCtrl::OnDbClickExFoxitpdfsdkproctrl1(long hWnd, long ClientX, long ClientY, BOOL* bRet)
{
	// TODO: �ڴ˴������Ϣ����������
	*bRet = TRUE;
}
/// ��ͼ��С�ı��¼���ͬ���޸�ǩ���ߴ�
void CSTActiveXCtrl::OnZoomChangeFoxitpdfsdkproctrl1()
{
	// TODO: �ڴ˴������Ϣ����������
	this->SetSignImgs();
}
/// ���Ʊ༭��ɾ���û�
BOOL CSTActiveXCtrl::PreTranslateMessage(MSG* pMsg)
{
	// TODO: �ڴ����ר�ô����/����û���
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
/// ��ҳ
void CSTActiveXCtrl::OnButton1_Click()
{
	this->m_foxitPdfSdkCtrl.GoToPage(0);
}
/// ��һҳ
void CSTActiveXCtrl::OnButton2_Click()
{
	this->m_foxitPdfSdkCtrl.GoToPrevPage();
}
/// ��һҳ
void CSTActiveXCtrl::OnButton3_Click()
{
	this->m_foxitPdfSdkCtrl.GoToNextPage();
}
/// βҳ
void CSTActiveXCtrl::OnButton4_Click()
{
	int pageCount = this->m_foxitPdfSdkCtrl.GetPageCount();
	this->m_foxitPdfSdkCtrl.GoToPage(pageCount - 1);
}
/// ��һ��ͼ
void CSTActiveXCtrl::OnButton5_Click()
{
	this->m_foxitPdfSdkCtrl.GoBackwardStack();
}
/// ��һ��ͼ
void CSTActiveXCtrl::OnButton6_Click()
{
	this->m_foxitPdfSdkCtrl.GoForwardStack();
}
/// ˳ʱ����ת
void CSTActiveXCtrl::OnButton7_Click()
{
	short cur = this->m_foxitPdfSdkCtrl.GetRotate();
	this->m_foxitPdfSdkCtrl.SetRotate((short)((cur + 1) % 4));
}
/// ��ʱ����ת
void CSTActiveXCtrl::OnButton8_Click()
{
	short cur = this->m_foxitPdfSdkCtrl.GetRotate();
	this->m_foxitPdfSdkCtrl.SetRotate((short)((cur + 4 - 1) % 4));
}
/// �Ŵ�
void CSTActiveXCtrl::OnButton9_Click()
{
	int zoomLevel = this->m_foxitPdfSdkCtrl.GetZoomLevel();
	this->m_foxitPdfSdkCtrl.SetZoomLevel(zoomLevel * 2);
}
/// ��С
void CSTActiveXCtrl::OnButton10_Click()
{
	int zoomLevel = this->m_foxitPdfSdkCtrl.GetZoomLevel();
	this->m_foxitPdfSdkCtrl.SetZoomLevel(zoomLevel / 2);
}
/// �Ŵ󹤾�
void CSTActiveXCtrl::OnButton11_Click()
{
	this->m_foxitPdfSdkCtrl.SetCurrentTool(L"ZoomIn Tool");
}
/// ��С����
void CSTActiveXCtrl::OnButton12_Click()
{
	this->m_foxitPdfSdkCtrl.SetCurrentTool(L"ZoomOut Tool");
}
/// ���͹���
void CSTActiveXCtrl::OnButton13_Click()
{
	this->m_foxitPdfSdkCtrl.SetCurrentTool(L"Hand Tool");
}
/// ʵ�ʴ�С
void CSTActiveXCtrl::OnButton14_Click()
{
	this->m_foxitPdfSdkCtrl.SetZoomLevel(0);
}
/// ��Ӧҳ��
void CSTActiveXCtrl::OnButton15_Click()
{
	this->m_foxitPdfSdkCtrl.SetZoomLevel(1);
}
/// ��Ӧҳ��
void CSTActiveXCtrl::OnButton16_Click()
{
	this->m_foxitPdfSdkCtrl.SetZoomLevel(2);
}
/// ����
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
	// ������Դ
	HRSRC hRsrc = ::FindResource(AfxGetResourceHandle(), MAKEINTRESOURCE(nResID), lpTyp);
	if (hRsrc == NULL)
	{
		return false;
	}
	// ������Դ
	HGLOBAL hImgData = ::LoadResource(AfxGetResourceHandle(), hRsrc);
	if (hImgData == NULL)
	{
		::FreeResource(hImgData);
		return false;
	}
	// �����ڴ��е�ָ����Դ
	LPVOID lpVoid = ::LockResource(hImgData);
	LPSTREAM pStream = NULL;
	DWORD dwSize = ::SizeofResource(AfxGetResourceHandle(), hRsrc);
	HGLOBAL hNew = ::GlobalAlloc(GHND, dwSize);
	LPBYTE lpByte = (LPBYTE)::GlobalLock(hNew);
	::memcpy(lpByte, lpVoid, dwSize);
	// ����ڴ��е�ָ����Դ
	::GlobalUnlock(hNew);
	// ��ָ���ڴ洴��������
	HRESULT ht = ::CreateStreamOnHGlobal(hNew, TRUE, &pStream);
	if (ht != S_OK)
	{
		GlobalFree(hNew);
	}
	else
	{
		// ����ͼƬ
		pImage->Load(pStream);
		GlobalFree(hNew);
	}
	// �ͷ���Դ
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
//	//	msg.Format(L"CreateCompatibleBitmapʧ�ܣ�hDesBmp");
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
//			msg.Format(L"LoadBitmapʧ�ܣ���%d��ͼƬ", i);
//			MessageBox(msg);
//			return false;
//		}
//		
//		MessageBox(L"LoadBitmap�ɹ�");
//
//		if (image.GetBPP() == 32) //ȷ�ϸ�ͼ�����Alphaͨ��
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
//		//	msg.Format(L"LoadBitmapʧ�ܣ���%d��ͼƬ", i);
//		//	MessageBox(msg);
//		//	return false;
//		//}
//		//imgList.push_back(hSrcBmp);
//		//CBitmap bitmap;
//		//bitmap.Attach(hSrcBmp);	//����λͼ����
//		//BITMAP bmp;
//		//bitmap.GetBitmap(&bmp);	//��ȡλͼ��Ϣ
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
//	//	msg.Format(L"����ͼƬʧ��");
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
	CoGetClassObject(clsid, CLSCTX_ALL, NULL, IID_IClassFactory, (LPVOID*)&p_classfactory);
	HRESULT hResult = p_classfactory->CreateInstance(NULL, __uuidof(IDatePngGenerator), (LPVOID*)&pGetRes);

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

	// ���ļ�  
	if (!file.Open(pszFileName,
		CFile::modeRead /*|
		CFile::shareDenyWrite*/))
	{
		TRACE(_T("Load (file): Error opening file %s\n"), pszFileName);
		return FALSE;
	};

	// �����ļ���С����HGLOBAL�ڴ�  
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

	// ���ļ����ݶ���HGLOBAL�ڴ���  
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

	// ����hGlobal�ڴ��е����ݴ���stream  
	IStream *pStream = NULL;
	if (CreateStreamOnHGlobal(hGlobal, TRUE, &pStream) != S_OK)
	{
		return FALSE;
	}

	Gdiplus::Image *pImage = Gdiplus::Image::FromStream(pStream);
	ASSERT(pImage != NULL);

		// Ҫ������һ�䣬������GlobalAlloc������hGlobal�ڴ�û�б��ͷţ������ڴ�й¶������  
		// CreateStreamOnHGlobal�ڶ�������������ΪTRUE�����Ե���pStream->Release()���Զ�  
		// ��hGlobal�ڴ棨�μ�msdn��CreateStreamOnHGlobal��˵����  
	pStream->Release();
	
	return pImage;
}
BOOL CSTActiveXCtrl::SetSignImgs()
{
	// ע�⣺ԭʼͼƬ���д�С�ģ��������õĴ�С��Ҫ��ԭʼͼƬ���ȱ����ţ���ȻͼƬ�����
	double zoomLevel = (double)this->m_foxitPdfSdkCtrl.GetZoomLevel() / 100;

	// ����ǩ��ͼ·�������
	CString csSignedImagePath = this->m_ImgPath;
	//Image *imgSignedImage = Image::FromFile(csSignedImagePath);
	Image *imgSignedImage = this->LoadImageEx(csSignedImagePath);  // Image::FromFile(csSignedImagePath);
	if (!imgSignedImage)
		return FALSE;
	int nSignedImageHeight = (int)((double)CSTActiveXCtrl::SSignSize * zoomLevel);
	int nSignedImageWidth =
		(int)((double)imgSignedImage->GetWidth() / (double)imgSignedImage->GetHeight() * (double)nSignedImageHeight);
	this->m_foxitPdfSdkCtrl.SetSignedImageParams(csSignedImagePath, nSignedImageWidth, nSignedImageHeight);

	// ��������ͼ·�������
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
			* 0.8);		/*����ͼƬ�����Ҫ�ʵ����ţ���ʾ������һ��*/
	this->m_foxitPdfSdkCtrl.SetDateImageParams(csDateImagePath, nDateImageWidth, nDateImageHeight);

	return TRUE;
}
BSTR CSTActiveXCtrl::OpenFile(LPCTSTR pdfPath, LPCTSTR imgPath)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	CString strResult;

	// TODO: Add your dispatch handler code here
	while (1)	// goto���
	{
		this->m_PdfPath = pdfPath;
		this->m_ImgPath = imgPath;
		USES_CONVERSION;
		if ((_access(W2A(pdfPath), 0x06)) == -1 || (_access(W2A(imgPath), 0x02)) == -1)
		{
			strResult = _T("�����ļ������ڻ��߲��߱���д����Ȩ��");
			break;
		}
		if (!this->m_foxitPdfSdkCtrl.OpenFile(pdfPath, _T("")))
		{
			strResult = _T("��PDF�ļ�ʧ��");
			break;
		}
		if (!this->GenerateDateImage())
		{
			strResult = _T("����ǩ������ͼƬʧ��");
			break;
		}
		if (!this->SetSignImgs())
		{
			strResult = _T("����ǩ��ͼƬ����ʧ��");
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
		while (1)	// goto���
		{
			CString strTmpPdfPath = m_PdfPath;
			strTmpPdfPath.MakeUpper();
			strTmpPdfPath.Replace(_T(".PDF"), _T("_TMP.PDF"));

			if (!this->m_foxitPdfSdkCtrl.IsSDImageExist())
			{
				strResult = _T("δ��⵽ǩ��");
				break;
			}
			else {
				if (!this->m_foxitPdfSdkCtrl.ComposeImageAndSaveAs(strTmpPdfPath))
				{
					strResult = _T("������ʱ�ĵ�ʧ��");
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
					strResult = _T("������ʱ�ĵ���Ŀ���ĵ�ʧ��");
				else
					strResult = _T("0");
			}

			break;
		}
	}
	catch (...)
	{
		strResult = _T("���淢���쳣");
	}

	return strResult.AllocSysString();
}
