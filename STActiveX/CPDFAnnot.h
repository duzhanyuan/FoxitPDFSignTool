// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CPDFAnnot wrapper class

class CPDFAnnot : public COleDispatchDriver
{
public:
	CPDFAnnot(){} // Calls COleDispatchDriver default constructor
	CPDFAnnot(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFAnnot(const CPDFAnnot& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPDFAnnot methods
public:
	CString GetType()
	{
		CString result;
		InvokeHelper(0x10, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString GetSubType()
	{
		CString result;
		InvokeHelper(0x11, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString GetContents()
	{
		CString result;
		InvokeHelper(0x12, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long SetContents(LPCTSTR Contents)
	{
		long result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x13, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Contents);
		return result;
	}
	BOOL IsPopupOpen()
	{
		BOOL result;
		InvokeHelper(0x14, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long SetPopupOpen(BOOL Open)
	{
		long result;
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x15, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Open);
		return result;
	}
	BOOL HasPopup()
	{
		BOOL result;
		InvokeHelper(0x16, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long GetRect(float * pLeft, float * pTop, float * pRight, float * pBottom)
	{
		long result;
		static BYTE parms[] = VTS_PR4 VTS_PR4 VTS_PR4 VTS_PR4 ;
		InvokeHelper(0x17, DISPATCH_METHOD, VT_I4, (void*)&result, parms, pLeft, pTop, pRight, pBottom);
		return result;
	}
	long SetRect(float left, float top, float right, float bottom)
	{
		long result;
		static BYTE parms[] = VTS_R4 VTS_R4 VTS_R4 VTS_R4 ;
		InvokeHelper(0x18, DISPATCH_METHOD, VT_I4, (void*)&result, parms, left, top, right, bottom);
		return result;
	}
	long DoAction()
	{
		long result;
		InvokeHelper(0x19, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL HasAction()
	{
		BOOL result;
		InvokeHelper(0x1a, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long GetMarkedState()
	{
		long result;
		InvokeHelper(0x1b, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long SetMarkedState(long state)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x1c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, state);
		return result;
	}
	long GetReviewState()
	{
		long result;
		InvokeHelper(0x1d, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long SetReviewState(long state)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x1e, DISPATCH_METHOD, VT_I4, (void*)&result, parms, state);
		return result;
	}
	long GetMigrationState()
	{
		long result;
		InvokeHelper(0x1f, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long SetMigrationState(long state)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x20, DISPATCH_METHOD, VT_I4, (void*)&result, parms, state);
		return result;
	}
	long SetStartingPoint(float PointX, float PointY)
	{
		long result;
		static BYTE parms[] = VTS_R4 VTS_R4 ;
		InvokeHelper(0x21, DISPATCH_METHOD, VT_I4, (void*)&result, parms, PointX, PointY);
		return result;
	}
	long GetStartingPoint(float * PointX, float * PointY)
	{
		long result;
		static BYTE parms[] = VTS_PR4 VTS_PR4 ;
		InvokeHelper(0x22, DISPATCH_METHOD, VT_I4, (void*)&result, parms, PointX, PointY);
		return result;
	}
	long SetEndingPoint(float PointX, float PointY)
	{
		long result;
		static BYTE parms[] = VTS_R4 VTS_R4 ;
		InvokeHelper(0x23, DISPATCH_METHOD, VT_I4, (void*)&result, parms, PointX, PointY);
		return result;
	}
	long GetEndingPoint(float * PointX, float * PointY)
	{
		long result;
		static BYTE parms[] = VTS_PR4 VTS_PR4 ;
		InvokeHelper(0x24, DISPATCH_METHOD, VT_I4, (void*)&result, parms, PointX, PointY);
		return result;
	}
	long SetMediaPoster(LPCTSTR ImageFilePath)
	{
		long result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x25, DISPATCH_METHOD, VT_I4, (void*)&result, parms, ImageFilePath);
		return result;
	}
	long SetMultimedia(LPCTSTR FilePath, LPCTSTR ContentType, BOOL Embed, BOOL bShowCtrlBar)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BOOL VTS_BOOL ;
		InvokeHelper(0x26, DISPATCH_METHOD, VT_I4, (void*)&result, parms, FilePath, ContentType, Embed, bShowCtrlBar);
		return result;
	}
	long SetLinkQuadPoints(long PointsArray, long PointsCount)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x27, DISPATCH_METHOD, VT_I4, (void*)&result, parms, PointsArray, PointsCount);
		return result;
	}
	long SetPolygonVertices(long PointsArray, long PointsCount)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x28, DISPATCH_METHOD, VT_I4, (void*)&result, parms, PointsArray, PointsCount);
		return result;
	}
	long SetPencilVertices(long PointsArray, long PointsCount)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x29, DISPATCH_METHOD, VT_I4, (void*)&result, parms, PointsArray, PointsCount);
		return result;
	}
	long AttachFile(LPCTSTR FilePath)
	{
		long result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x2a, DISPATCH_METHOD, VT_I4, (void*)&result, parms, FilePath);
		return result;
	}
	void SetLinkGoToAction(long nPageIndex, float left, float top, float zoom)
	{
		static BYTE parms[] = VTS_I4 VTS_R4 VTS_R4 VTS_R4 ;
		InvokeHelper(0x2b, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nPageIndex, left, top, zoom);
	}
	void SetLinkURLAction(LPCTSTR sURL)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x2c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, sURL);
	}
	LPDISPATCH GetReplyList()
	{
		LPDISPATCH result;
		InvokeHelper(0x2d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void UpdateAnnotReplies(LPDISPATCH pReplies)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x2e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pReplies);
	}
	float GetRectTop()
	{
		float result;
		InvokeHelper(0x2f, DISPATCH_METHOD, VT_R4, (void*)&result, NULL);
		return result;
	}
	float GetRectLeft()
	{
		float result;
		InvokeHelper(0x30, DISPATCH_METHOD, VT_R4, (void*)&result, NULL);
		return result;
	}
	float GetRectRight()
	{
		float result;
		InvokeHelper(0x31, DISPATCH_METHOD, VT_R4, (void*)&result, NULL);
		return result;
	}
	float GetRectBottom()
	{
		float result;
		InvokeHelper(0x32, DISPATCH_METHOD, VT_R4, (void*)&result, NULL);
		return result;
	}

	// IPDFAnnot properties
public:
	short GetThickness()
	{
		short result;
		GetProperty(0x1, VT_I2, (void*)&result);
		return result;
	}
	void SetThickness(short propVal)
	{
		SetProperty(0x1, VT_I2, propVal);
	}
	short GetBorderStyle()
	{
		short result;
		GetProperty(0x2, VT_I2, (void*)&result);
		return result;
	}
	void SetBorderStyle(short propVal)
	{
		SetProperty(0x2, VT_I2, propVal);
	}
	unsigned long GetColor()
	{
		unsigned long result;
		GetProperty(0x3, VT_UI4, (void*)&result);
		return result;
	}
	void SetColor(unsigned long propVal)
	{
		SetProperty(0x3, VT_UI4, propVal);
	}
	short GetLineStartingStyle()
	{
		short result;
		GetProperty(0x4, VT_I2, (void*)&result);
		return result;
	}
	void SetLineStartingStyle(short propVal)
	{
		SetProperty(0x4, VT_I2, propVal);
	}
	short GetLineEndingStyle()
	{
		short result;
		GetProperty(0x5, VT_I2, (void*)&result);
		return result;
	}
	void SetLineEndingStyle(short propVal)
	{
		SetProperty(0x5, VT_I2, propVal);
	}
	unsigned long GetFillColor()
	{
		unsigned long result;
		GetProperty(0x6, VT_UI4, (void*)&result);
		return result;
	}
	void SetFillColor(unsigned long propVal)
	{
		SetProperty(0x6, VT_UI4, propVal);
	}
	short GetOpacity()
	{
		short result;
		GetProperty(0x7, VT_I2, (void*)&result);
		return result;
	}
	void SetOpacity(short propVal)
	{
		SetProperty(0x7, VT_I2, propVal);
	}
	CString GetAuthor()
	{
		CString result;
		GetProperty(0x8, VT_BSTR, (void*)&result);
		return result;
	}
	void SetAuthor(CString propVal)
	{
		SetProperty(0x8, VT_BSTR, propVal);
	}
	CString GetSubject()
	{
		CString result;
		GetProperty(0x9, VT_BSTR, (void*)&result);
		return result;
	}
	void SetSubject(CString propVal)
	{
		SetProperty(0x9, VT_BSTR, propVal);
	}
	DATE GetCreatationDate()
	{
		DATE result;
		GetProperty(0xa, VT_DATE, (void*)&result);
		return result;
	}
	void SetCreatationDate(DATE propVal)
	{
		SetProperty(0xa, VT_DATE, propVal);
	}
	DATE GetModificationDate()
	{
		DATE result;
		GetProperty(0xb, VT_DATE, (void*)&result);
		return result;
	}
	void SetModificationDate(DATE propVal)
	{
		SetProperty(0xb, VT_DATE, propVal);
	}
	BOOL GetLocked()
	{
		BOOL result;
		GetProperty(0xc, VT_BOOL, (void*)&result);
		return result;
	}
	void SetLocked(BOOL propVal)
	{
		SetProperty(0xc, VT_BOOL, propVal);
	}
	BOOL GetPrint()
	{
		BOOL result;
		GetProperty(0xd, VT_BOOL, (void*)&result);
		return result;
	}
	void SetPrint(BOOL propVal)
	{
		SetProperty(0xd, VT_BOOL, propVal);
	}
	BOOL GetReadOnly()
	{
		BOOL result;
		GetProperty(0xe, VT_BOOL, (void*)&result);
		return result;
	}
	void SetReadOnly(BOOL propVal)
	{
		SetProperty(0xe, VT_BOOL, propVal);
	}
	CString GetDescription()
	{
		CString result;
		GetProperty(0xf, VT_BSTR, (void*)&result);
		return result;
	}
	void SetDescription(CString propVal)
	{
		SetProperty(0xf, VT_BSTR, propVal);
	}

};
