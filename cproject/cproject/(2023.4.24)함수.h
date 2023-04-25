#pragma once
#include <stdio.h>
#include <limits.h>

#pragma region 함수
// 특별한 작업을 수행하기 위해 독립적으로 설계된 코드의 집합
// 자료형 이름(){}

//void: 값을 반환하지 않는
void Attack()
{
	for (int i = 0; i < 5; i++)
		printf("공격\n");
}

//반환형: 자료형에 맞는 값 반환하는
int Function()
{
	return 100;
}
// 자료형과 반환 형태가 일치해야 한다
int ProcessInt()
{
	return 65.4;
}
//같은 이름의 함수 중복 선언 불가
#pragma endregion

#pragma region 매개변수
//전달하기 위한 변수
void Calculator(int x)
{
	printf("매개 변수 x의 값: %d\n", x);
}
int Add(int x, int y)
{
	return x + y;
}
#pragma endregion

//값에 의한 전달 함수
void swap(int a, int b)
{
	printf("a, b = %d, %d\n", a, b);
	int temp;
	temp = b;
	b = a;
	a = temp;
	printf("a, b = %d, %d\n", a, b);
}

//참조에 의한 전달 함수
void swap_reference(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


void main()
{
	//함수 호출
	//Attack();

	//printf("Function(): %d\n",Function());
	//printf("ProcessInt(): %d\n", ProcessInt());

	//Calculator(123/*<-인수: 호출될 때 실제로 전달되는 값*/);
	//인수는 왼쪽부터 차례대로 전달
	//printf("Add() 함수의 값: %d\n", Add(10, 20));

#pragma region 값에의한전달&참조에의한전달
	int a = 100;
	int b = 200;

	// a and b swap

	//call by value
	swap(a, b);
	printf("a, b = %d, %d\n", a, b);

	//call by reference
	//함수 호출 시 주소를 전달하면 변수의 주소가 참조돼 함수 내에서 일어난 연산이 영향을 받는다.
	swap_reference(&a, &b);
	printf("a, b = %d, %d\n", a, b);
#pragma endregion
}
