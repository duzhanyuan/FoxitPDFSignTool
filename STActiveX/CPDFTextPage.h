// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CPDFTextPage wrapper class

class CPDFTextPage : public COleDispatchDriver
{
public:
	CPDFTextPage(){} // Calls COleDispatchDriver default constructor
	CPDFTextPage(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFTextPage(const CPDFTextPage& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPDFTextPage methods
public:
	void ReleasePDFTextPage()
	{
		InvokeHelper(0x1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	long CountChars()
	{
		long result;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString GetChars(long start, long count)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, start, count);
		return result;
	}
	LPDISPATCH GetCharInfo(long charIndex)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, charIndex);
		return result;
	}
	long GetCharIndexAtPos(float x, float y, float tolerance)
	{
		long result;
		static BYTE parms[] = VTS_R4 VTS_R4 VTS_R4 ;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_I4, (void*)&result, parms, x, y, tolerance);
		return result;
	}
	long GetNextCharIndexByDirection(long curIndex, short direction)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I2 ;
		InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, parms, curIndex, direction);
		return result;
	}
	LPDISPATCH SelectByRange(long start, long count)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, start, count);
		return result;
	}
	LPDISPATCH SelectByRectangle(float left, float top, float right, float bottom)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_R4 VTS_R4 VTS_R4 VTS_R4 ;
		InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, left, top, right, bottom);
		return result;
	}
	LPDISPATCH StartSearch(LPCTSTR searchPattern, long flags, long startIndex)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_I4 ;
		InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, searchPattern, flags, startIndex);
		return result;
	}
	LPDISPATCH ExtractLinks()
	{
		LPDISPATCH result;
		InvokeHelper(0xa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString ExtractPageText()
	{
		CString result;
		InvokeHelper(0xb, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}

	// IPDFTextPage properties
public:

};
