#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <malloc.h>
#include <math.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <time.h>


int main()
{
#pragma region rand()
	//0 ~ 32767 사이의 난수 값을 생성

	//time(): 1970년 1월 1일 0시 (UTC)부터 현재까지 흐른 시간 반환
	// 단위: 초

	//srand(time(NULL));
	//
	//int value;
	//
	//for (int i = 0;i < 5;i++)
	//{
	//	value = rand() ;
	//	printf("value: %d\n", value);
	//}


#pragma endregion

#pragma region up_down
	//int a = 0;
	//srand(time(NULL));
	//a = rand() % 50 + 1;
	//int life = 5;
	//int q = 0;
	//while (life)
	//{
	//	printf("현재 목숨: %d\n입력: ",life);
	//	scanf("%d", &q);
	//	
	//	if (a > q)
	//	{
	//		printf("UP\n");
	//		life--;
	//	}
	//	else if (a < q)
	//	{
	//		printf("DOWN\n");
	//		life--;
	//	}
	//	else
	//		break;
	//
	
	//}
	//
	//if (life)
	//{
	//	printf("You win\n");
	//}
	//else
	//{
	//	printf("You lose\n");
	//}

#pragma endregion

#pragma region 정수의 승격
	// char 자료형과 short 자료형 연산이 이루어질 때 cpu가 처리하기에 가장 적합한 크기의 정수 자료형 int로 자동 형변환되는 과정
	char data1 = 5;
	short data2 = 10;
	printf("data1, data2를 연산한 크기: %d\n", sizeof(data1 + data2));// 4 byte
#pragma endregion




	return 0;
}			
			