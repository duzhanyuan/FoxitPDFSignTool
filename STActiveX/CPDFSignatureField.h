// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CPDFSignatureField wrapper class

class CPDFSignatureField : public COleDispatchDriver
{
public:
	CPDFSignatureField(){} // Calls COleDispatchDriver default constructor
	CPDFSignatureField(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFSignatureField(const CPDFSignatureField& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPDFSignatureField methods
public:
	BOOL SetAPOptions(long opts)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, opts);
		return result;
	}
	BOOL SetAPText(LPCTSTR text)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, text);
		return result;
	}
	BOOL SetAPImage(LPCTSTR ImageFilePath, BOOL bSetMask, unsigned long clrMask)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_BOOL VTS_UI4 ;
		InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, ImageFilePath, bSetMask, clrMask);
		return result;
	}
	BOOL IsSigned()
	{
		BOOL result;
		InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL SetSignerDN(LPCTSTR dn)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, dn);
		return result;
	}
	BOOL SetStatusImage(LPCTSTR imagePath, short sState, short sMode, BOOL bRotate, BOOL bSetMask, unsigned long clrMask)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_I2 VTS_I2 VTS_BOOL VTS_BOOL VTS_UI4 ;
		InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, imagePath, sState, sMode, bRotate, bSetMask, clrMask);
		return result;
	}
	long GetPageIndex()
	{
		long result;
		InvokeHelper(0xd, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	VARIANT GetSourceBuffer()
	{
		VARIANT result;
		InvokeHelper(0xe, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	long GetSourceBufferLen()
	{
		long result;
		InvokeHelper(0xf, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	VARIANT GetSignedBuffer()
	{
		VARIANT result;
		InvokeHelper(0x10, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	long GetSignedBufferLen()
	{
		long result;
		InvokeHelper(0x11, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL CreateSignedDoc(VARIANT& signedBuf, long length)
	{
		BOOL result;
		static BYTE parms[] = VTS_VARIANT VTS_I4 ;
		InvokeHelper(0x12, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, &signedBuf, length);
		return result;
	}
	BOOL SetVerifyResult(short sResult)
	{
		BOOL result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x13, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, sResult);
		return result;
	}
	BOOL SetCertPath(LPCTSTR certPath, LPCTSTR pfxPsw)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR ;
		InvokeHelper(0x14, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, certPath, pfxPsw);
		return result;
	}
	BOOL SetCertData(VARIANT& pCertData, long length, LPCTSTR pfxPsw)
	{
		BOOL result;
		static BYTE parms[] = VTS_VARIANT VTS_I4 VTS_BSTR ;
		InvokeHelper(0x15, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, &pCertData, length, pfxPsw);
		return result;
	}
	BOOL SetCertContext(long pCertContext)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x16, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pCertContext);
		return result;
	}
	BOOL SetAPImageData(VARIANT& imageDataBuffer, LPCTSTR imageType, long dataSize, BOOL bSetMask, unsigned long clrMask)
	{
		BOOL result;
		static BYTE parms[] = VTS_VARIANT VTS_BSTR VTS_I4 VTS_BOOL VTS_UI4 ;
		InvokeHelper(0x17, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, &imageDataBuffer, imageType, dataSize, bSetMask, clrMask);
		return result;
	}
	BOOL SetStatusImageData(VARIANT& imageDataBuffer, LPCTSTR imageType, long dataSize, short sState, short sMode, BOOL bRotate, BOOL bSetMask, unsigned long clrMask)
	{
		BOOL result;
		static BYTE parms[] = VTS_VARIANT VTS_BSTR VTS_I4 VTS_I2 VTS_I2 VTS_BOOL VTS_BOOL VTS_UI4 ;
		InvokeHelper(0x18, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, &imageDataBuffer, imageType, dataSize, sState, sMode, bRotate, bSetMask, clrMask);
		return result;
	}
	BOOL TurnGray(BOOL bGray)
	{
		BOOL result;
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x19, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, bGray);
		return result;
	}
	BOOL TurnBlur(BOOL bBlur)
	{
		BOOL result;
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x1a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, bBlur);
		return result;
	}
	BOOL SetVisible(BOOL bVisible)
	{
		BOOL result;
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x1b, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, bVisible);
		return result;
	}
	BOOL GrayPrint(BOOL bGrayPrint)
	{
		BOOL result;
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x1c, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, bGrayPrint);
		return result;
	}
	BOOL SetStraddleType(short nType)
	{
		BOOL result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x1d, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, nType);
		return result;
	}
	BOOL SetStraddlePos(float fPos)
	{
		BOOL result;
		static BYTE parms[] = VTS_R4 ;
		InvokeHelper(0x1e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, fPos);
		return result;
	}
	BOOL SetStraddleBitmap(short nState, LPCTSTR sFilePath)
	{
		BOOL result;
		static BYTE parms[] = VTS_I2 VTS_BSTR ;
		InvokeHelper(0x1f, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, nState, sFilePath);
		return result;
	}
	BOOL SetStraddlePages(LPCTSTR sRange)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x20, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, sRange);
		return result;
	}
	BOOL SetStraddleFirstPagePercent(float fPercent)
	{
		BOOL result;
		static BYTE parms[] = VTS_R4 ;
		InvokeHelper(0x21, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, fPercent);
		return result;
	}
	BOOL SetSigFieldAlpha(short alpha)
	{
		BOOL result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x22, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, alpha);
		return result;
	}
	void Refresh()
	{
		InvokeHelper(0x23, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	VARIANT GetDigestBuffer()
	{
		VARIANT result;
		InvokeHelper(0x24, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}

	// IPDFSignatureField properties
public:
	CString GetReason()
	{
		CString result;
		GetProperty(0x1, VT_BSTR, (void*)&result);
		return result;
	}
	void SetReason(CString propVal)
	{
		SetProperty(0x1, VT_BSTR, propVal);
	}
	CString GetLocation()
	{
		CString result;
		GetProperty(0x2, VT_BSTR, (void*)&result);
		return result;
	}
	void SetLocation(CString propVal)
	{
		SetProperty(0x2, VT_BSTR, propVal);
	}
	CString GetSigner()
	{
		CString result;
		GetProperty(0x3, VT_BSTR, (void*)&result);
		return result;
	}
	void SetSigner(CString propVal)
	{
		SetProperty(0x3, VT_BSTR, propVal);
	}
	CString GetFilter()
	{
		CString result;
		GetProperty(0x4, VT_BSTR, (void*)&result);
		return result;
	}
	void SetFilter(CString propVal)
	{
		SetProperty(0x4, VT_BSTR, propVal);
	}
	CString GetSubFilter()
	{
		CString result;
		GetProperty(0x5, VT_BSTR, (void*)&result);
		return result;
	}
	void SetSubFilter(CString propVal)
	{
		SetProperty(0x5, VT_BSTR, propVal);
	}
	short Getstate()
	{
		short result;
		GetProperty(0x6, VT_I2, (void*)&result);
		return result;
	}
	void Setstate(short propVal)
	{
		SetProperty(0x6, VT_I2, propVal);
	}

};
