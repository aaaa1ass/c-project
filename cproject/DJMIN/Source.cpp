#include <stdio.h>
#include <conio.h>
#include <windows.h>

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

int main()
{


	Player player = { 0, 5, "¡á¡á¡á¡á¡á¡á" };


	ScreenInit();

	while (1)
	{

		GotoXY(player.x, player.y);
		ScreenPrint(player.x, player.y, player.shape);
		ScreenPrint(player.x, player.y+1, player.shape);

		ScreenFlipping();
		ScreenClear();



		player.y++;
		//system("cls");
		Sleep(100);
	}
	ScreenRelease();
	return 0;
}