#pragma once
#include "afxwin.h"

// STActiveXPropPage.h : CSTActiveXPropPage ����ҳ���������


// CSTActiveXPropPage : �й�ʵ�ֵ���Ϣ������� STActiveXPropPage.cpp��

class CSTActiveXPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CSTActiveXPropPage)
	DECLARE_OLECREATE_EX(CSTActiveXPropPage)

// ���캯��
public:
	CSTActiveXPropPage();

// �Ի�������
	enum { IDD = IDD_PROPPAGE_STACTIVEX };

// ʵ��
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ��Ϣӳ��
protected:
	DECLARE_MESSAGE_MAP()
};

