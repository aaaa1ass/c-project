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
#pragma region ���� �����
	//���� ����
	//fopen("������ �̸�.Ȯ����", ���� ���)
	// w: write
	// r: read
	
	//�ؽ�Ʈ ���� ���� ���� ����
	//FILE* filePtr = fopen("DB.txt", "w");
	//
	//fputs("ID\n", filePtr);
	//fputs("Password\n", filePtr);
	////���� ������ �ݱ�
	//fclose(filePtr);
	int screen = 1;
	//1 full screen
	//2 window
	FILE* readPtr = NULL;
	while (1) 
	{
		//SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), screen, 0);

		//���� �б�
		readPtr = fopen("Monster.txt", "r");
		char buffer[10000] = { 0, };
		//���� ��ü �б�
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
			