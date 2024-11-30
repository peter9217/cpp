#include <windows.h>
#include <map>
#include <string>
#include <iostream>
#include <thread>

using namespace std;

// 전역 변수
bool g_isInputChanged = false; // 입력값 변경 상태 추적
map<char, char> g_keyMapping; // 숫자 키와 문자 키 매핑
HHOOK g_keyboardHook; // 전역 훅 핸들
bool g_isProcessingKey = false; // 키 매핑 중인지 추적
map<char, bool> g_keyPressed; // 눌린 키 추적

// 키보드 후킹 함수
LRESULT CALLBACK KeyboardProc(int nCode, WPARAM wParam, LPARAM lParam) {
    if (nCode == HC_ACTION && !g_isProcessingKey) {
        KBDLLHOOKSTRUCT* pKbd = (KBDLLHOOKSTRUCT*)lParam;
        char key = (char)pKbd->vkCode; // 가상 키 코드로부터 실제 키 값 가져오기

        // Start 상태일 때만 키 입력을 변경
        if (g_isInputChanged && g_keyMapping.find(key) != g_keyMapping.end()) {
            // 매핑된 키 이벤트를 처리 중임을 표시
            g_isProcessingKey = true;

            // 매핑된 키 처리
            char mappedKey = g_keyMapping[key];

            if (mappedKey == 'A') {
                if (wParam == WM_KEYDOWN) {
                    if (!g_keyPressed['A']) {
                        keybd_event(VK_CONTROL, 0, 0, 0); // Ctrl 누르기
                        Sleep(100);
                        keybd_event(mappedKey, 0, 0, 0); // A 키 누르기
                        g_keyPressed['A'] = true; // A 키가 눌렸다고 표시
                    }
                } else if (wParam == WM_KEYUP) {
                    keybd_event(mappedKey, 0, KEYEVENTF_KEYUP, 0); // A 키 떼기
                    Sleep(100);
                    keybd_event(VK_CONTROL, 0, KEYEVENTF_KEYUP, 0); // Ctrl 떼기
                    g_keyPressed['A'] = false; // A 키가 떼어졌다고 표시
                }
            } else {
                if (wParam == WM_KEYDOWN) {
                    if (!g_keyPressed['A']) {
                        keybd_event(mappedKey, 0, 0, 0); // 매핑된 키 누르기
                        g_keyPressed['A'] = true; // A 키가 눌렸다고 표시
                        Sleep(100);
                    }
                } else if (wParam == WM_KEYUP) {
                    keybd_event(mappedKey, 0, KEYEVENTF_KEYUP, 0); // 매핑된 키 떼기
                    g_keyPressed['A'] = false; // A 키가 떼어졌다고 표시
                    Sleep(100);
                }
            }

            g_isProcessingKey = false;
            return 1; // 추가 처리를 막기 위해 키 이벤트를 반환
        }
    }
    return CallNextHookEx(g_keyboardHook, nCode, wParam, lParam); // 후속 이벤트 전달
}

// Start 버튼 클릭 처리
void OnStartButtonClick(HWND hwnd) {
    g_keyMapping = {
        {'Q', '1'},
        {'W', '2'},
        {'E', '3'},
        {'R', '4'},
        {'T', '5'},
        {'A', '6'},
        {'S', '7'},
        {'D', '8'},
        {'F', '9'},
        {'G', '0'},
        {'1', 'A'}
    };

    g_isInputChanged = true; // 입력값 변경 상태 설정s
}

// Stop 버튼 클릭 처리
void OnStopButtonClick(HWND hwnd) {
    g_isInputChanged = false; // "Stop" 버튼 클릭 시 입력 값 변경 멈춤
}

// 윈도우 프로시저 정의
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_COMMAND:
            switch (LOWORD(wParam)) {
                case 1: // Start 버튼 클릭
                    OnStartButtonClick(hwnd);
                    break;
                case 2: // Stop 버튼 클릭
                    OnStopButtonClick(hwnd);
                    break;
            }
            break;

        case WM_DESTROY:
            PostQuitMessage(0); // 메시지 루프 종료
            return 0;
    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam); // 기본 메시지 처리
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
    // 훅 설치
    g_keyboardHook = SetWindowsHookEx(WH_KEYBOARD_LL, KeyboardProc, NULL, 0);
    if (g_keyboardHook == NULL) {
        MessageBox(NULL, "Failed to install keyboard hook!", "Error", MB_OK);
        return 0;
    }

    const char CLASS_NAME[] = "MyWindowClass";
    WNDCLASS wc = {};
    wc.lpfnWndProc = WindowProc; // 윈도우 프로시저
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;

    if (!RegisterClass(&wc)) {
        return 0;
    }

    HWND hwnd = CreateWindowEx(
        0,
        CLASS_NAME,
        "My GUI Application",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 800, 600,
        NULL,
        NULL,
        hInstance,
        NULL
    );

    if (hwnd == NULL) {
        return 0;
    }

    // Start 버튼 생성
    HWND hStartButton = CreateWindow(
        "BUTTON", "Start", WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        100, 100, 100, 50, hwnd, (HMENU)1, hInstance, NULL
    );

    // Stop 버튼 생성
    HWND hStopButton = CreateWindow(
        "BUTTON", "Stop", WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        300, 100, 100, 50, hwnd, (HMENU)2, hInstance, NULL
    );

    // 창 표시
    ShowWindow(hwnd, nShowCmd);
    UpdateWindow(hwnd);

    // 메시지 루프
    MSG msg = {};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    // 훅 제거
    UnhookWindowsHookEx(g_keyboardHook);

    return 0;
}
