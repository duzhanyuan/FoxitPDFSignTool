// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CPDFAnnotReply wrapper class

class CPDFAnnotReply : public COleDispatchDriver
{
public:
	CPDFAnnotReply(){} // Calls COleDispatchDriver default constructor
	CPDFAnnotReply(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFAnnotReply(const CPDFAnnotReply& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPDFAnnotReply methods
public:
	void SetCreator(LPCTSTR Creator)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Creator);
	}
	CString GetCreator()
	{
		CString result;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void SetContent(LPCTSTR Content)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Content);
	}
	CString GetContent()
	{
		CString result;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH GetChildren()
	{
		LPDISPATCH result;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH GetParent()
	{
		LPDISPATCH result;
		InvokeHelper(0x6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	DATE GetCreationDate()
	{
		DATE result;
		InvokeHelper(0x7, DISPATCH_METHOD, VT_DATE, (void*)&result, NULL);
		return result;
	}
	void SetCreationDate(DATE CreationDate)
	{
		static BYTE parms[] = VTS_DATE ;
		InvokeHelper(0x8, DISPATCH_METHOD, VT_EMPTY, NULL, parms, CreationDate);
	}
	void SetReadonly(BOOL bNewValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bNewValue);
	}
	long GetReplyID()
	{
		long result;
		InvokeHelper(0xa, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}

	// IPDFAnnotReply properties
public:

};
