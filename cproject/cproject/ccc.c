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
#define LEFTsf 77

int main()
{
#pragma region 동적 배열
	// heap을 이용하여 배열 크기를 실행 시간에 가변적으로 바꿀 수 있는 배열
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

#pragma region fflush() 함수
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

#pragma region 문자열 뒤집기
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
			
