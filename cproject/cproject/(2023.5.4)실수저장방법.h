#pragma once
#include <stdio.h>
#include <limits.h>
#include <malloc.h>
#include <math.h>

struct Player
{
	int hp;
	float attack;
	int x;
	int y;
};

struct Enemy
{
	int x;
	int y;
};

int main()
{
#pragma region 구조체 포인터
	//struct Player player;
	//struct Player* ptrPlayer = NULL;
	//ptrPlayer = &player;
	//
	//(*ptrPlayer).hp = 100;
	//(*ptrPlayer).attack = 12.5f;
	//
	//printf("%d\n", (*ptrPlayer).hp);
	//printf("%f\n", (*ptrPlayer).attack);
	//
	//ptrPlayer->hp = 250;
	//ptrPlayer->attack = 26.125f;
	//
	//printf("%d\n", (*ptrPlayer).hp);
	//printf("%f\n", (*ptrPlayer).attack);
#pragma endregion

#pragma region 두 점 사이의 거리
	//제곱근 sqrt
	//printf("루트 49: %lf\n", sqrt(49));
	////거듭제곱
	//printf("2의 3승: %lf\n", pow(2, 3));
	//struct Player player;
	//struct Enemy enemy;
	//player.x = 0;
	//player.y = 0;
	//enemy.x = 5;
	//enemy.y = 7;
	//double distance = sqrt(pow(player.x - enemy.x, 2) + pow(player.y - enemy.y,2));
	//printf("distance is %lf\n", distance);
	//if (distance < 100)
	//	printf("Safe.\n");
#pragma endregion

#pragma region 실수 저장 방법
	//고정소수점 소수점 위치 고정하고 소수점 위치 나타내기

	//float 4 byte
	//부동소수점
	//소수점의 위치를 고정하지 않고 소수점의 위치를 나타내는 방법
	//float fData = 1.3f;
	//printf("fData의 값: %.7f\n", fData);
	//
	////double 8 byte
	//double dData = 1.3;
	//printf("dData의 값: %.10lf\n", dData);
	//
	//if (fData == 1.3)
	//{
	//	printf("fData의 값과 1.3의 값이 같음\n");
	//}
	//else
	//{
	//	printf("fData의 값과 1.3의 값이 다름\n");
	//}
#pragma endregion


	return 0;
}
