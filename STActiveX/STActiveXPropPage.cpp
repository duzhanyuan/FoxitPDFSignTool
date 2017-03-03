// STActiveXPropPage.cpp : CSTActiveXPropPage ����ҳ���ʵ�֡�

#include "stdafx.h"
#include "STActiveX.h"
#include "STActiveXPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CSTActiveXPropPage, COlePropertyPage)

// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CSTActiveXPropPage, COlePropertyPage)
END_MESSAGE_MAP()

// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CSTActiveXPropPage, "STACTIVEX.STActiveXPropPage.1",
	0x7493de33, 0x5d16, 0x4a1a, 0x8c, 0xa1, 0x6, 0x1f, 0x12, 0xcf, 0x8a, 0xa4)

// CSTActiveXPropPage::CSTActiveXPropPageFactory::UpdateRegistry -
// ��ӻ��Ƴ� CSTActiveXPropPage ��ϵͳע�����

BOOL CSTActiveXPropPage::CSTActiveXPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_STACTIVEX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CSTActiveXPropPage::CSTActiveXPropPage - ���캯��

CSTActiveXPropPage::CSTActiveXPropPage() :
	COlePropertyPage(IDD, IDS_STACTIVEX_PPG_CAPTION)
{
}

// CSTActiveXPropPage::DoDataExchange - ��ҳ�����Լ��ƶ�����

void CSTActiveXPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CSTActiveXPropPage ��Ϣ�������
