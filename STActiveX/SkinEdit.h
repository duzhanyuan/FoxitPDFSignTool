#pragma once


// CSkinEdit

class CSkinEdit : public CEdit
{
	DECLARE_DYNAMIC(CSkinEdit)

public:
	CSkinEdit();
	virtual ~CSkinEdit();
private:
	BOOL m_bTracking;
	BOOL m_bHover;
	BOOL m_bFocus;
	HBRUSH m_ClientBrush;
	HBRUSH m_hOrderBrush;
	HBRUSH m_HotOrderBrush1;
	HBRUSH m_HotOrderBrush2;
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg LRESULT OnMouseLeave(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnMouseHover(WPARAM wParam, LPARAM lParam);
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	afx_msg void OnNcPaint();
	afx_msg void OnPaint();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	HBRUSH CtlColor(CDC * pDC, UINT nCtlColor);
	void OnChange();
private:
	//绘制非客户区边框
	void DrawBorder();
};


