// STActiveXPropPage.cpp : CSTActiveXPropPage 属性页类的实现。

#include "stdafx.h"
#include "STActiveX.h"
#include "STActiveXPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CSTActiveXPropPage, COlePropertyPage)

// 消息映射

BEGIN_MESSAGE_MAP(CSTActiveXPropPage, COlePropertyPage)
END_MESSAGE_MAP()

// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CSTActiveXPropPage, "STACTIVEX.STActiveXPropPage.1",
	0x7493de33, 0x5d16, 0x4a1a, 0x8c, 0xa1, 0x6, 0x1f, 0x12, 0xcf, 0x8a, 0xa4)

// CSTActiveXPropPage::CSTActiveXPropPageFactory::UpdateRegistry -
// 添加或移除 CSTActiveXPropPage 的系统注册表项

BOOL CSTActiveXPropPage::CSTActiveXPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_STACTIVEX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CSTActiveXPropPage::CSTActiveXPropPage - 构造函数

CSTActiveXPropPage::CSTActiveXPropPage() :
	COlePropertyPage(IDD, IDS_STACTIVEX_PPG_CAPTION)
{
}

// CSTActiveXPropPage::DoDataExchange - 在页和属性间移动数据

void CSTActiveXPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CSTActiveXPropPage 消息处理程序
