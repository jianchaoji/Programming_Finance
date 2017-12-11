// MenuDlg.h : header file
//

#if !defined(AFX_MENUDLG_H__AB77C89A_2E22_432E_B492_FB691615C9FD__INCLUDED_)
#define AFX_MENUDLG_H__AB77C89A_2E22_432E_B492_FB691615C9FD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMenuDlg dialog

class CMenuDlg : public CDialog
{
// Construction
public:
	CMenuDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMenuDlg)
	enum { IDD = IDD_MENU_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMenuDlg)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMenuDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnMenuitem32771();
	afx_msg void OnMenuitem32773();
	afx_msg void OnMenuitem32772();
	afx_msg void OnMenuitem32775();
	afx_msg void OnMenuitem32776();
	afx_msg void OnMenuitem32777();
	afx_msg void OnMenuitem32778();
	afx_msg void OnMenuitem32780();
	afx_msg void OnMenuitem32782();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

	BOOL sMn_Checked1;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MENUDLG_H__AB77C89A_2E22_432E_B492_FB691615C9FD__INCLUDED_)
