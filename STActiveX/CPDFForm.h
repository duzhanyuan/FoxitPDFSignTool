// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CPDFForm wrapper class

class CPDFForm : public COleDispatchDriver
{
public:
	CPDFForm(){} // Calls COleDispatchDriver default constructor
	CPDFForm(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFForm(const CPDFForm& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPDFForm methods
public:
	LPDISPATCH AddField(LPCTSTR bstrFieldName, LPCTSTR bstrFieldType, long pageIndex, float left, float top, float right, float bottom)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4 ;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, bstrFieldName, bstrFieldType, pageIndex, left, top, right, bottom);
		return result;
	}
	void RemoveFieldsByName(LPCTSTR bstrFieldName)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrFieldName);
	}
	void ExportToFDF(LPCTSTR bstrFullPath, BOOL bEmptyFields, VARIANT& arrFields)
	{
		static BYTE parms[] = VTS_BSTR VTS_BOOL VTS_VARIANT ;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrFullPath, bEmptyFields, &arrFields);
	}
	void ImportFromFDF(LPCTSTR bstrFullPath)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrFullPath);
	}
	LPDISPATCH GetFieldByIndex(long index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, index);
		return result;
	}
	long GetFieldsCount()
	{
		long result;
		InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void RemoveField(LPDISPATCH pFormField)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pFormField);
	}
	LPDISPATCH GetSelectedField()
	{
		LPDISPATCH result;
		InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}

	// IPDFForm properties
public:

};
