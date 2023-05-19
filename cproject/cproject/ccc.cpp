#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>

#pragma comment (lib, "winmm.lib")
#include <mmsystem.h>

#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75

void GotoXY(int x, int y)
{
	COORD position = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}


// HANDLE 인덱스에 접근해서 버퍼를 교체시키는 변수
int screenIndex = 0;

// 버퍼의 크기
int width = 100;
int height = 60;

// 버퍼 생성
HANDLE Screen[2]; // [0] front buffer
// [1] back buffer

typedef struct Player
{
	int x, y;
	const char* shape;
}Player;

// 버퍼를 초기화하는 함수
void ScreenInit()
{
	CONSOLE_CURSOR_INFO cursor;

	// 버퍼의 가로 사이즈, 세로 사이즈
	COORD size = { width, height };

	// Left, Top, Right, Bottom
	SMALL_RECT rect = { 0, 0, width - 1, height - 1 };

	// 화면 2개를 생성합니다.
	// front buffer
	Screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	SetConsoleScreenBufferSize(Screen[0], size);

	SetConsoleWindowInfo(Screen[0], TRUE, &rect);

	// back buffer
	Screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	SetConsoleScreenBufferSize(Screen[1], size);

	SetConsoleWindowInfo(Screen[1], TRUE, &rect);

	// 커서의 활성화 여부
	// false : 거짓
	// true : 참
	cursor.bVisible = false;
	cursor.dwSize = 0;

	SetConsoleCursorInfo(Screen[0], &cursor);
	SetConsoleCursorInfo(Screen[1], &cursor);
}

// 버퍼를 교체하는 함수
void ScreenFlipping()
{
	// 버퍼는 하나만 활성화시킬 수 있습니다.
	SetConsoleActiveScreenBuffer(Screen[screenIndex]);

	screenIndex = !screenIndex;
}

// 교체된 버퍼를 지워주는 함수
void ScreenClear()
{
	COORD coord = { 0,0 };

	DWORD dw;

	FillConsoleOutputCharacter
	(
		Screen[screenIndex],
		' ',
		width * height,
		coord,
		&dw
	);
}

// 버퍼를 해제하는 함수
void ScreenRelease()
{
	CloseHandle(Screen[0]);
	CloseHandle(Screen[1]);
}

// 더블 버퍼링을 이용해서 출력하는 함수
void ScreenPrint(int x, int y, const char* string)
{
	COORD cursorPosition = { x, y };

	DWORD dw;

	SetConsoleCursorPosition(Screen[screenIndex], cursorPosition);

	WriteFile
	(
		Screen[screenIndex],
		string,
		strlen(string),
		&dw,
		NULL
	);
}

int main()
{
	PlaySound(TEXT("Sound.wav"), NULL, SND_ASYNC);
	PlaySound(TEXT("Sound.wav"), NULL, SND_ASYNC | SND_LOOP);// 반복 재생
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	Player player = { 5, 5, "// § //" };

	// 1. 버퍼 초기화
	ScreenInit();

	char key = 0;

	//색상
	//0 검정
	//1 파랑
	// 2 초록
	// 3 옥색
	// 4 빨강
	// 5 자주
	// 6 노랑
	// 7 하양
	// 8 회색
	// 
	//




	while (1)
	{
		if (_kbhit())
		{
			key = _getch();

			if (key == -32)
				key = _getch();

			if (key == UP && player.y > 0)
				player.y--;
			else if (key == DOWN)
				player.y++;
			else if (key == RIGHT)
				player.x += 2;
			else if (key == LEFT && player.x > 0)
				player.x -= 2;
		}

		GotoXY(player.x, player.y);

		ScreenPrint(player.x, player.y, player.shape);

		// 2. 버퍼 교체 
		ScreenFlipping();

		// 3. 교체된 버퍼의 내용을 삭제
		ScreenClear();
	}
	//while (1)
//{
//	GotoXY(x, y);
//	printf("★");
//
//	if (_kbhit())
//	{
//		key = _getch(); 
//	 
//		if (key == -32)
//			key = _getch();
//	 
//		if (key == UP && y>0)
//			y--;
//		else if (key == DOWN)
//			y++;
//		else if (key == RIGHT)
//			x+=2;
//		else if (key == LEFT && x > 0)
//			x-=2;						 
//	}
//	system("cls");
//}

	// 게임이 종료되었을 때 버퍼를 해제합니다.
	ScreenRelease();


	return 0;
}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <limits.h>
//#include <malloc.h>
//#include <math.h>
//#include <string.h>
//#include <stdarg.h>
//#include <stdlib.h>
//#include <time.h>
//#include <conio.h>
//#include <windows.h>
//
////HANDLE 인덱스에 접근해서 버퍼를 교체시키는 변수
//int screenIndex = 0;
//
////버퍼 크기
//int width = 100;
//int height = 60;
//
////버퍼 생성
//HANDLE Screen[2];// [0] front buffer [1] back buffer
//typedef struct Player
//{
//	int x, y;
//	const char* shape;
//}Player;
//
////버퍼 초기화 함수
//void ScreenInit()
//{
//	CONSOLE_CURSOR_INFO cursor;
//
//	//버퍼의 가로 사이즈, 세로 사이즈
//	COORD size = { width, height };
//
//	//left, top, right, bottom
//	SMALL_RECT rect = { 0,0,width - 1,height - 1 };
//
//	//화면 2개 생성
//	Screen[0] = CreateConsoleScreenBuffer(
//		GENERIC_READ | GENERIC_WRITE,
//		FILE_SHARE_READ | FILE_SHARE_WRITE,
//		NULL,
//		CONSOLE_TEXTMODE_BUFFER,
//		NULL);
//	SetConsoleScreenBufferSize(Screen[0], size);
//	SetConsoleWindowInfo(Screen[0], TRUE, &rect);
//
//	//back buffer
//	Screen[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
//	SetConsoleScreenBufferSize(Screen[1], size);
//	SetConsoleWindowInfo(Screen[1], TRUE, &rect);
//
//	//커서 활성화 여부
//	cursor.bVisible = false;
//	SetConsoleCursorInfo(Screen[0], &cursor);
//	SetConsoleCursorInfo(Screen[1], &cursor);
//}
//
////버퍼 교체 함수
//void ScreenFlipping()
//{
//	//버퍼는 하나만 활성화
//	SetConsoleActiveScreenBuffer(Screen[screenIndex]);
//	screenIndex = !screenIndex;
//}
//
////교체된 버퍼를 지우는 함수
//void ScreenClear()
//{
//	COORD coord = { 0,0 };
//
//	DWORD dw;
//
//	FillConsoleOutputCharacter
//	(
//		Screen[screenIndex],
//		' ',
//		width * height,
//		coord,
//		&dw
//	);
//}
//
////버퍼 해제 함수
//void ScreenRelease()
//{
//	CloseHandle(Screen[0]);
//	CloseHandle(Screen[1]);
//}
//
////더블 버퍼링 이용 출력 함수
//void ScreenPrint(int x, int y, const char* string)
//{
//	COORD cursorPosition = { x,y };
//	DWORD dw;
//	SetConsoleCursorPosition(Screen[screenIndex], cursorPosition);
//	WriteFile
//	(
//		Screen[screenIndex],
//		string,
//		strlen(string),
//		&dw,
//		NULL
//	);
//}
//
//int main()
//{
//	Player player = { 5,5,"★" };
//
//	//버퍼 초기화
//	ScreenInit();
//
//	while (1)
//	{
//		ScreenPrint(player.x, player.y, player.shape);
//
//		// 버퍼 교체
//		ScreenFlipping();
//
//		//교체된 버퍼 내용 삭제
//		ScreenClear();
//	}
//	
//	//버퍼 해제
//	ScreenRelease();
//
//	return 0;
//}			
			
