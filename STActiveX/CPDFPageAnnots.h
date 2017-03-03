// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CPDFPageAnnots wrapper class

class CPDFPageAnnots : public COleDispatchDriver
{
public:
	CPDFPageAnnots(){} // Calls COleDispatchDriver default constructor
	CPDFPageAnnots(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFPageAnnots(const CPDFPageAnnots& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPDFPageAnnots methods
public:
	LPDISPATCH GetAnnot(long AnnotIndex)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, AnnotIndex);
		return result;
	}
	LPDISPATCH AddAnnot(LPDISPATCH AnnotToAddAfter, LPCTSTR SubType, float left, float top, float right, float bottom)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_DISPATCH VTS_BSTR VTS_R4 VTS_R4 VTS_R4 VTS_R4 ;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, AnnotToAddAfter, SubType, left, top, right, bottom);
		return result;
	}
	long RemoveAnnot(LPDISPATCH AnnotToRemove)
	{
		long result;
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_I4, (void*)&result, parms, AnnotToRemove);
		return result;
	}
	long GetAnnotIndex(LPDISPATCH Annot)
	{
		long result;
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Annot);
		return result;
	}
	long GetAnnotsCount()
	{
		long result;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void ReleaseLTAnnot(LPDISPATCH Annot)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x6, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Annot);
	}
	LPDISPATCH GetLTAnnot(long AnnotIndex)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, AnnotIndex);
		return result;
	}
	LPDISPATCH AddLTAnnot(LPDISPATCH AnnotToAddAfter, LPCTSTR SubType, float left, float top, float right, float bottom)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_DISPATCH VTS_BSTR VTS_R4 VTS_R4 VTS_R4 VTS_R4 ;
		InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, AnnotToAddAfter, SubType, left, top, right, bottom);
		return result;
	}

	// IPDFPageAnnots properties
public:

};
