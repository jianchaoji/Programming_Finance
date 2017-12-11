// GetText.h : main header file for the GETTEXT application
//

#if !defined(AFX_GETTEXT_H__D86C9C47_5EB3_425D_84AB_459079FEFDF3__INCLUDED_)
#define AFX_GETTEXT_H__D86C9C47_5EB3_425D_84AB_459079FEFDF3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CGetTextApp:
// See GetText.cpp for the implementation of this class
//

class CGetTextApp : public CWinApp
{
public:
	CGetTextApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGetTextApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CGetTextApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GETTEXT_H__D86C9C47_5EB3_425D_84AB_459079FEFDF3__INCLUDED_)
