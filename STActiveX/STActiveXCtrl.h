#pragma once
#include "foxitpdfsdkproctrl1.h"
#include "SkinEdit.h"
#include <atlimage.h>

// STActiveXCtrl.h : CSTActiveXCtrl ActiveX �ؼ����������


// CSTActiveXCtrl : �й�ʵ�ֵ���Ϣ������� STActiveXCtrl.cpp��

class CSTActiveXCtrl : public COleControl
{
	DECLARE_DYNCREATE(CSTActiveXCtrl)

// ���캯��
public:
	CSTActiveXCtrl();

// ��д
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// ʵ��
protected:
	~CSTActiveXCtrl();

	DECLARE_OLECREATE_EX(CSTActiveXCtrl)    // �๤���� guid
	DECLARE_OLETYPELIB(CSTActiveXCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CSTActiveXCtrl)     // ����ҳ ID
	DECLARE_OLECTLTYPE(CSTActiveXCtrl)		// �������ƺ�����״̬

// ��Ϣӳ��
	DECLARE_MESSAGE_MAP()

// ����ӳ��
	DECLARE_DISPATCH_MAP()

// �¼�ӳ��
	DECLARE_EVENT_MAP()

// �Զ����¼�ӳ��
	DECLARE_EVENTSINK_MAP()

// ���Ⱥ��¼� ID
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

	// TODO:�Զ���
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


	static const int SBtnCount = 17;					// ��ť����
	static const int SDigitPicCount = 11;				// �����ַ�ͼƬ����
	static const int SDigitPicWidth = 28;				// �����ַ�ͼƬ���
	static const int SDigitPicHeight = 72;				// �����ַ�ͼƬ�߶�
	static const int SDigitPicMountOfDate = 17;			// �����ַ�ͳ�ƣ�1+4+1+2+1+2+1+2+1+2
	static const int SSignSize = 40;					// 100%���������ǩ���ߴ磬�Ը߶Ⱥ���
	static const int SSignDateImgWidth = 270;			// ����ʹ��
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

