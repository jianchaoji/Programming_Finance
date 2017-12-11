// SubDialog1.cpp : implementation file
//

#include "stdafx.h"
#include "MultiDialog.h"
#include "SubDialog1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSubDialog1 dialog


CSubDialog1::CSubDialog1(CWnd* pParent /*=NULL*/)
	: CDialog(CSubDialog1::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSubDialog1)
	m_Option1 = -1;
	//}}AFX_DATA_INIT
	m_Difficulty=0;
}


void CSubDialog1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSubDialog1)
	DDX_Radio(pDX, IDC_RADIO1, m_Option1);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSubDialog1, CDialog)
	//{{AFX_MSG_MAP(CSubDialog1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSubDialog1 message handlers

void CSubDialog1::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData(TRUE);
	if ((m_Option1>2) ||(m_Option1<0))
	{
		MessageBox("错误的选择！","提示",MB_OK);
		return;
	}
	m_Difficulty=m_Option1;
	CDialog::OnOK();
}
