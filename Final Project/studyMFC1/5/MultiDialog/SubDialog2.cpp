// SubDialog2.cpp : implementation file
//

#include "stdafx.h"
#include "MultiDialog.h"
#include "SubDialog2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSubDialog2 dialog


CSubDialog2::CSubDialog2(CWnd* pParent /*=NULL*/)
	: CDialog(CSubDialog2::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSubDialog2)
	m_Text1 = 0;
	//}}AFX_DATA_INIT
}


void CSubDialog2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSubDialog2)
	DDX_Control(pDX, IDC_SPIN2, m_Spin1);
	DDX_Text(pDX, IDC_EDIT1, m_Text1);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSubDialog2, CDialog)
	//{{AFX_MSG_MAP(CSubDialog2)
	ON_NOTIFY(NM_OUTOFMEMORY, IDC_SPIN2, OnOutofmemorySpin2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSubDialog2 message handlers



BOOL CSubDialog2::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	m_Spin1.SetRange(1,6);
	m_Text1=1;
	m_Spin1.SetPos(1);

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CSubDialog2::OnOutofmemorySpin2(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here

	*pResult = 0;
}
