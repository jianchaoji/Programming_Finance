; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CHelloWorldDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "HelloWorld.h"

ClassCount=4
Class1=CHelloWorldApp
Class2=CHelloWorldDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_HELLOWORLD_DIALOG

[CLS:CHelloWorldApp]
Type=0
HeaderFile=HelloWorld.h
ImplementationFile=HelloWorld.cpp
Filter=N

[CLS:CHelloWorldDlg]
Type=0
HeaderFile=HelloWorldDlg.h
ImplementationFile=HelloWorldDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=HelloWorldDlg.h
ImplementationFile=HelloWorldDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_HELLOWORLD_DIALOG]
Type=1
Class=CHelloWorldDlg
ControlCount=1
Control1=IDC_BUTTON1,button,1342242816

