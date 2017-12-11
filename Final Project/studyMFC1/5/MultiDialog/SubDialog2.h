#if !defined(AFX_SUBDIALOG2_H__9BDE5022_273A_4E5D_B73F_7CF501632360__INCLUDED_)
#define AFX_SUBDIALOG2_H__9BDE5022_273A_4E5D_B73F_7CF501632360__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SubDialog2.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSubDialog2 dialog

class CSubDialog2 : public CDialog
{
// Construction
public:
	CSubDialog2(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSubDialog2)
	enum { IDD = IDD_DIALOG2 };
	CSpinButtonCtrl	m_Spin1;
	int		m_Text1;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSubDialog2)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSubDialog2)
	virtual BOOL OnInitDialog();
	afx_msg void OnOutofmemorySpin2(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SUBDIALOG2_H__9BDE5022_273A_4E5D_B73F_7CF501632360__INCLUDED_)
