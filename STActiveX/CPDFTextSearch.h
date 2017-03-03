// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CPDFTextSearch wrapper class

class CPDFTextSearch : public COleDispatchDriver
{
public:
	CPDFTextSearch(){} // Calls COleDispatchDriver default constructor
	CPDFTextSearch(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFTextSearch(const CPDFTextSearch& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPDFTextSearch methods
public:
	void ReleaseTextSearch()
	{
		InvokeHelper(0x1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL FindNext()
	{
		BOOL result;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL FindPrev()
	{
		BOOL result;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH GetSelection()
	{
		LPDISPATCH result;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}

	// IPDFTextSearch properties
public:

};
