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
#pragma region 파일 입출력
	//파일 쓰기
	//fopen("파일의 이름.확장자", 파일 모드)
	// w: write
	// r: read
	
	//텍스트 파일 쓰기 모드로 열기
	//FILE* filePtr = fopen("DB.txt", "w");
	//
	//fputs("ID\n", filePtr);
	//fputs("Password\n", filePtr);
	////파일 포인터 닫기
	//fclose(filePtr);
	int screen = 1;
	//1 full screen
	//2 window
	FILE* readPtr = NULL;
	while (1) 
	{
		//SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), screen, 0);

		//파일 읽기
		readPtr = fopen("Monster.txt", "r");
		char buffer[10000] = { 0, };
		//파일 전체 읽기
		fread(buffer, 1, 10000, readPtr);
		printf("%s", buffer);
		fclose(readPtr);
		system("cls");
		if (GetAsyncKeyState(VK_SPACE))
		{
			exit(0);
		}
	}
	fclose(readPtr);
#pragma endregion

	return 0;
}			
			