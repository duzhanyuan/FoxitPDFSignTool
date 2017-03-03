// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CPDFTextDoc wrapper class

class CPDFTextDoc : public COleDispatchDriver
{
public:
	CPDFTextDoc(){} // Calls COleDispatchDriver default constructor
	CPDFTextDoc(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFTextDoc(const CPDFTextDoc& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPDFTextDoc methods
public:
	void ReleasePDFTextDoc()
	{
		InvokeHelper(0x1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH LoadPDFTextPage(long pageIndex)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, pageIndex);
		return result;
	}
	long GetPDFTextPageCount()
	{
		long result;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}

	// IPDFTextDoc properties
public:

};
