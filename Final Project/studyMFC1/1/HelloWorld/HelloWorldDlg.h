// HelloWorldDlg.h : header file
//

#if !defined(AFX_HELLOWORLDDLG_H__EF46D5FD_2041_4EB9_A8BE_D540823BC31A__INCLUDED_)
#define AFX_HELLOWORLDDLG_H__EF46D5FD_2041_4EB9_A8BE_D540823BC31A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CHelloWorldDlg dialog

class CHelloWorldDlg : public CDialog
{
// Construction
public:
	CHelloWorldDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CHelloWorldDlg)
	enum { IDD = IDD_HELLOWORLD_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHelloWorldDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CHelloWorldDlg)
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

#endif // !defined(AFX_HELLOWORLDDLG_H__EF46D5FD_2041_4EB9_A8BE_D540823BC31A__INCLUDED_)
