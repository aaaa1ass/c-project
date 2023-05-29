#include <stdio.h>
#include <conio.h>
#include <windows.h>

int screenIndex = 0;
int width = 80;
int height = 30;
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
	{ 0, 0, 0, 0 },

	{ 0, 0, 0, 0 },// 2
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 0, 0, 0, 0 },// 3
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 0, 0, 0, 1 },// 4
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 1, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 1, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 0, 0, 0, 0 },// 5
	{ 0, 0, 0, 0 },
	{ 1, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 1 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 0, 0, 0, 1 },// 6
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 1, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 1, 0, 0, 0 },// 7
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 1, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 1 },
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
int block_array_2[100][4] = {
	{ 0, 0, 0, 0 },// 1
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 0, 0, 0, 0 },// 2
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 0, 0, 0, 0 },// 3
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 0, 0, 0, 1 },// 4
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 1, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 1, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 0, 0, 0, 0 },// 5
	{ 0, 0, 0, 0 },
	{ 1, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 1 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 0, 0, 0, 1 },// 6
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 1, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },

	{ 1, 0, 0, 0 },// 7
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 1, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 1 },
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

void print_menu(int menu)
{
	ScreenPrint(37, 12, "게임시작");
	ScreenPrint(37, 14, "나가기");
	if (menu == 0)
	{
		ScreenPrint(36, 12, ">");
		ScreenPrint(45, 12, "<");
	}
	else
	{
		ScreenPrint(36, 14, ">");
		ScreenPrint(43, 14, "<");
	}

}
void print_background(int score)
{
	for (int i = 0; i < 27; i++)
		ScreenPrint(0, i, "|            |            |            |            |");

	ScreenPrint(0, 27, "|____________|____________|____________|____________|");
	ScreenPrint(0, 28, "|____________|____________|____________|____________|");
	ScreenPrint(0, 29, "|      A     |      S     |      ;     |      \'     |");

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
				ScreenPrint(1 + j * 13, time - i,		"■■■■■■");
				//ScreenPrint(1 + j * 13, time - i + 1,	"■■■■■■");
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
			for (int j = 5; j >= -1; j--)
			{
				if (block_array_1[time - 26 - j][i] == 1)
				{
					block_array_1[time - 26 - j][i] = 0;
					*score += 1;
					break;
				}

			}

		}
	}
}
void print_hp(int hp)
{
	for (int i = 0; i < hp; i++)
	{
		ScreenPrint(55,i,"♥");
	}
}
void print_game_over(int menu, int  score)
{
	char C[11] = "Score: 000";

	C[7] = score / 100 + 48;
	score = score - (score / 100) * 100;
	C[8] = score / 10 + 48;
	score = score - (score / 10) * 10;
	C[9] = score + 48;
	
	ScreenPrint(37, 8, "게임오버");
	ScreenPrint(37, 11, C);

	ScreenPrint(37, 14, "다시하기");
	ScreenPrint(37, 16, "나가기");
	if (menu == 0)
	{
		ScreenPrint(36, 14, ">");
		ScreenPrint(45, 14, "<");
	}
	else
	{
		ScreenPrint(36, 16, ">");
		ScreenPrint(43, 16, "<");
	}

}

int main()
{
	int menu = 0;
	int time = 0;
	int score = 0;
	char key = 0;
	int hp = 1;
	int game_over = 0;

	ScreenInit();

	while (1)
	{
		print_menu(menu);

		if (_kbhit())
		{
			key = _getch();

			if (key == -32)
				key = _getch();

			if (key == 72 || key == 80)
			{
				if (menu == 0)
					menu = 1;
				else
					menu = 0;
			}
			
			if (key == 13)
			{
				if (menu == 0)
					break;
				else
					exit(0);
			}

		}

		ScreenFlipping();
		ScreenClear();
	}

	while (1)
	{

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

			for (int i = 0; i < 4; i++)
				if (block_array_1[time - 32][i] == 1)
					hp--;
			if (hp == 0)
				break;

			print_hp(hp);

			ScreenFlipping();
			ScreenClear();

			Sleep(50);
			time++;
		}

		if (game_over == 0)
			while (1)
			{
				ScreenInit();
				print_game_over(menu,score);

				if (_kbhit())
				{
					key = _getch();

					if (key == -32)
						key = _getch();

					if (key == 72 || key == 80)
					{
						if (menu == 0)
							menu = 1;
						else
							menu = 0;
					}

					if (key == 13)
					{
						if (menu == 0)
						{
							time = 0;
							hp = 1;
							score = 0;

							break;
						}
						else
							exit(0);
					}

				}

				ScreenFlipping();
				ScreenClear();
			}
	}


	ScreenRelease();

	return 0;
}