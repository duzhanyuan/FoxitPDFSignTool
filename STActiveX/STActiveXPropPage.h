#pragma once
#include "afxwin.h"

// STActiveXPropPage.h : CSTActiveXPropPage 属性页类的声明。


// CSTActiveXPropPage : 有关实现的信息，请参阅 STActiveXPropPage.cpp。

class CSTActiveXPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CSTActiveXPropPage)
	DECLARE_OLECREATE_EX(CSTActiveXPropPage)

// 构造函数
public:
	CSTActiveXPropPage();

// 对话框数据
	enum { IDD = IDD_PROPPAGE_STACTIVEX };

// 实现
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 消息映射
protected:
	DECLARE_MESSAGE_MAP()
};

