#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <malloc.h>
#include <math.h>
#include <string.h>

void Function()
{
	printf("Function() �Լ�\n");
}

int Damage(int x)
{
	return x;
}

void Sort(void (*fptr)())
{
	fptr();
}

void DataList()
{
	printf("DataList() �Լ�\n");
}

#pragma region typedef
typedef unsigned int UINT;

typedef struct Player
{
	int x;
	int y;
	//2 ����Ʈ�е�
	char c[10];
}Player;
#pragma endregion


int main()
{
#pragma region �Լ� ������
	// // �Լ��� �ּڰ��� �����ϰ� ����ų �� �ִ� ����
	// 
	// // �Լ��� �̸��� �Լ��� �ּҸ� �ǹ�
	// //printf("Function()�� �ּڰ�: %p\n", Function);
	// 
	// // �Լ� ������ ����
	// void (*fptr) ();
	// int (*ffptr) (int);
	// fptr = Function;
	// ffptr = Damage;
	// fptr();
	// printf("ffptr: %d\n", ffptr(10));
	// 
	// fptr = DataList;
	// fptr();
	// 
	// Sort(Function);
	// //�Լ� �����ʹ� �Լ��� ��ȯ���� �Ű������� ��ġ�ؾ� �Ѵ�
	// //fptr = Damage;
	// //printf("fptr: %d\n",fptr(10)); ����
#pragma endregion

#pragma region typedef
	// UINT count = 100;
	// printf("count: %d\n", count);
	// Player player;
	// player.x = 10;
	// player.y = 20;
	// 
	// // �ȵ�
	// //player.c = "Alistar";
	// 
	// //(������� ���� �迭, ������ ���� �迭)
	// strcpy(player.c,"Alistar");
	// 
	// printf("player.x: %d\n", player.x);
	// printf("player.c: %s\n", player.c);
	// printf("player�� �޸�: %u\n", sizeof(player));
#pragma endregion

	return 0;
}			
			