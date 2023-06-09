#pragma once
#include <stdio.h>
void main()
{

#pragma region 증감 연산자
	/*
	//피연산자를 증감할 때 사용하는 연산자

	//전위 증감 연산자
	// 변수의 값을 증감시킨 후에 연산을 수행
	int a = 0;
	int result_1 = 0;

	result_1 = ++a;
	printf("result_1의 값: %d\n", result_1);

	result_1 = --result_1;
	printf("result_1의 값: %d\n", result_1);

	//후위 증감 연산자
	//연산을 수행한 다음 변수의 값을 증감
	int b = 0;
	int result_2 = 0;

	result_2 = b++;
	printf("result_2의 값: %d\n", result_2);

	result_2 = b--;
	printf("result_2의 값: %d\n", result_2);
	*/
#pragma endregion

#pragma region for
	//초기식을 연산하여 조건식의 결과에 따라 특정한 횟수만큼 반복
	//for(초기식;조건식;증감식;) 조건이 거짓이 될 때까지 반복
	for (int i = 0; i < 5; i++)
	{
		//printf("게임 중\n");
	}
	//초기값을 1~5의 값으로 출력
	for (int i = 1; i < 6; i++)
	{
		//무한 루프를 피하자
		//printf("%d\n", i);
	}
	int a = 0;
	for (int i = 1; i <= 10; i++)
	{
		a = a + i;
		//복합 대입 연산 a += i; a-= i;(*=, /=)
	}
	//printf("a is %d", a);

	//이중 for문
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("안쪽 for문\n");
		}
		printf("바깥쪽 for문\n");
	}
#pragma endregion

#pragma region while
	//특정 조건이 거짓이 될 때까지 반복
	int count = 5;
	while (0)//조건
	{
		printf("게임 실행 %d\n", count);
		count--;
	}
#pragma endregion

#pragma region continue
	//해당 조건문만 실행하지 않고 반복문을 이어서 실행하는 제어문
	for (int i = 1; i <= 0; i++)
	{
		if (i == 3)
		{
			continue;
		}
		printf("%d ", i);
	}
#pragma endregion

#pragma region do-while
	//조건과 상관없이 한 번 작업을 수행한 다음 조건에 따라 명령문을 실행
	int count = 3;
	do
	{
		//printf("로그인 시도\n");
		count--;
	} while (count > 0);
#pragma endregion
}