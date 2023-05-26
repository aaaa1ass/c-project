#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <windows.h>

int block_array_1[50][4] = {
	{ 1, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 1, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 1, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 1 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 }
};

typedef struct Player
{
	int x, y;
	const char* shape;
}Player;

void GotoXY(int x, int y)
{
	COORD position = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}
int width = 100;
int height = 80;
HANDLE Screen[2];
void ScreenInit()
{
	CONSOLE_CURSOR_INFO cursor;

	COORD size = { width, height };

	// Left, Top, Right, Bottom
	SMALL_RECT rect = { 0, 0, width - 1, height - 1 };

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

	cursor.bVisible = false;
	cursor.dwSize = 0;

	SetConsoleCursorInfo(Screen[0], &cursor);
	SetConsoleCursorInfo(Screen[1], &cursor);
}
int screenIndex = 0;
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
void ScreenFlipping()
{
	SetConsoleActiveScreenBuffer(Screen[screenIndex]);

	screenIndex = !screenIndex;
}
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
void ScreenRelease()
{
	CloseHandle(Screen[0]);
	CloseHandle(Screen[1]);
}

void print_background(int score)
{
	for (int i = 0; i < 27; i++)
		ScreenPrint(0, i, "|            |            |            |            |");

	ScreenPrint(0, 27, "|____________|____________|____________|____________|");
	ScreenPrint(0, 28, "|            |            |            |            |");
	ScreenPrint(0, 29, "|____________|____________|____________|____________|");

	char C[11] = "Score: 000";

	C[7] = score / 100 + 48;
	score = score - (score / 100) * 100;
	C[8] = score / 10 + 48;
	score = score - (score / 10) * 10;
	C[9] = score + 48;
	ScreenPrint(60, 0, C);
}

void print_blocks(int time, int array[][4])
{
	for (int i = time; i > time - 29 && i >= 0; i--)
	{
		for (int j = 0; j < 4; j++)
		{
			if (array[i][j] == TRUE)
			{
				ScreenPrint(1 + j * 13, time - i, "¡á¡á¡á¡á¡á¡á");
				ScreenPrint(1 + j * 13, time - i + 1, "¡á¡á¡á¡á¡á¡á");
			}
		}

	}
}

int main()
{
	Player player = { 1, 5, "¡á¡á¡á¡á¡á¡á" };

	int time = 0;
	int score = 0;
	char key = 0;

	ScreenInit();
	
	while (1)
	{
		
		print_background(score);

		print_blocks(time, block_array_1);

		ScreenFlipping();

		ScreenClear();

		if (_kbhit())
			{
				key = _getch();
		
				if (key == -32)
					key = _getch();

				if (key == 'a')
					if (block_array_1[time - 28][0] == 1)
						score++;

			}


		Sleep(300);
		time++;
	}
	ScreenRelease();
	return 0;
}