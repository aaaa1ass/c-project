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

//��ǥ �̵� �Լ�
void GotoXY(int x, int y)
{
	COORD position = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75

int main()
{
#pragma region ��ǥ �̵� �Լ�
	//char key = 0;
	//int x = 0;
	//int y = 0;
	//while (1)
	//{
	//	GotoXY(x, y);
	//	printf("��");
	//
	//	if (_kbhit())
	//	{
	//		key = _getch(); 
	//	 
	//		if (key == -32)
	//			key = _getch();
	//	 
	//		if (key == UP && y>0)
	//			y--;
	//		else if (key == DOWN)
	//			y++;
	//		else if (key == RIGHT)
	//			x+=2;
	//		else if (key == LEFT && x > 0)
	//			x-=2;						 
	//	}
	//	system("cls");
	//}
#pragma endregion


#pragma region ���ڿ� ���� �Լ�(strlen)
	//���ڿ��� ũ�� ��ȯ
	
	//���� �������� NULL���ڸ� �������� �ʰ� ũ�⸦ ���
	//char* string = "Visual";
	//int size = strlen(string);
	//printf("size: %d\n", size);
#pragma endregion

#pragma region ȸ��
	//int flag = 1;
	//char* string = "";
	//for (int i = 0; i < strlen(string)/2; i++)
	//{
	//	
	//	if (string[i] != string[strlen(string) - i - 1])
	//	{
	//		flag = 0;
	//		printf("%c != %c\n", string[i], string[strlen(string) - i - 1]);
	//		break;
	//	}
	//	else
	//	{
	//		printf("%c == %c\n", string[i], string[strlen(string) - i - 1]);
	//	}
	//}
	//
	//if (flag)
	//{
	//	printf("ȸ�� o\n");
	//}
	//else
	//{
	//	printf("ȸ�� x\n");
	//}

#pragma endregion

	return 0;
}			
			