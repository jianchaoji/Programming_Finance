// GetTextDlg.h : header file
//

#if !defined(AFX_GETTEXTDLG_H__9275A39C_E872_4530_A230_35ECC91833DC__INCLUDED_)
#define AFX_GETTEXTDLG_H__9275A39C_E872_4530_A230_35ECC91833DC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CGetTextDlg dialog

class CGetTextDlg : public CDialog
{
// Construction
public:
	CGetTextDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CGetTextDlg)
	enum { IDD = IDD_GETTEXT_DIALOG };
	CString	m_Text1;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGetTextDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CGetTextDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GETTEXTDLG_H__9275A39C_E872_4530_A230_35ECC91833DC__INCLUDED_)
