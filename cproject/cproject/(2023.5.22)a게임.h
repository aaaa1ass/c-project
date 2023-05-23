#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75

#define WIDTH 11
#define HEIGHT 11

typedef struct Player {
	int x, y;
	const char* shape;
}Player;

void GotoXY(int x, int y)
{
	COORD position = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

//¹Ì·Î ¸Ê µ¥ÀÌÅÍ
char maze[WIDTH][HEIGHT];

//¹Ì·Î ¸Ê »ý¼º
void CreateMaze()
{
	// 0: °ø°£
	// 1: º®
	// 2: °ñ
	strcpy(maze[0], "1011111111");
	strcpy(maze[1], "1000011101");
	strcpy(maze[2], "1111010001");
	strcpy(maze[3], "1100010101");
	strcpy(maze[4], "1001000101");
	strcpy(maze[5], "1111110101");
	strcpy(maze[6], "1100000111");
	strcpy(maze[7], "1101110111");
	strcpy(maze[8], "1111010001");
	strcpy(maze[9], "1000000101");
	strcpy(maze[10], "1111111121");
}

void Renderer()
{
	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			if (maze[i][j] == '0')
				printf("  ");
			else if (maze[i][j] == '1')
				printf("¡á");
			else if (maze[i][j] == '2')
				printf("¡Ý");
			//printf("%c", maze[i][j]);
		}
		printf("\n");
	}
}

void Keyboard(char map[WIDTH][HEIGHT], Player* ptrPlayer)
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
		case UP:
			if (map[ptrPlayer->y - 1][ptrPlayer->x / 2] != '1')
				ptrPlayer->y--;
			break;
		case DOWN:
			if (map[ptrPlayer->y + 1][ptrPlayer->x / 2] != '1')
				ptrPlayer->y++;
			break;
		case RIGHT:
			if (map[ptrPlayer->y][ptrPlayer->x / 2 + 1] != '1')
				ptrPlayer->x += 2;
			break;
		case LEFT:
			if (map[ptrPlayer->y][ptrPlayer->x / 2 - 1] != '1')
				ptrPlayer->x -= 2;
			break;
		}
	}
}

int main()
{
	Player player = { 2,0,"¡Ú" };
	CreateMaze();

	while (1)
	{

		Keyboard(maze, &player);
		Renderer();
		GotoXY(player.x, player.y);
		printf("%s", player.shape);
		system("cls");

	}




	return 0;
}

