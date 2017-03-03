// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CPDFPrinter wrapper class

class CPDFPrinter : public COleDispatchDriver
{
public:
	CPDFPrinter(){} // Calls COleDispatchDriver default constructor
	CPDFPrinter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFPrinter(const CPDFPrinter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IPDFPrinter methods
public:
	void PrintWithDialog()
	{
		InvokeHelper(0xf, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void PrintQuiet()
	{
		InvokeHelper(0x10, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void SetPaperSize(long paperSize)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x11, DISPATCH_METHOD, VT_EMPTY, NULL, parms, paperSize);
	}
	long GetSystemPrinterCount()
	{
		long result;
		InvokeHelper(0x12, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString GetSystemPrinterNameByIndex(long index)
	{
		CString result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x13, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, index);
		return result;
	}
	void SetPaperSizeByPage(BOOL bPage)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x14, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bPage);
	}

	// IPDFPrinter properties
public:
	CString GetprinterName()
	{
		CString result;
		GetProperty(0x1, VT_BSTR, (void*)&result);
		return result;
	}
	void SetprinterName(CString propVal)
	{
		SetProperty(0x1, VT_BSTR, propVal);
	}
	long GetPrinterRangeMode()
	{
		long result;
		GetProperty(0x2, VT_I4, (void*)&result);
		return result;
	}
	void SetPrinterRangeMode(long propVal)
	{
		SetProperty(0x2, VT_I4, propVal);
	}
	short GetprinterRangeFrom()
	{
		short result;
		GetProperty(0x3, VT_I2, (void*)&result);
		return result;
	}
	void SetprinterRangeFrom(short propVal)
	{
		SetProperty(0x3, VT_I2, propVal);
	}
	short GetprinterRangeTo()
	{
		short result;
		GetProperty(0x4, VT_I2, (void*)&result);
		return result;
	}
	void SetprinterRangeTo(short propVal)
	{
		SetProperty(0x4, VT_I2, propVal);
	}
	short GetnumOfCopies()
	{
		short result;
		GetProperty(0x5, VT_I2, (void*)&result);
		return result;
	}
	void SetnumOfCopies(short propVal)
	{
		SetProperty(0x5, VT_I2, propVal);
	}
	float GetScaling()
	{
		float result;
		GetProperty(0x6, VT_R4, (void*)&result);
		return result;
	}
	void SetScaling(float propVal)
	{
		SetProperty(0x6, VT_R4, propVal);
	}
	BOOL GetAutoRotate()
	{
		BOOL result;
		GetProperty(0x7, VT_BOOL, (void*)&result);
		return result;
	}
	void SetAutoRotate(BOOL propVal)
	{
		SetProperty(0x7, VT_BOOL, propVal);
	}
	BOOL GetAutoCenter()
	{
		BOOL result;
		GetProperty(0x8, VT_BOOL, (void*)&result);
		return result;
	}
	void SetAutoCenter(BOOL propVal)
	{
		SetProperty(0x8, VT_BOOL, propVal);
	}
	BOOL GetCollate()
	{
		BOOL result;
		GetProperty(0x9, VT_BOOL, (void*)&result);
		return result;
	}
	void SetCollate(BOOL propVal)
	{
		SetProperty(0x9, VT_BOOL, propVal);
	}
	short GetRotation()
	{
		short result;
		GetProperty(0xa, VT_I2, (void*)&result);
		return result;
	}
	void SetRotation(short propVal)
	{
		SetProperty(0xa, VT_I2, propVal);
	}
	short GetRangeSubset()
	{
		short result;
		GetProperty(0xb, VT_I2, (void*)&result);
		return result;
	}
	void SetRangeSubset(short propVal)
	{
		SetProperty(0xb, VT_I2, propVal);
	}
	BOOL GetReversePage()
	{
		BOOL result;
		GetProperty(0xc, VT_BOOL, (void*)&result);
		return result;
	}
	void SetReversePage(BOOL propVal)
	{
		SetProperty(0xc, VT_BOOL, propVal);
	}
	BOOL GetPageBorder()
	{
		BOOL result;
		GetProperty(0xd, VT_BOOL, (void*)&result);
		return result;
	}
	void SetPageBorder(BOOL propVal)
	{
		SetProperty(0xd, VT_BOOL, propVal);
	}
	short GetprintWhat()
	{
		short result;
		GetProperty(0xe, VT_I2, (void*)&result);
		return result;
	}
	void SetprintWhat(short propVal)
	{
		SetProperty(0xe, VT_I2, propVal);
	}

};
