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
#pragma region ���� �迭
	// heap�� �̿��Ͽ� �迭 ũ�⸦ ���� �ð��� ���������� �ٲ� �� �ִ� �迭
	//
	//int size = 10;
	//scanf("%d", &size);
	//int * arrayPtr = (int*)malloc(sizeof(int)* size);
	//for (int i = 0; i < size; i++)
	//{
	//	arrayPtr[i] = size * i;
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	printf("arrayPtr[%d]: %d\n", i, arrayPtr[i]);
	//}
	//free(arrayPtr);
#pragma endregion

#pragma region fflush() �Լ�
	//char a, b, c;
	//scanf("%c" ,&a);
	//fflush(stdin);
	//
	//scanf("%c" ,&b);
	//fflush(stdin);
	//
	//scanf("%c" ,&c);
	//fflush(stdin);
	//
	//printf("a: %c\n", a);
	//printf("b: %c\n", b);
	//printf("c: %c\n", c);
#pragma endregion

#pragma region ���ڿ� ������
	//char string[100];
	//scanf("%[^\n]s", string);
	////char c;
	////int count = 0;
	////while (1)
	////{
	////	c = string[count];
	////	if (c == NULL)
	////		break;
	////	count++;
	////}
	//for(int i = strlen(string) - 1; i >= 0; i--)
	//{
	//	printf("%c", string[i]);
	//}
#pragma endregion

	return 0;
}

