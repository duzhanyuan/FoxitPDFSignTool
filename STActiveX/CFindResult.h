// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CFindResult wrapper class

class CFindResult : public COleDispatchDriver
{
public:
	CFindResult(){} // Calls COleDispatchDriver default constructor
	CFindResult(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CFindResult(const CFindResult& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IFindResult methods
public:
	long GetFindPageNum()
	{
		long result;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString GetFindFileName()
	{
		CString result;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString GetFindString()
	{
		CString result;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long GetFindRectsCount()
	{
		long result;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetFindRectByIndex(long nIndex, float * left, float * bottom, float * right, float * top)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_PR4 VTS_PR4 VTS_PR4 VTS_PR4 ;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_I4, (void*)&result, parms, nIndex, left, bottom, right, top);
		return result;
	}

	// IFindResult properties
public:

};
