// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CPDFTextSelection wrapper class

class CPDFTextSelection : public COleDispatchDriver
{
public:
	CPDFTextSelection(){} // Calls COleDispatchDriver default constructor
	CPDFTextSelection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFTextSelection(const CPDFTextSelection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPDFTextSelection methods
public:
	void ReleaseTextSelection()
	{
		InvokeHelper(0x1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	VARIANT GetBBox()
	{
		VARIANT result;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	CString GetChars()
	{
		CString result;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long CountPieces()
	{
		long result;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	VARIANT GetPieceRect(long pieceIndex)
	{
		VARIANT result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, pieceIndex);
		return result;
	}
	long GetPieceCharStart(long pieceIndex)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, parms, pieceIndex);
		return result;
	}
	long GetPieceCharCount(long pieceIndex)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x7, DISPATCH_METHOD, VT_I4, (void*)&result, parms, pieceIndex);
		return result;
	}

	// IPDFTextSelection properties
public:

};
