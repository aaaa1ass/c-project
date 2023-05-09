#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <malloc.h>
#include <math.h>
#include <string.h>

void Function()
{
	printf("Function() 함수\n");
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
	printf("DataList() 함수\n");
}

#pragma region typedef
typedef unsigned int UINT;

typedef struct Player
{
	int x;
	int y;
	//2 바이트패딩
	char c[10];
}Player;
#pragma endregion


int main()
{
#pragma region 함수 포인터
	// // 함수의 주솟값을 저장하고 가리킬 수 있는 변수
	// 
	// // 함수의 이름은 함수의 주소를 의미
	// //printf("Function()의 주솟값: %p\n", Function);
	// 
	// // 함수 포인터 선언
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
	// //함수 포인터는 함수의 반환형과 매개변수가 일치해야 한다
	// //fptr = Damage;
	// //printf("fptr: %d\n",fptr(10)); 에러
#pragma endregion

#pragma region typedef
	// UINT count = 100;
	// printf("count: %d\n", count);
	// Player player;
	// player.x = 10;
	// player.y = 20;
	// 
	// // 안됨
	// //player.c = "Alistar";
	// 
	// //(복사받을 문자 배열, 복사할 문자 배열)
	// strcpy(player.c,"Alistar");
	// 
	// printf("player.x: %d\n", player.x);
	// printf("player.c: %s\n", player.c);
	// printf("player의 메모리: %u\n", sizeof(player));
#pragma endregion

	return 0;
}			
			