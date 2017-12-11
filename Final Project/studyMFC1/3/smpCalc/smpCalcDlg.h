// smpCalcDlg.h : header file
//

#if !defined(AFX_SMPCALCDLG_H__DEC5EC27_2255_4276_B093_531FF9389A9E__INCLUDED_)
#define AFX_SMPCALCDLG_H__DEC5EC27_2255_4276_B093_531FF9389A9E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CSmpCalcDlg dialog

class CSmpCalcDlg : public CDialog
{
// Construction
public:
	CSmpCalcDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CSmpCalcDlg)
	enum { IDD = IDD_SMPCALC_DIALOG };
	CString	m_Text1;
	CString	m_Text2;
	CString	m_Text3;
	int		m_Option1;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSmpCalcDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CSmpCalcDlg)
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

#endif // !defined(AFX_SMPCALCDLG_H__DEC5EC27_2255_4276_B093_531FF9389A9E__INCLUDED_)
