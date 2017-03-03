// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CPDFAnnotReplyList wrapper class

class CPDFAnnotReplyList : public COleDispatchDriver
{
public:
	CPDFAnnotReplyList(){} // Calls COleDispatchDriver default constructor
	CPDFAnnotReplyList(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFAnnotReplyList(const CPDFAnnotReplyList& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPDFAnnotReplyList methods
public:
	long GetCount()
	{
		long result;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH GetItem(long nIndex)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, nIndex);
		return result;
	}
	void Remove(long nIndex)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nIndex);
	}
	void RemoveAll()
	{
		InvokeHelper(0x4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Add(LPCTSTR Creator, LPCTSTR Content, DATE CreationDate)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_DATE ;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Creator, Content, CreationDate);
	}

	// IPDFAnnotReplyList properties
public:

};
