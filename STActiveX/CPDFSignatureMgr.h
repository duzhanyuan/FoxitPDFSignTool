// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CPDFSignatureMgr wrapper class

class CPDFSignatureMgr : public COleDispatchDriver
{
public:
	CPDFSignatureMgr(){} // Calls COleDispatchDriver default constructor
	CPDFSignatureMgr(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFSignatureMgr(const CPDFSignatureMgr& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPDFSignatureMgr methods
public:
	LPDISPATCH Add(long pageIndex, float left, float top, float right, float bottom)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4 ;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, pageIndex, left, top, right, bottom);
		return result;
	}
	BOOL SignDocument(LPDISPATCH pSigField, LPCTSTR signedFilePath, BOOL bDefault)
	{
		BOOL result;
		static BYTE parms[] = VTS_DISPATCH VTS_BSTR VTS_BOOL ;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pSigField, signedFilePath, bDefault);
		return result;
	}
	BOOL Verify(LPDISPATCH pSigField, BOOL bDefaultVerified)
	{
		BOOL result;
		static BYTE parms[] = VTS_DISPATCH VTS_BOOL ;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pSigField, bDefaultVerified);
		return result;
	}
	long GetCounts()
	{
		long result;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH Get(long index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, index);
		return result;
	}
	BOOL Clear(LPDISPATCH pSigField)
	{
		BOOL result;
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pSigField);
		return result;
	}
	BOOL Remove(LPDISPATCH pSigField)
	{
		BOOL result;
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pSigField);
		return result;
	}
	BOOL VerifyAll()
	{
		BOOL result;
		InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL InitStraddleValue(LPDISPATCH pSigField)
	{
		BOOL result;
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pSigField);
		return result;
	}
	BOOL CreatePatternSigField(LPCTSTR ImageFilePath, BOOL bSetMask, unsigned long clrMask, float Height, float Width)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_BOOL VTS_UI4 VTS_R4 VTS_R4 ;
		InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, ImageFilePath, bSetMask, clrMask, Height, Width);
		return result;
	}
	BOOL SetCurPatternSigField(short nIndex)
	{
		BOOL result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, nIndex);
		return result;
	}
	short CountPatternSigField()
	{
		short result;
		InvokeHelper(0xc, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
		return result;
	}

	// IPDFSignatureMgr properties
public:

};
