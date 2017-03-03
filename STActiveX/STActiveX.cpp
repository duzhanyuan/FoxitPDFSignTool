// STActiveX.cpp : CSTActiveXApp 和 DLL 注册的实现。

#include "stdafx.h"
#include "STActiveX.h"
#include "foxitpdfsdkproctrl1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CSTActiveXApp theApp;

const GUID CDECL _tlid = { 0x1F775BC0, 0xFC5A, 0x46E7, { 0x95, 0xD9, 0xAA, 0xE6, 0x6A, 0x25, 0xFD, 0xD6 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CSTActiveXApp::InitInstance - DLL 初始化

BOOL CSTActiveXApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO:  在此添加您自己的模块初始化代码。
	}

	return bInit;
}



// CSTActiveXApp::ExitInstance - DLL 终止

int CSTActiveXApp::ExitInstance()
{
	// TODO:  在此添加您自己的模块终止代码。

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - 将项添加到系统注册表

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - 将项从系统注册表中移除

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
