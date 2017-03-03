// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CPDFormatTool wrapper class

class CPDFormatTool : public COleDispatchDriver
{
public:
	CPDFormatTool(){} // Calls COleDispatchDriver default constructor
	CPDFormatTool(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFormatTool(const CPDFormatTool& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPDFormatTool methods
public:
	void SetFontName(LPCTSTR FontName)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, FontName);
	}
	CString GetFontName()
	{
		CString result;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void SetFontSize(float FontSize)
	{
		static BYTE parms[] = VTS_R4 ;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, FontSize);
	}
	float GetFontSize()
	{
		float result;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_R4, (void*)&result, NULL);
		return result;
	}
	void SetFontColor(unsigned long FontColor)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_EMPTY, NULL, parms, FontColor);
	}
	unsigned long GetFontColor()
	{
		unsigned long result;
		InvokeHelper(0x6, DISPATCH_METHOD, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void SetBorderColor(unsigned long Color)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Color);
	}
	unsigned long GetBorderColor()
	{
		unsigned long result;
		InvokeHelper(0x8, DISPATCH_METHOD, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void SetFillColor(unsigned long FillColor)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0x9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, FillColor);
	}
	unsigned long GetFillColor()
	{
		unsigned long result;
		InvokeHelper(0xa, DISPATCH_METHOD, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void SetFontBold(BOOL FontBold)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, parms, FontBold);
	}
	BOOL GetFontBold()
	{
		BOOL result;
		InvokeHelper(0xc, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL GetFontBoldEnable()
	{
		BOOL result;
		InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void SetFontItalic(BOOL FontItalic)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xe, DISPATCH_METHOD, VT_EMPTY, NULL, parms, FontItalic);
	}
	BOOL GetFontItalic()
	{
		BOOL result;
		InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL GetFontItalicEnable()
	{
		BOOL result;
		InvokeHelper(0x10, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void SetAlign(long Style)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x11, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Style);
	}
	long GetAlign()
	{
		long result;
		InvokeHelper(0x12, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	float GetCharSpace()
	{
		float result;
		InvokeHelper(0x13, DISPATCH_METHOD, VT_R4, (void*)&result, NULL);
		return result;
	}
	void SetCharSpace(float CharSpace)
	{
		static BYTE parms[] = VTS_R4 ;
		InvokeHelper(0x14, DISPATCH_METHOD, VT_EMPTY, NULL, parms, CharSpace);
	}
	void SetCharHorzScale(float CharHorzScale)
	{
		static BYTE parms[] = VTS_R4 ;
		InvokeHelper(0x15, DISPATCH_METHOD, VT_EMPTY, NULL, parms, CharHorzScale);
	}
	float GetCharHorzScale()
	{
		float result;
		InvokeHelper(0x16, DISPATCH_METHOD, VT_R4, (void*)&result, NULL);
		return result;
	}

	// IPDFormatTool properties
public:

};
