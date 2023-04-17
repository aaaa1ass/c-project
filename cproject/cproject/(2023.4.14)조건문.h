#pragma once
#include <stdio.h>
void main()
{
#pragma region 오버플로우
	// 특정한 자료형이 표현할 수 있는 최댓값의 범위를 넘어서 연산을 수행
	// char: 1byte (-128 ~ +127)
	char data = 128;
	printf("data: %d\n", data);
#pragma endregion

#pragma region 언더플로우
	//특정한 자료형이 표현할 수 있는 최솟값의 범위를 너어서 연산을 수행
	char value = -129;
	printf("value: %d\n", value);
#pragma endregion

#pragma region 관계연산자
	// 두 개의 피연산자의 값을 비교하여 그 결과를 0 or 1로 나타내는 연산자

	// A < B: B가 A보다 크다
	// A > B
	// A <= B: B가 A보다 크거나 같다
	// A >= B
	// A == B: A와 B는 같다
	// A != B: A와 B는 같지 않다
	// 0 -> 거짓
	// 1 -> 참
	//
	int A = 10;
	int B = 20;
	int C = 30;
	printf("A < B: %d\n", A < B);
	printf("A > B: %d\n", A > B);
	printf("A <= B: %d\n", A <= B);
	printf("A >= B: %d\n", A >= B);
	printf("A == B: %d\n", A == B);
	printf("A != B: %d\n", A != B);
#pragma endregion

#pragma region if, else if, else
	//if: 어떤 특정한 조건을 비교하여 조건이 맞다면 실행하는 명령문

	//만약(조건)
	if (15 == 15)
	{
		//조건이 참이면 { } 실행
		printf("15는 15와 같다.\n");
	}

	//else if: if문의 조건이 맞지 않을 때 else if문의 조건이 맞다면 실행하는 명령문
	if (5 < 1)
	{
		printf("if의 조건\n");
	}
	else if (5 > 1)
	{
		printf("else if의 조건\n");
	}
	else if (5 <= 1)
	{
		//else if는 여러 개 선언 가능
		;
	}

	//else: if와 else if문의 조건이 다 맞지 않을 때 실행하는 명령문
	if ('A' == 'B')
	{
		printf("if\n");
	}
	else if ('C' == 'D')
	{
		printf("else if\n");
	}
	else
	{
		printf("else\n");
	}
#pragma endregion

#pragma region 논리 연산자
	// && AND
	if ('A' == 'A' && 'A' <= 'A')
	{
		printf("AND의 조건이 성립\n");
	}
	// || OR
	if ('A' == 'A' || 'A' == 'B')
	{
		printf("OR의 조건이 성립\n");
	}
	// ! NOT
	if ('A')
	{
		printf("NOT의 조건이 성립\n");
	}
#pragma endregion

#pragma region 사분면
	int x = 0;
	int y = 0;
	int z = 0;

	if (x == 0 && y == 0)
	{
		printf("원점\n");
	}
	else if (x && y == 0)
	{
		printf("x절편\n");
	}
	else if (x == 0 && y)
	{
		printf("y절편\n");
	}
	else
	{
		if (x > 0 && y > 0)
		{
			z = 1;
		}
		else if (x < 0 && y > 0)
		{
			z = 2;
		}
		else if (x < 0 && y < 0)
		{
			z = 3;
		}
		else if (x > 0 && y < 0)
		{
			z = 4;
		}
		else
		{
			z = 0;
		}
		printf("제 %d 사분면\n", z);
	}

#pragma endregion

}