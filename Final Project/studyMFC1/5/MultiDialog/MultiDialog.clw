; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CSubDialog2
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MultiDialog.h"

ClassCount=5
Class1=CMultiDialogApp
Class2=CMultiDialogDlg
Class3=CAboutDlg

ResourceCount=5
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_DIALOG1
Class4=CSubDialog1
Resource4=IDD_MULTIDIALOG_DIALOG
Class5=CSubDialog2
Resource5=IDD_DIALOG2

[CLS:CMultiDialogApp]
Type=0
HeaderFile=MultiDialog.h
ImplementationFile=MultiDialog.cpp
Filter=N

[CLS:CMultiDialogDlg]
Type=0
HeaderFile=MultiDialogDlg.h
ImplementationFile=MultiDialogDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CMultiDialogDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=MultiDialogDlg.h
ImplementationFile=MultiDialogDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_MULTIDIALOG_DIALOG]
Type=1
Class=CMultiDialogDlg
ControlCount=6
Control1=IDC_BUTTON1,button,1342242816
Control2=IDC_EDIT1,edit,1350631552
Control3=IDC_STATIC,static,1342308352
Control4=IDC_BUTTON2,button,1342242816
Control5=IDC_EDIT2,edit,1350631552
Control6=IDC_STATIC,static,1342308352

[DLG:IDD_DIALOG1]
Type=1
Class=CSubDialog1
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_RADIO1,button,1342308361
Control4=IDC_RADIO2,button,1342177289
Control5=IDC_RADIO3,button,1342177289

[CLS:CSubDialog1]
Type=0
HeaderFile=SubDialog1.h
ImplementationFile=SubDialog1.cpp
BaseClass=CDialog
Filter=D
LastObject=CSubDialog1
VirtualFilter=dWC

[DLG:IDD_DIALOG2]
Type=1
Class=CSubDialog2
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT1,edit,1350633600
Control6=IDC_SPIN2,msctls_updown32,1342177330

[CLS:CSubDialog2]
Type=0
HeaderFile=SubDialog2.h
ImplementationFile=SubDialog2.cpp
BaseClass=CDialog
Filter=D
LastObject=CSubDialog2
VirtualFilter=dWC

