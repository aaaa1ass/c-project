#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <malloc.h>
#include <math.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

#include "../cproject/FrameWork/LoadManager.h"

#define UP 72
#define DOWN 80
//#define RIGHT 77
//#define LEFT 75

void GotoXY(int x, int y)
{
	COORD position = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

typedef struct Select
{
	int x,y;
	const char* shape;
} Select;


void Keyboard(Select * selectPtr)
{
	char key = 0;
	if (_kbhit())
	{
		key = _getch();

		if (key == -32)
		{
			key = _getch();
		}

		switch (key)
		{
		case UP: selectPtr->y -= 5;
			break;
		case DOWN: selectPtr->y += 5;
			break;
		}
		system("cls");
	}
}

void Typing(unsigned int speed, const char * content)
{
	int i = 0;

	while (content[i] != '\0')
	{
		printf("%c", content[i++]);
		fflush(stdout);
		Sleep(speed);
	}

}

int main()
{
	//ReadtxtFile("Resources/DB.txt");
	//Typing(200, "Resources");
	
	int stage = 0;
	
	Select select = { 15,29,"ขั" };
	
	while (1)
	{
		GotoXY(select.x, select.y);
		Keyboard(&select);
		switch (stage)
		{
		case 0: ReadtxtFile("Resources/DB.txt");
			break;
		case 1: ReadtxtFile("Resources/Monster.txt");
			break;
		}
	}

	return 0;
}

