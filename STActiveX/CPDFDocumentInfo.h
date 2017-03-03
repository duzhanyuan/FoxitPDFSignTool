// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CPDFDocumentInfo wrapper class

class CPDFDocumentInfo : public COleDispatchDriver
{
public:
	CPDFDocumentInfo(){} // Calls COleDispatchDriver default constructor
	CPDFDocumentInfo(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFDocumentInfo(const CPDFDocumentInfo& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPDFDocumentInfo methods
public:

	// IPDFDocumentInfo properties
public:
	CString GetAuthor()
	{
		CString result;
		GetProperty(0x1, VT_BSTR, (void*)&result);
		return result;
	}
	void SetAuthor(CString propVal)
	{
		SetProperty(0x1, VT_BSTR, propVal);
	}
	CString GetSubject()
	{
		CString result;
		GetProperty(0x2, VT_BSTR, (void*)&result);
		return result;
	}
	void SetSubject(CString propVal)
	{
		SetProperty(0x2, VT_BSTR, propVal);
	}
	CString GetCreatedDate()
	{
		CString result;
		GetProperty(0x3, VT_BSTR, (void*)&result);
		return result;
	}
	void SetCreatedDate(CString propVal)
	{
		SetProperty(0x3, VT_BSTR, propVal);
	}
	CString GetModifiedDate()
	{
		CString result;
		GetProperty(0x4, VT_BSTR, (void*)&result);
		return result;
	}
	void SetModifiedDate(CString propVal)
	{
		SetProperty(0x4, VT_BSTR, propVal);
	}
	CString GetKeywords()
	{
		CString result;
		GetProperty(0x5, VT_BSTR, (void*)&result);
		return result;
	}
	void SetKeywords(CString propVal)
	{
		SetProperty(0x5, VT_BSTR, propVal);
	}
	CString GetCreator()
	{
		CString result;
		GetProperty(0x6, VT_BSTR, (void*)&result);
		return result;
	}
	void SetCreator(CString propVal)
	{
		SetProperty(0x6, VT_BSTR, propVal);
	}
	CString GetProducer()
	{
		CString result;
		GetProperty(0x7, VT_BSTR, (void*)&result);
		return result;
	}
	void SetProducer(CString propVal)
	{
		SetProperty(0x7, VT_BSTR, propVal);
	}
	CString GetTitle()
	{
		CString result;
		GetProperty(0x8, VT_BSTR, (void*)&result);
		return result;
	}
	void SetTitle(CString propVal)
	{
		SetProperty(0x8, VT_BSTR, propVal);
	}

};
