#pragma once
#include "foxitpdfsdkproctrl1.h"
#include "SkinEdit.h"
#include <atlimage.h>

// STActiveXCtrl.h : CSTActiveXCtrl ActiveX 控件类的声明。


// CSTActiveXCtrl : 有关实现的信息，请参阅 STActiveXCtrl.cpp。

class CSTActiveXCtrl : public COleControl
{
	DECLARE_DYNCREATE(CSTActiveXCtrl)

// 构造函数
public:
	CSTActiveXCtrl();

// 重写
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 实现
protected:
	~CSTActiveXCtrl();

	DECLARE_OLECREATE_EX(CSTActiveXCtrl)    // 类工厂和 guid
	DECLARE_OLETYPELIB(CSTActiveXCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CSTActiveXCtrl)     // 属性页 ID
	DECLARE_OLECTLTYPE(CSTActiveXCtrl)		// 类型名称和杂项状态

// 消息映射
	DECLARE_MESSAGE_MAP()

// 调度映射
	DECLARE_DISPATCH_MAP()

// 事件映射
	DECLARE_EVENT_MAP()

// 自定义事件映射
	DECLARE_EVENTSINK_MAP()

// 调度和事件 ID
public:
	enum {
		dispidPass = 2L,
		dispidImgPath = 5,
		dispidm_pdfPath = 4,
		dispidComposeImageAndSaveAs = 3L,
		dispidIsSDKImageExist = 2L,
		dispidOpenPdfFile = 2L,
		dispidOpenFile = 1L
	};

	// TODO:自定义
private:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);

	BOOL PreTranslateMessage(MSG * pMsg);

	//virtual HBRUSH OnCtlColor(CDC * pDC, CWnd * pWnd, UINT nCtlColor);

	afx_msg void OnButton1_Click();
	afx_msg void OnButton2_Click();
	afx_msg void OnButton3_Click();
	afx_msg void OnButton4_Click();
	afx_msg void OnButton5_Click();
	afx_msg void OnButton6_Click();
	afx_msg void OnButton7_Click();
	afx_msg void OnButton8_Click();
	afx_msg void OnButton9_Click();
	afx_msg void OnButton10_Click();
	afx_msg void OnButton11_Click();
	afx_msg void OnButton12_Click();
	afx_msg void OnButton13_Click();
	afx_msg void OnButton14_Click();
	afx_msg void OnButton15_Click();
	afx_msg void OnButton16_Click();
	afx_msg void OnButton17_Click();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	void OnDbClickExFoxitpdfsdkproctrl1(long hWnd, long ClientX, long ClientY, BOOL* bRet);
	void OnZoomChangeFoxitpdfsdkproctrl1();


	/// abandoned
	BOOL LoadImageFromResource(ATL::CImage * pImage, UINT nResID, LPCTSTR lpTyp);
	BOOL ImageFromIDResource(UINT nID, LPCTSTR sTR, Gdiplus::Image *& pImg);
	
	BOOL GenerateDateImage();
	Gdiplus::Image* LoadImageEx(LPCTSTR pszFileName);
	BOOL SetSignImgs();


	static const int SBtnCount = 17;					// 按钮数量
	static const int SDigitPicCount = 11;				// 日期字符图片数量
	static const int SDigitPicWidth = 28;				// 日期字符图片宽度
	static const int SDigitPicHeight = 72;				// 日期字符图片高度
	static const int SDigitPicMountOfDate = 17;			// 日期字符统计：1+4+1+2+1+2+1+2+1+2
	static const int SSignSize = 40;					// 100%情况下日期签名尺寸，以高度衡量
	static const int SSignDateImgWidth = 270;			// 不再使用
	static const int SSignDateImgHeight = SSignSize;
	static const int SSignDateImgMargin = 3;

	CFoxitpdfsdkproctrl1 m_foxitPdfSdkCtrl;
	CBitmapButton m_btnList[SBtnCount];
	CSkinEdit *m_pEdit;
	CString m_PdfPath;
	CString m_ImgPath;

protected:

	BSTR OpenFile(LPCTSTR pdfPath, LPCTSTR imgPath);
	BSTR Pass(void);

};

