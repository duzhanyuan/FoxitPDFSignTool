// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CLink_Dest wrapper class

class CLink_Dest : public COleDispatchDriver
{
public:
	CLink_Dest(){} // Calls COleDispatchDriver default constructor
	CLink_Dest(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CLink_Dest(const CLink_Dest& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// ILink_Dest methods
public:
	long GetPageIndex()
	{
		long result;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetZoomMode()
	{
		long result;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	double GetZoomParam(long nIndex)
	{
		double result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_R8, (void*)&result, parms, nIndex);
		return result;
	}
	long GetZoomParamCount()
	{
		long result;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString GetDestName()
	{
		CString result;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}

	// ILink_Dest properties
public:

};
