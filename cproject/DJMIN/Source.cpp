#include <stdio.h>
#include <conio.h>
#include <windows.h>

int screenIndex = 0;
int width = 100;
int height = 100;
HANDLE Screen[2];
int block_array_1[100][4] = {
	{ 0, 0, 0, 0 },// 1
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 1, 1, 1, 1 },

	{ 0, 0, 0, 0 },// 2
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 1, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 0, 0, 1, 0 },// 3
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 1, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 0, 0, 0, 1 },// 4
	{ 0, 0, 0, 0 },
	{ 0, 0, 1, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 1, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 1, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 0, 0, 0, 0 },// 5
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 0, 0, 0, 0 },// 6
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 0, 0, 0, 0 },// 7
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 0, 0, 0, 0 },// 8
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 0, 0, 0, 0 },// 9
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 0, 0, 0, 0 },// 10
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


void GotoXY(int x, int y)
{
	COORD position = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

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
				ScreenPrint(1 + j * 13, time - i,		"¡á¡á¡á¡á¡á¡á");
				ScreenPrint(1 + j * 13, time - i + 1,	"¡á¡á¡á¡á¡á¡á");
			}
		}

	}
}
void check_bottons(int time, char key, int* score)
{
	char bottons[4] = { 'a', 's', ';', '\'' };

	for (int i = 0; i < 4; i++)
	{
		if (key == bottons[i])
		{
			for (int j = 0; j < 5; j++)
			{
				if (block_array_1[time - 26 - j][i] == 1)
				{
					block_array_1[time - 26 - j][i] = 0;
					*score += 1;
				}
			}
		}
	}
}

int main()
{
	int time = 0;
	int score = 0;
	char key = 0;

	ScreenInit();
	
	while (1)
	{
		print_background(score);

		print_blocks(time, block_array_1);

		if (_kbhit())
			{
				key = _getch();
		
				if (key == -32)
					key = _getch();

				check_bottons(time, key, &score);
			}

		ScreenFlipping();
		ScreenClear();

		Sleep(100);
		time++;
	}

	ScreenRelease();

	return 0;
}