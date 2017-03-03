// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CPDFFormField wrapper class

class CPDFFormField : public COleDispatchDriver
{
public:
	CPDFFormField(){} // Calls COleDispatchDriver default constructor
	CPDFFormField(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFFormField(const CPDFFormField& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPDFFormField methods
public:
	void PopulateListOrComboBox(VARIANT& arrItems, VARIANT& arrExportVal)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT ;
		InvokeHelper(0x1b, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &arrItems, &arrExportVal);
	}
	void SetBackgroundColor(LPCTSTR bstrColorSpace, float redC, float greenM, float blueY, float AlphaK)
	{
		static BYTE parms[] = VTS_BSTR VTS_R4 VTS_R4 VTS_R4 VTS_R4 ;
		InvokeHelper(0x1c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrColorSpace, redC, greenM, blueY, AlphaK);
	}
	void SetBorderColor(LPCTSTR bstrColorSpace, float redC, float greenM, float blueY, float AlphaK)
	{
		static BYTE parms[] = VTS_BSTR VTS_R4 VTS_R4 VTS_R4 VTS_R4 ;
		InvokeHelper(0x1d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrColorSpace, redC, greenM, blueY, AlphaK);
	}
	void SetForegroundColor(LPCTSTR bstrColorSpace, float redC, float greenM, float blueY, float AlphaK)
	{
		static BYTE parms[] = VTS_BSTR VTS_R4 VTS_R4 VTS_R4 VTS_R4 ;
		InvokeHelper(0x1e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrColorSpace, redC, greenM, blueY, AlphaK);
	}
	void SetButtonCaption(LPCTSTR bstrFace, LPCTSTR bstrCaption)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR ;
		InvokeHelper(0x1f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrFace, bstrCaption);
	}
	void SetButtonIcon(LPCTSTR bstrFace, LPCTSTR bstrFilePath)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR ;
		InvokeHelper(0x20, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrFace, bstrFilePath);
	}
	void SetExportValues(VARIANT& arrExportVal)
	{
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0x21, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &arrExportVal);
	}
	void SetJavaScriptAction(LPCTSTR bstrTrigger, LPCTSTR bstrJavaScript)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR ;
		InvokeHelper(0x22, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrTrigger, bstrJavaScript);
	}
	void SetResetFormAction(LPCTSTR bstrTrigger, short bFlags, VARIANT& arrFields)
	{
		static BYTE parms[] = VTS_BSTR VTS_I2 VTS_VARIANT ;
		InvokeHelper(0x23, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrTrigger, bFlags, &arrFields);
	}
	void SetSubmitFormAction(LPCTSTR bstrTrigger, LPCTSTR bstrURL, long bFlags, VARIANT& arrFields)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_I4 VTS_VARIANT ;
		InvokeHelper(0x24, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrTrigger, bstrURL, bFlags, &arrFields);
	}
	long GetPageIndex()
	{
		long result;
		InvokeHelper(0x25, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	float GetRectTop()
	{
		float result;
		InvokeHelper(0x26, DISPATCH_METHOD, VT_R4, (void*)&result, NULL);
		return result;
	}
	float GetRectLeft()
	{
		float result;
		InvokeHelper(0x27, DISPATCH_METHOD, VT_R4, (void*)&result, NULL);
		return result;
	}
	float GetRectRight()
	{
		float result;
		InvokeHelper(0x28, DISPATCH_METHOD, VT_R4, (void*)&result, NULL);
		return result;
	}
	float GetRectBottom()
	{
		float result;
		InvokeHelper(0x29, DISPATCH_METHOD, VT_R4, (void*)&result, NULL);
		return result;
	}

	// IPDFFormField properties
public:
	CString GetAlignment()
	{
		CString result;
		GetProperty(0x1, VT_BSTR, (void*)&result);
		return result;
	}
	void SetAlignment(CString propVal)
	{
		SetProperty(0x1, VT_BSTR, propVal);
	}
	CString GetBorderStyle()
	{
		CString result;
		GetProperty(0x2, VT_BSTR, (void*)&result);
		return result;
	}
	void SetBorderStyle(CString propVal)
	{
		SetProperty(0x2, VT_BSTR, propVal);
	}
	short GetBorderWidth()
	{
		short result;
		GetProperty(0x3, VT_I2, (void*)&result);
		return result;
	}
	void SetBorderWidth(short propVal)
	{
		SetProperty(0x3, VT_I2, propVal);
	}
	short GetButtonLayout()
	{
		short result;
		GetProperty(0x4, VT_I2, (void*)&result);
		return result;
	}
	void SetButtonLayout(short propVal)
	{
		SetProperty(0x4, VT_I2, propVal);
	}
	short GetCalcOrderIndex()
	{
		short result;
		GetProperty(0x5, VT_I2, (void*)&result);
		return result;
	}
	void SetCalcOrderIndex(short propVal)
	{
		SetProperty(0x5, VT_I2, propVal);
	}
	CString GetDefaultValue()
	{
		CString result;
		GetProperty(0x6, VT_BSTR, (void*)&result);
		return result;
	}
	void SetDefaultValue(CString propVal)
	{
		SetProperty(0x6, VT_BSTR, propVal);
	}
	BOOL GetIsEditable()
	{
		BOOL result;
		GetProperty(0x7, VT_BOOL, (void*)&result);
		return result;
	}
	void SetIsEditable(BOOL propVal)
	{
		SetProperty(0x7, VT_BOOL, propVal);
	}
	CString GetBehavior()
	{
		CString result;
		GetProperty(0x8, VT_BSTR, (void*)&result);
		return result;
	}
	void SetBehavior(CString propVal)
	{
		SetProperty(0x8, VT_BSTR, propVal);
	}
	short GetCharLimit()
	{
		short result;
		GetProperty(0x9, VT_I2, (void*)&result);
		return result;
	}
	void SetCharLimit(short propVal)
	{
		SetProperty(0x9, VT_I2, propVal);
	}
	BOOL GetIsHidden()
	{
		BOOL result;
		GetProperty(0xa, VT_BOOL, (void*)&result);
		return result;
	}
	void SetIsHidden(BOOL propVal)
	{
		SetProperty(0xa, VT_BOOL, propVal);
	}
	BOOL GetIsMultiline()
	{
		BOOL result;
		GetProperty(0xb, VT_BOOL, (void*)&result);
		return result;
	}
	void SetIsMultiline(BOOL propVal)
	{
		SetProperty(0xb, VT_BOOL, propVal);
	}
	BOOL GetIsPassword()
	{
		BOOL result;
		GetProperty(0xc, VT_BOOL, (void*)&result);
		return result;
	}
	void SetIsPassword(BOOL propVal)
	{
		SetProperty(0xc, VT_BOOL, propVal);
	}
	BOOL GetIsReadOnly()
	{
		BOOL result;
		GetProperty(0xd, VT_BOOL, (void*)&result);
		return result;
	}
	void SetIsReadOnly(BOOL propVal)
	{
		SetProperty(0xd, VT_BOOL, propVal);
	}
	BOOL GetIsRequired()
	{
		BOOL result;
		GetProperty(0xe, VT_BOOL, (void*)&result);
		return result;
	}
	void SetIsRequired(BOOL propVal)
	{
		SetProperty(0xe, VT_BOOL, propVal);
	}
	CString GetName()
	{
		CString result;
		GetProperty(0xf, VT_BSTR, (void*)&result);
		return result;
	}
	void SetName(CString propVal)
	{
		SetProperty(0xf, VT_BSTR, propVal);
	}
	BOOL GetNoViewFlag()
	{
		BOOL result;
		GetProperty(0x10, VT_BOOL, (void*)&result);
		return result;
	}
	void SetNoViewFlag(BOOL propVal)
	{
		SetProperty(0x10, VT_BOOL, propVal);
	}
	BOOL GetPrintFlag()
	{
		BOOL result;
		GetProperty(0x11, VT_BOOL, (void*)&result);
		return result;
	}
	void SetPrintFlag(BOOL propVal)
	{
		SetProperty(0x11, VT_BOOL, propVal);
	}
	CString GetStyle()
	{
		CString result;
		GetProperty(0x12, VT_BSTR, (void*)&result);
		return result;
	}
	void SetStyle(CString propVal)
	{
		SetProperty(0x12, VT_BSTR, propVal);
	}
	CString GetTextFont()
	{
		CString result;
		GetProperty(0x13, VT_BSTR, (void*)&result);
		return result;
	}
	void SetTextFont(CString propVal)
	{
		SetProperty(0x13, VT_BSTR, propVal);
	}
	short GetTextSize()
	{
		short result;
		GetProperty(0x14, VT_I2, (void*)&result);
		return result;
	}
	void SetTextSize(short propVal)
	{
		SetProperty(0x14, VT_I2, propVal);
	}
	CString GetValue()
	{
		CString result;
		GetProperty(0x15, VT_BSTR, (void*)&result);
		return result;
	}
	void SetValue(CString propVal)
	{
		SetProperty(0x15, VT_BSTR, propVal);
	}
	short GetOrientation()
	{
		short result;
		GetProperty(0x16, VT_I2, (void*)&result);
		return result;
	}
	void SetOrientation(short propVal)
	{
		SetProperty(0x16, VT_I2, propVal);
	}
	CString GetTooltip()
	{
		CString result;
		GetProperty(0x17, VT_BSTR, (void*)&result);
		return result;
	}
	void SetTooltip(CString propVal)
	{
		SetProperty(0x17, VT_BSTR, propVal);
	}
	CString GetType()
	{
		CString result;
		GetProperty(0x18, VT_BSTR, (void*)&result);
		return result;
	}
	void SetType(CString propVal)
	{
		SetProperty(0x18, VT_BSTR, propVal);
	}
	BOOL GetDirtyFlag()
	{
		BOOL result;
		GetProperty(0x19, VT_BOOL, (void*)&result);
		return result;
	}
	void SetDirtyFlag(BOOL propVal)
	{
		SetProperty(0x19, VT_BOOL, propVal);
	}
	CString GetID()
	{
		CString result;
		GetProperty(0x1a, VT_BSTR, (void*)&result);
		return result;
	}
	void SetID(CString propVal)
	{
		SetProperty(0x1a, VT_BSTR, propVal);
	}

};
