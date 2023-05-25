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


// HANDLE ?∏Îç±?§Ïóê ?ëÍ∑º?¥ÏÑú Î≤ÑÌçºÎ•?ÍµêÏ≤¥?úÌÇ§??Î≥Ä??
int screenIndex = 0;

// Î≤ÑÌçº???¨Í∏∞
int width = 100;
int height = 60;

// Î≤ÑÌçº ?ùÏÑ±
HANDLE Screen[2]; // [0] front buffer
// [1] back buffer

typedef struct Player
{
	int x, y;
	const char* shape;
}Player;

// Î≤ÑÌçºÎ•?Ï¥àÍ∏∞?îÌïò???®Ïàò
void ScreenInit()
{
	CONSOLE_CURSOR_INFO cursor;

	// Î≤ÑÌçº??Í∞ÄÎ°??¨Ïù¥Ï¶? ?∏Î°ú ?¨Ïù¥Ï¶?
	COORD size = { width, height };

	// Left, Top, Right, Bottom
	SMALL_RECT rect = { 0, 0, width - 1, height - 1 };

	// ?îÎ©¥ 2Í∞úÎ? ?ùÏÑ±?©Îãà??
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

	// Ïª§ÏÑú???úÏÑ±???¨Î?
	// false : Í±∞Ïßì
	// true : Ï∞?
	cursor.bVisible = false;
	cursor.dwSize = 0;

	SetConsoleCursorInfo(Screen[0], &cursor);
	SetConsoleCursorInfo(Screen[1], &cursor);
}

// Î≤ÑÌçºÎ•?ÍµêÏ≤¥?òÎäî ?®Ïàò
void ScreenFlipping()
{
	// Î≤ÑÌçº???òÎÇòÎß??úÏÑ±?îÏãú?????àÏäµ?àÎã§.
	SetConsoleActiveScreenBuffer(Screen[screenIndex]);

	screenIndex = !screenIndex;
}

// ÍµêÏ≤¥??Î≤ÑÌçºÎ•?ÏßÄ?åÏ£º???®Ïàò
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

// Î≤ÑÌçºÎ•??¥Ï†ú?òÎäî ?®Ïàò
void ScreenRelease()
{
	CloseHandle(Screen[0]);
	CloseHandle(Screen[1]);
}

// ?îÎ∏î Î≤ÑÌçºÎßÅÏùÑ ?¥Ïö©?¥ÏÑú Ï∂úÎ†•?òÎäî ?®Ïàò
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
	PlaySound(TEXT("Sound.wav"), NULL, SND_ASYNC | SND_LOOP);// Î∞òÎ≥µ ?¨ÏÉù
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	Player player = { 5, 5, "// ¬ß //" };

	// 1. Î≤ÑÌçº Ï¥àÍ∏∞??
	ScreenInit();

	char key = 0;

	//?âÏÉÅ
	//0 Í≤Ä??
	//1 ?åÎûë
	// 2 Ï¥àÎ°ù
	// 3 ?•ÏÉâ
	// 4 Îπ®Í∞ï
	// 5 ?êÏ£º
	// 6 ?∏Îûë
	// 7 ?òÏñë
	// 8 ?åÏÉâ
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

		// 2. Î≤ÑÌçº ÍµêÏ≤¥ 
		ScreenFlipping();

		// 3. ÍµêÏ≤¥??Î≤ÑÌçº???¥Ïö©????†ú
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
////HANDLE ?∏Îç±?§Ïóê ?ëÍ∑º?¥ÏÑú Î≤ÑÌçºÎ•?ÍµêÏ≤¥?úÌÇ§??Î≥Ä??
//int screenIndex = 0;
//
////Î≤ÑÌçº ?¨Í∏∞
//int width = 100;
//int height = 60;
//
////Î≤ÑÌçº ?ùÏÑ±
//HANDLE Screen[2];// [0] front buffer [1] back buffer
//typedef struct Player
//{
//	int x, y;
//	const char* shape;
//}Player;
//
////Î≤ÑÌçº Ï¥àÍ∏∞???®Ïàò
//void ScreenInit()
//{
//	CONSOLE_CURSOR_INFO cursor;
//
//	//Î≤ÑÌçº??Í∞ÄÎ°??¨Ïù¥Ï¶? ?∏Î°ú ?¨Ïù¥Ï¶?
//	COORD size = { width, height };
//
//	//left, top, right, bottom
//	SMALL_RECT rect = { 0,0,width - 1,height - 1 };
//
//	//?îÎ©¥ 2Í∞??ùÏÑ±
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
//	//Ïª§ÏÑú ?úÏÑ±???¨Î?
//	cursor.bVisible = false;
//	SetConsoleCursorInfo(Screen[0], &cursor);
//	SetConsoleCursorInfo(Screen[1], &cursor);
//}
//
////Î≤ÑÌçº ÍµêÏ≤¥ ?®Ïàò
//void ScreenFlipping()
//{
//	//Î≤ÑÌçº???òÎÇòÎß??úÏÑ±??
//	SetConsoleActiveScreenBuffer(Screen[screenIndex]);
//	screenIndex = !screenIndex;
//}
//
////ÍµêÏ≤¥??Î≤ÑÌçºÎ•?ÏßÄ?∞Îäî ?®Ïàò
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
////Î≤ÑÌçº ?¥Ï†ú ?®Ïàò
//void ScreenRelease()
//{
//	CloseHandle(Screen[0]);
//	CloseHandle(Screen[1]);
//}
//
////?îÎ∏î Î≤ÑÌçºÎß??¥Ïö© Ï∂úÎ†• ?®Ïàò
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
//	//Î≤ÑÌçº Ï¥àÍ∏∞??
//	ScreenInit();
//
//	while (1)
//	{
//		ScreenPrint(player.x, player.y, player.shape);
//
//		// Î≤ÑÌçº ÍµêÏ≤¥
//		ScreenFlipping();
//
//		//ÍµêÏ≤¥??Î≤ÑÌçº ?¥Ïö© ??†ú
//		ScreenClear();
//	}
//	
//	//Î≤ÑÌçº ?¥Ï†ú
//	ScreenRelease();
//
//	return 0;
//}			

