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
#pragma region _kbhit() 함수
	//↑↓출력
		//char key = 0;
		//while (1)
		//{
		//	if (_kbhit())//키보드 입력을 확인하는 함수
		//	{
		//		key = _getch(); //방향키 입력 시 224 00이 들어오게 되므로 앞에 있는 값 224를 삭제
		//
		//		if (key == -32)
		//			key = _getch();
		//
		//		//↑ 스캔 코드 72
		//		if (key == UP)
		//			printf("↑\n");
		//		//↓ 스캔 코드 80
		//		else if (key == DOWN)
		//			printf("↓\n");
		//		//→ 77
		//		else if (key == RIGHT)
		//			printf("→\n");
		//		//← 75
		//		else if (key == LEFT)
		//			printf("←\n");
		//		else
		//			printf("...\n");
		//		
		//
		//	}
		//	printf("다른 작업중\n");
		//	
		//}
#pragma endregion

#pragma region GetAsyncKeyState()
	//while (1)
	//{
	//	if (GetAsyncKeyState(VK_UP))
	//	{
	//		Sleep(100);//1000 -> 1초 대기
	//		printf("↑\n");
	//	}
	//	if (GetAsyncKeyState(VK_LEFT))
	//	{
	//		Sleep(100);
	//		printf("←\n");
	//	}
	//	if (GetAsyncKeyState(VK_DOWN))
	//	{
	//		Sleep(100);
	//		printf("↓\n");
	//	}
	//	if (GetAsyncKeyState(VK_RIGHT))
	//	{
	//		Sleep(100);
	//		printf("→\n");
	//	}
	//}
#pragma endregion

	return 0;
}
