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
	// ���� ͼ�깩����ʹ�� IDI-ͼʾID  
	wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	// ���� ����깩����ʹ��  IDC-�α�ID  
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	//GetStockObject ȡ��һ��ͼ�ζ���(��������ȡ�ô��ڱ����Ļ�ˢ����)  
	wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wndclass.lpszMenuName = NULL;
	wndclass.lpszClassName = szAppName;

	// ��������ĳһ���������������������Ա�ʶ��������Ϣ�Ĵ�����Ϣ�������  
	// ע�ᴰ��  
	if (!RegisterClass(&wndclass)) {
		MessageBox(NULL, TEXT("This program requires Windows NT!"),
			szAppName, MB_ICONERROR);
		return 0;
	}
	// ���ݴ������ WndClass ����һ������  
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
				// ����Ļ����ʾ����  
	ShowWindow(hwnd, iCmdShow);
	// ָʾ�������Ҹ���  
	UpdateWindow(hwnd);
	// ����Ϣ������ȡ����Ϣ  
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
		// ����һ����ť  
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
		// ���ƴ���  
		hdc = BeginPaint(hwnd, &ps);
		// ȡ�ô�����ʾ����Ĵ�С  
		GetClientRect(hwnd, &rect);
		str = "hello world!!!";
		// ��ʾ�ַ���  
		// DrawText (hdc, TEXT ("Hello, Windows 98!"), -1, &rect,  
		//    DT_SINGLELINE | DT_CENTER | DT_VCENTER) ;  

		// ����ַ���  
		TextOut(hdc, 20, 20, str, strlen(str));


		EndPaint(hwnd, &ps);
		return 0;
	case   WM_DESTROY:
		// ����Ϣ�����в���һ��[�˳�����]��Ϣ  
		PostQuitMessage(0);
		return 0;
	}
	// ִ���ڶ�����Ϣ����  
	return DefWindowProc(hwnd, message, wParam, lParam);
}