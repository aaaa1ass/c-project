#pragma once
#include <stdio.h>
#include <limits.h>
#include <malloc.h>

#pragma region 구조체
//여러 개의 변수를 하나의 집합으로 구조화한 다음 하나의 객체를 생성하는 것
struct Player
{
	int attack;
	float health;
	char grade;
	// <- 메모리가 잡히지 않은 설계도 상태
	//구조체를 선언하기 전에 구조체는 메모리 공간이 생성되지 않으므로 구조체 내부 데이터를 초기화할 수 없다
};

struct Model
{
	int weight;
	short mesh;
	double size;
	//구조체의 크기는 멤버 변수의 순서에 따라 다르게 설정될 수 있으며 구조체 크기를 결정하는 형태는 기본 자료형으로만 구성된다
};
#pragma endregion



void main()
{
#pragma region 구조체
	//구조체 선언
	struct Player player;

	//player.attack = 10;
	//player.grade = 'A';
	//player.health = 92.15f;
	//
	//printf("player.attack: %d\n", player.attack);
	//printf("player.grade: %c\n", player.grade);
	//printf("player.health: %f\n", player.health);

	//구조체 초기화
	//초기화 리스트로 초기화할 때 구조체에서 선언된 변수 순서를 맞춰야 한다
	struct Player newPlayer = { 15, 99.5f, 'B' };
	//printf("newPlayer.attack: %d\n", newPlayer.attack);
	//printf("newPlayer.grade: %c\n", newPlayer.grade);
	//printf("newPlayer.health: %f\n", newPlayer.health);
#pragma endregion

#pragma region 바이트패딩
	//멤버 변수를 메모리에서 cpu로 읽을 때 한 번에 읽을 수 있도록 컴파일러가 레지스터의 블록에 맞춰 바이트를 패딩해주는 작업
	struct Player otherPlayer;
	//구조체의 크기는 구조체를 구성하는 멤버 중 가장 큰 크기의 메모리의 배수가 된다
	//printf("Player의 크기: %d\n", sizeof(otherPlayer));

	struct Model model;
	//printf("model의 크기: %d\n", sizeof(model));
#pragma endregion

#pragma region 소수
	//int number = 0;
	//int count = 0;
	//printf("입력: ");
	//scanf_s("%d", &number);
	//printf("%d 이하의 소수: ",number);
	//for (int i = 2; i <= number; i++)
	//{
	//	count = 0;
	//	for (int j = 2; j < i; j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			count++;
	//			break;
	//		}
	//	}
	//	if (!count)
	//		printf("%d ", i);
	//}
#pragma endregion


}
