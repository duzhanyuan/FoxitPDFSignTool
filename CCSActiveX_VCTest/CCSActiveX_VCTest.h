
// CCSActiveX_VCTest.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCCSActiveX_VCTestApp: 
// �йش����ʵ�֣������ CCSActiveX_VCTest.cpp
//

class CCCSActiveX_VCTestApp : public CWinApp
{
public:
	CCCSActiveX_VCTestApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCCSActiveX_VCTestApp theApp;