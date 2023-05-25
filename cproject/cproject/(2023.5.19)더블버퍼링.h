#pragma once
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


// HANDLE ?�덱?�에 ?�근?�서 버퍼�?교체?�키??변??
int screenIndex = 0;

// 버퍼???�기
int width = 100;
int height = 60;

// 버퍼 ?�성
HANDLE Screen[2]; // [0] front buffer
// [1] back buffer

typedef struct Player
{
	int x, y;
	const char* shape;
}Player;

// 버퍼�?초기?�하???�수
void ScreenInit()
{
	CONSOLE_CURSOR_INFO cursor;

	// 버퍼??가�??�이�? ?�로 ?�이�?
	COORD size = { width, height };

	// Left, Top, Right, Bottom
	SMALL_RECT rect = { 0, 0, width - 1, height - 1 };

	// ?�면 2개�? ?�성?�니??
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

	// 커서???�성???��?
	// false : 거짓
	// true : �?
	cursor.bVisible = false;
	cursor.dwSize = 0;

	SetConsoleCursorInfo(Screen[0], &cursor);
	SetConsoleCursorInfo(Screen[1], &cursor);
}

// 버퍼�?교체?�는 ?�수
void ScreenFlipping()
{
	// 버퍼???�나�??�성?�시?????�습?�다.
	SetConsoleActiveScreenBuffer(Screen[screenIndex]);

	screenIndex = !screenIndex;
}

// 교체??버퍼�?지?�주???�수
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

// 버퍼�??�제?�는 ?�수
void ScreenRelease()
{
	CloseHandle(Screen[0]);
	CloseHandle(Screen[1]);
}

// ?�블 버퍼링을 ?�용?�서 출력?�는 ?�수
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
	PlaySound(TEXT("Sound.wav"), NULL, SND_ASYNC | SND_LOOP);// 반복 ?�생
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	Player player = { 5, 5, "// § //" };

	// 1. 버퍼 초기??
	ScreenInit();

	char key = 0;

	//?�상
	//0 검??
	//1 ?�랑
	// 2 초록
	// 3 ?�색
	// 4 빨강
	// 5 ?�주
	// 6 ?�랑
	// 7 ?�양
	// 8 ?�색
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

		// 3. 교체??버퍼???�용????��
		ScreenClear();
	}

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
////HANDLE ?�덱?�에 ?�근?�서 버퍼�?교체?�키??변??
//int screenIndex = 0;
//
////버퍼 ?�기
//int width = 100;
//int height = 60;
//
////버퍼 ?�성
//HANDLE Screen[2];// [0] front buffer [1] back buffer
//typedef struct Player
//{
//	int x, y;
//	const char* shape;
//}Player;
//
////버퍼 초기???�수
//void ScreenInit()
//{
//	CONSOLE_CURSOR_INFO cursor;
//
//	//버퍼??가�??�이�? ?�로 ?�이�?
//	COORD size = { width, height };
//
//	//left, top, right, bottom
//	SMALL_RECT rect = { 0,0,width - 1,height - 1 };
//
//	//?�면 2�??�성
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
//	//커서 ?�성???��?
//	cursor.bVisible = false;
//	SetConsoleCursorInfo(Screen[0], &cursor);
//	SetConsoleCursorInfo(Screen[1], &cursor);
//}
//
////버퍼 교체 ?�수
//void ScreenFlipping()
//{
//	//버퍼???�나�??�성??
//	SetConsoleActiveScreenBuffer(Screen[screenIndex]);
//	screenIndex = !screenIndex;
//}
//
////교체??버퍼�?지?�는 ?�수
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
////버퍼 ?�제 ?�수
//void ScreenRelease()
//{
//	CloseHandle(Screen[0]);
//	CloseHandle(Screen[1]);
//}
//
////?�블 버퍼�??�용 출력 ?�수
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
//	Player player = { 5,5,"?? };
//
//	//버퍼 초기??
//	ScreenInit();
//
//	while (1)
//	{
//		ScreenPrint(player.x, player.y, player.shape);
//
//		// 버퍼 교체
//		ScreenFlipping();
//
//		//교체??버퍼 ?�용 ??��
//		ScreenClear();
//	}
//	
//	//버퍼 ?�제
//	ScreenRelease();
//
//	return 0;
//}			

