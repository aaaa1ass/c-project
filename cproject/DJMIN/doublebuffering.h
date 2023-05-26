#pragma once
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

	char key = 0;

	while (1)
	{
		if (_kbhit())
		{
			key = _getch();

			if (key == -32)
				key = _getch();

			
				
		}

		GotoXY(player.x, player.y);

		ScreenPrint(player.x, player.y, player.shape);

	
		ScreenFlipping();

	
		ScreenClear();
	}

	ScreenRelease();


	return 0;
}