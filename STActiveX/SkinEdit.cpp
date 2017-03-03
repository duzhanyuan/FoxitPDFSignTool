// SkinEdit.cpp : 实现文件
//

#include "stdafx.h"
#include "SkinEdit.h"


// CSkinEdit

IMPLEMENT_DYNAMIC(CSkinEdit, CEdit)

CSkinEdit::CSkinEdit()
{
	m_bTracking=m_bHover=m_bFocus=FALSE;
	m_ClientBrush=::CreateSolidBrush(GetSysColor(COLOR_BTNFACE));
	m_hOrderBrush=::CreateSolidBrush(GetSysColor(COLOR_WINDOWFRAME));
	m_HotOrderBrush1=::CreateSolidBrush(0xFDC860);
	m_HotOrderBrush2=::CreateSolidBrush(0xE7AC49);
}

CSkinEdit::~CSkinEdit()
{
	DeleteObject(m_ClientBrush);
	DeleteObject(m_hOrderBrush);
	DeleteObject(m_HotOrderBrush1);
	DeleteObject(m_HotOrderBrush2);
}


BEGIN_MESSAGE_MAP(CSkinEdit, CEdit)
	ON_WM_NCPAINT()
	ON_MESSAGE(WM_MOUSELEAVE, OnMouseLeave)
	ON_MESSAGE(WM_MOUSEHOVER, OnMouseHover)
	ON_WM_MOUSEMOVE()
	ON_WM_SETFOCUS()
	ON_WM_KILLFOCUS()

	ON_WM_CTLCOLOR_REFLECT()
	ON_CONTROL_REFLECT(EN_CHANGE, OnChange)
END_MESSAGE_MAP()



// CSkinEdit 消息处理程序
void CSkinEdit::OnMouseMove(UINT nFlags, CPoint point)
{
	if (!m_bTracking)
	{
		TRACKMOUSEEVENT tme;
		tme.cbSize = sizeof(tme);
		tme.hwndTrack = m_hWnd;
		tme.dwFlags = TME_LEAVE | TME_HOVER;
		tme.dwHoverTime = 50;
		m_bTracking = (bool)_TrackMouseEvent(&tme);
	}

	CEdit::OnMouseMove(nFlags, point);
}
LRESULT CSkinEdit::OnMouseLeave(WPARAM wParam, LPARAM lParam)
{
	m_bTracking = FALSE;
	m_bHover=FALSE;
	DrawBorder();
	return 0;
}
LRESULT CSkinEdit::OnMouseHover(WPARAM wParam, LPARAM lParam)
{
	m_bHover=TRUE;
	DrawBorder();
	return 0;
}

void CSkinEdit::OnSetFocus(CWnd* pOldWnd)
{
	CEdit::OnSetFocus(pOldWnd);
	m_bFocus=TRUE;
	DrawBorder();
}
void CSkinEdit::OnKillFocus(CWnd* pNewWnd)
{
	CEdit::OnKillFocus(pNewWnd);
	m_bFocus=FALSE;
	DrawBorder();
}

void CSkinEdit::OnNcPaint()
{
	CEdit::OnNcPaint();

	//HDC hDC = ::GetWindowDC(m_hWnd);
	//CRect rc;
	//::GetWindowRect(m_hWnd, &rc);
	//rc = CRect(0, 0, rc.right - rc.left, rc.bottom - rc.top);
	////::Rectangle(hDC, rc.left, rc.top, rc.right, rc.bottom);
	//
	//CDC *pDC = this->GetDC();
	//pDC->Rectangle(rc.left, rc.top, rc.right, rc.bottom);

	DrawBorder();
}
void CSkinEdit::OnPaint()
{
	CEdit::OnPaint();

	//CDC *hDC = this->GetDC();
	//hDC->SetBkColor(RGB(10, 210, 0));
	//hDC->SetTextColor(RGB(255, 255, 0));

	DrawBorder();
}

HBRUSH CSkinEdit::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CEdit::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  在此更改 DC 的任何特性
	HBRUSH hbrEdit = ::CreateSolidBrush(RGB(0, 0, 0));
	////if (nCtlColor == CTLCOLOR_STATIC)
	//{
	//	if (pWnd->GetDlgCtrlID() == IDC_EDIT1)
	//	{
	//		pDC->SetBkColor(RGB(10, 210, 0));
	//		pDC->SetTextColor(RGB(255, 255, 0));
	//		return hbrEdit;
	//	}
	//}
	// TODO:  如果默认的不是所需画笔，则返回另一个画笔
	return hbr;
}
HBRUSH CSkinEdit::CtlColor(CDC* pDC, UINT nCtlColor)
{
	// TODO: Change any attributes of the DC here

	//pDC->SetBkMode(TRANSPARENT);

	//CBrush m_brush;
	//m_brush.CreateSolidBrush(RGB(255,154,10));

	//return (HBRUSH)m_brush;

	// TODO: Return a non-NULL brush if the parent's handler should not be called
	return NULL;
}
void CSkinEdit::OnChange()
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CEdit::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO: Add your control notification handler code here
	//InvalidateRect(NULL);

}

void CSkinEdit::DrawBorder()
{
	HDC hDC=::GetWindowDC(m_hWnd);
	CRect rc;
	::GetWindowRect(m_hWnd,&rc);
	rc=CRect(0,0,rc.right-rc.left,rc.bottom-rc.top);
	//::Rectangle(hDC, rc.left, rc.top, rc.right, rc.bottom);

	//CDC *pDC = this->GetDC();
	//CBrush m_brush;
	//m_brush.CreateSolidBrush(RGB(255,154,10));
	//pDC->SelectObject(m_brush);
	//pDC->Rectangle(rc.left, rc.top, rc.right, rc.bottom);

	if(m_bHover)
	{
		::FrameRect(hDC,&rc,m_HotOrderBrush1);
		rc.InflateRect(-1,-1);
		::FrameRect(hDC,&rc,m_HotOrderBrush2);
	}else if(m_bFocus)
	{
		::FrameRect(hDC,&rc,m_ClientBrush);
		rc.InflateRect(-1,-1);
		::FrameRect(hDC,&rc,m_HotOrderBrush2);
	}else
	{
		::FrameRect(hDC,&rc,m_ClientBrush);
		rc.InflateRect(-1,-1);
		::FrameRect(hDC,&rc,m_hOrderBrush);
	}
	::ReleaseDC(m_hWnd,hDC);
}