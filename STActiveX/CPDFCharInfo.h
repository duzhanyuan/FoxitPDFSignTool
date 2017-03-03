// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CPDFCharInfo wrapper class

class CPDFCharInfo : public COleDispatchDriver
{
public:
	CPDFCharInfo(){} // Calls COleDispatchDriver default constructor
	CPDFCharInfo(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFCharInfo(const CPDFCharInfo& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPDFCharInfo methods
public:
	VARIANT GetBBox()
	{
		VARIANT result;
		InvokeHelper(0x8, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT GetMatrix()
	{
		VARIANT result;
		InvokeHelper(0x9, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}

	// IPDFCharInfo properties
public:
	short Getstate()
	{
		short result;
		GetProperty(0x1, VT_I2, (void*)&result);
		return result;
	}
	void Setstate(short propVal)
	{
		SetProperty(0x1, VT_I2, propVal);
	}
	float GetFontSize()
	{
		float result;
		GetProperty(0x2, VT_R4, (void*)&result);
		return result;
	}
	void SetFontSize(float propVal)
	{
		SetProperty(0x2, VT_R4, propVal);
	}
	float GetoriginX()
	{
		float result;
		GetProperty(0x3, VT_R4, (void*)&result);
		return result;
	}
	void SetoriginX(float propVal)
	{
		SetProperty(0x3, VT_R4, propVal);
	}
	float GetoriginY()
	{
		float result;
		GetProperty(0x4, VT_R4, (void*)&result);
		return result;
	}
	void SetoriginY(float propVal)
	{
		SetProperty(0x4, VT_R4, propVal);
	}
	CString GetFontName()
	{
		CString result;
		GetProperty(0x5, VT_BSTR, (void*)&result);
		return result;
	}
	void SetFontName(CString propVal)
	{
		SetProperty(0x5, VT_BSTR, propVal);
	}
	long GetfontAscent()
	{
		long result;
		GetProperty(0x6, VT_I4, (void*)&result);
		return result;
	}
	void SetfontAscent(long propVal)
	{
		SetProperty(0x6, VT_I4, propVal);
	}
	long GetfontDescent()
	{
		long result;
		GetProperty(0x7, VT_I4, (void*)&result);
		return result;
	}
	void SetfontDescent(long propVal)
	{
		SetProperty(0x7, VT_I4, propVal);
	}

};
