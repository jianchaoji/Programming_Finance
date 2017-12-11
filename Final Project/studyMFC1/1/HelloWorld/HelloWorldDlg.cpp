#include <windows.h>  

//expected constructor, destructor, or type conversion before  
// LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);  
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

int WINAPI  WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	PSTR szCmdLine, int iCmdShow) {

	static TCHAR szAppName[] = TEXT("hello");
	HWND hwnd;
	MSG msg;
	WNDCLASS wndclass;

	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	wndclass.lpfnWndProc = WndProc;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.hInstance = hInstance;
	// 加载 图标供程序使用 IDI-图示ID  
	wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	// 加载 鼠标光标供程序使用  IDC-游标ID  
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	//GetStockObject 取得一个图形对象(此例中是取得窗口背景的画刷对象)  
	wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wndclass.lpszMenuName = NULL;
	wndclass.lpszClassName = szAppName;

	// 窗口依照某一窗口类别建立，窗口类别用以标识处理窗口消息的窗口消息处理程序。  
	// 注册窗口  
	if (!RegisterClass(&wndclass)) {
		MessageBox(NULL, TEXT("This program requires Windows NT!"),
			szAppName, MB_ICONERROR);
		return 0;
	}
	// 根据窗口类别 WndClass 建立一个窗口  
	hwnd = CreateWindow(szAppName,  // window class name  
		TEXT("Hello world"),    // window caption  
		WS_OVERLAPPEDWINDOW,    // window style  
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		NULL,   // parent window handle  
		NULL,   // window menu handle  
		hInstance,//program instance handle  
		NULL);  // creation parameters  
				// 在屏幕上显示窗口  
	ShowWindow(hwnd, iCmdShow);
	// 指示窗口自我更新  
	UpdateWindow(hwnd);
	// 从消息队列中取得消息  
	while (GetMessage(&msg, NULL, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)

{
	HWND hwndButton;
	HDC  hdc;
	PAINTSTRUCT ps;
	RECT rect;
	char* str;
	switch (message)
	{
	case WM_CREATE:
		//PlaySound (TEXT ("hellowin.wav"), NULL, SND_FILENAME | SND_ASYNC) ;  
		// 创建一个按钮  
		hwndButton = CreateWindow(
			"BUTTON",   // predefined class  
			"OK",       // button text  
			WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,  // styles  

													   // Size and position values are given explicitly, because  
													   // the CW_USEDEFAULT constant gives zero values for buttons.  
			10,         // starting x position  
			10,         // starting y position  
			100,        // button width  
			100,        // button height  
			hwnd,       // parent window  
			NULL,       // No menu  
			(HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE),
			NULL);      // pointer not needed  
						//MoveWindow(hwndSmaller, 100,100,  100, 100, TRUE) ;  
		return 0;
	case   WM_PAINT:
		// 绘制窗口  
		hdc = BeginPaint(hwnd, &ps);
		// 取得窗口显示区域的大小  
		GetClientRect(hwnd, &rect);
		str = "hello world!!!";
		// 显示字符串  
		// DrawText (hdc, TEXT ("Hello, Windows 98!"), -1, &rect,  
		//    DT_SINGLELINE | DT_CENTER | DT_VCENTER) ;  

		// 输出字符串  
		TextOut(hdc, 20, 20, str, strlen(str));


		EndPaint(hwnd, &ps);
		return 0;
	case   WM_DESTROY:
		// 再消息队列中插入一个[退出程序]消息  
		PostQuitMessage(0);
		return 0;
	}
	// 执行内定的消息处理  
	return DefWindowProc(hwnd, message, wParam, lParam);
}