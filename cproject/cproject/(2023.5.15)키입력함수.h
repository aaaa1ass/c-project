#pragma once
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

#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75

int main()
{
#pragma region _kbhit() �Լ�
	//������
		//char key = 0;
		//while (1)
		//{
		//	if (_kbhit())//Ű���� �Է��� Ȯ���ϴ� �Լ�
		//	{
		//		key = _getch(); //����Ű �Է� �� 224 00�� ������ �ǹǷ� �տ� �ִ� �� 224�� ����
		//
		//		if (key == -32)
		//			key = _getch();
		//
		//		//�� ��ĵ �ڵ� 72
		//		if (key == UP)
		//			printf("��\n");
		//		//�� ��ĵ �ڵ� 80
		//		else if (key == DOWN)
		//			printf("��\n");
		//		//�� 77
		//		else if (key == RIGHT)
		//			printf("��\n");
		//		//�� 75
		//		else if (key == LEFT)
		//			printf("��\n");
		//		else
		//			printf("...\n");
		//		
		//
		//	}
		//	printf("�ٸ� �۾���\n");
		//	
		//}
#pragma endregion

#pragma region GetAsyncKeyState()
	//while (1)
	//{
	//	if (GetAsyncKeyState(VK_UP))
	//	{
	//		Sleep(100);//1000 -> 1�� ���
	//		printf("��\n");
	//	}
	//	if (GetAsyncKeyState(VK_LEFT))
	//	{
	//		Sleep(100);
	//		printf("��\n");
	//	}
	//	if (GetAsyncKeyState(VK_DOWN))
	//	{
	//		Sleep(100);
	//		printf("��\n");
	//	}
	//	if (GetAsyncKeyState(VK_RIGHT))
	//	{
	//		Sleep(100);
	//		printf("��\n");
	//	}
	//}
#pragma endregion

	return 0;
}
