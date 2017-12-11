#if !defined(AFX_SUBDIALOG1_H__510138B2_862C_47F4_B4BF_714448CFD0F0__INCLUDED_)
#define AFX_SUBDIALOG1_H__510138B2_862C_47F4_B4BF_714448CFD0F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SubDialog1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSubDialog1 dialog

class CSubDialog1 : public CDialog
{
// Construction
public:
	CSubDialog1(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSubDialog1)
	enum { IDD = IDD_DIALOG1 };
	int		m_Option1;
	//}}AFX_DATA

	int m_Difficulty;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSubDialog1)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

	
// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSubDialog1)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
	
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SUBDIALOG1_H__510138B2_862C_47F4_B4BF_714448CFD0F0__INCLUDED_)
