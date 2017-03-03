// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CPDFTextLink wrapper class

class CPDFTextLink : public COleDispatchDriver
{
public:
	CPDFTextLink(){} // Calls COleDispatchDriver default constructor
	CPDFTextLink(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFTextLink(const CPDFTextLink& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPDFTextLink methods
public:
	long CountLinks()
	{
		long result;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString GetLink(long linkIndex)
	{
		CString result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, linkIndex);
		return result;
	}
	LPDISPATCH GetSelection(long linkIndex)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, linkIndex);
		return result;
	}
	void ReleaseTextLink()
	{
		InvokeHelper(0x4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// IPDFTextLink properties
public:

};
