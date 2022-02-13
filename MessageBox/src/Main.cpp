#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR pCmdLine, int nCmdShow)
{
	MessageBox(NULL, "Hello from WinAPI!", "WinAPI", MB_OKCANCEL);
	
	return EXIT_SUCCESS;
}