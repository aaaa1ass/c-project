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


// HANDLE ?¸ë±?¤ì— ?‘ê·¼?´ì„œ ë²„í¼ë¥?êµì²´?œí‚¤??ë³€??
int screenIndex = 0;

// ë²„í¼???¬ê¸°
int width = 100;
int height = 60;

// ë²„í¼ ?ì„±
HANDLE Screen[2]; // [0] front buffer
// [1] back buffer

typedef struct Player
{
	int x, y;
	const char* shape;
}Player;

// ë²„í¼ë¥?ì´ˆê¸°?”í•˜???¨ìˆ˜
void ScreenInit()
{
	CONSOLE_CURSOR_INFO cursor;

	// ë²„í¼??ê°€ë¡??¬ì´ì¦? ?¸ë¡œ ?¬ì´ì¦?
	COORD size = { width, height };

	// Left, Top, Right, Bottom
	SMALL_RECT rect = { 0, 0, width - 1, height - 1 };

	// ?”ë©´ 2ê°œë? ?ì„±?©ë‹ˆ??
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

	// ì»¤ì„œ???œì„±???¬ë?
	// false : ê±°ì§“
	// true : ì°?
	cursor.bVisible = false;
	cursor.dwSize = 0;

	SetConsoleCursorInfo(Screen[0], &cursor);
	SetConsoleCursorInfo(Screen[1], &cursor);
}

// ë²„í¼ë¥?êµì²´?˜ëŠ” ?¨ìˆ˜
void ScreenFlipping()
{
	// ë²„í¼???˜ë‚˜ë§??œì„±?”ì‹œ?????ˆìŠµ?ˆë‹¤.
	SetConsoleActiveScreenBuffer(Screen[screenIndex]);

	screenIndex = !screenIndex;
}

// êµì²´??ë²„í¼ë¥?ì§€?Œì£¼???¨ìˆ˜
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

// ë²„í¼ë¥??´ì œ?˜ëŠ” ?¨ìˆ˜
void ScreenRelease()
{
	CloseHandle(Screen[0]);
	CloseHandle(Screen[1]);
}

// ?”ë¸” ë²„í¼ë§ì„ ?´ìš©?´ì„œ ì¶œë ¥?˜ëŠ” ?¨ìˆ˜
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
	PlaySound(TEXT("Sound.wav"), NULL, SND_ASYNC | SND_LOOP);// ë°˜ë³µ ?¬ìƒ
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	Player player = { 5, 5, "// Â§ //" };

	// 1. ë²„í¼ ì´ˆê¸°??
	ScreenInit();

	char key = 0;

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

	
		ScreenFlipping();

	
		ScreenClear();
	}

	ScreenRelease();


	return 0;
}