#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75

#define WIDTH 30
#define HEIGHT 60

typedef struct Player {
	int x, y;
	const char* shape;
}Player;

typedef struct Enemy {
	int x, y;
	const char* shape;
}Enemy;

void GotoXY(int x, int y)
{
	COORD position = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void Keyboard(Player* ptrPlayer)
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
		case RIGHT:
			if (ptrPlayer->x < WIDTH)
				ptrPlayer->x += 2;
			break;
		case LEFT:
			if (ptrPlayer->x > 0)
				ptrPlayer->x -= 2;
			break;
		}
	}
}

int RandomX()
{
	int num = rand() % 30;
	if (num % 2 != 0)
	{
		num++;
	}
	return num;
}

int main()
{
	srand(time(NULL));

	Player player = { 16,30,"¡Ý" };

	Enemy enemy[6];
	for (int i = 0; i < 6; i++)
	{
		enemy[i].x = RandomX();
		enemy[i].y = 0;
		enemy[i].shape = "¡ß";
	}

	int count = 0;
	int enemy_stack = 1;

	system(" mode  con lines=31   cols=32 ");

	while (1)
	{
		Keyboard(&player);
		GotoXY(player.x, 29);
		printf("%s", player.shape);

		for (int i = 0; i < enemy_stack; i++)
		{
			GotoXY(enemy[i].x, enemy[i].y);
			printf("%s", enemy[i].shape);
			if (enemy[i].y++ == 29)
			{
				if (enemy[i].x == player.x)
				{
					GotoXY(12, 15);
					printf("game over");
					GotoXY(0, 29);
					exit(0);
				}
				enemy[i].y = 0;
				enemy[i].x = RandomX();
			}
		}

		count++;
		if (count > 4 && enemy_stack < 6)
		{
			count = 0;
			enemy_stack++;
		}

		Sleep(100);
		system("cls");
	}

	return 0;
}

