// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CPDFOutline wrapper class

class CPDFOutline : public COleDispatchDriver
{
public:
	CPDFOutline(){} // Calls COleDispatchDriver default constructor
	CPDFOutline(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFOutline(const CPDFOutline& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPDFOutline methods
public:
	void NavigateOutline()
	{
		InvokeHelper(0x1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString GetOutlineTitle()
	{
		CString result;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	VARIANT GetOutLineTitle2()
	{
		VARIANT result;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH GetOutlineDest()
	{
		LPDISPATCH result;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH GetOutlineAction()
	{
		LPDISPATCH result;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	unsigned long GetOutlineColor()
	{
		unsigned long result;
		InvokeHelper(0x6, DISPATCH_METHOD, VT_UI4, (void*)&result, NULL);
		return result;
	}
	long GetOutlineExpandValue()
	{
		long result;
		InvokeHelper(0x7, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}

	// IPDFOutline properties
public:

};
