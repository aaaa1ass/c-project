#pragma once
#include <stdio.h>
#include <limits.h>

#pragma region 전역변수
//함수 외부에서 선언된 변수로 프로그램 어디서든 접근 가능하며 프로그램이 종료되어야만 메모리에서 삭제된다
int globalValue = 5;
#pragma endregion

#pragma region 정적변수
//지역 변수와 전역 변수의 특징을 가지고 한 번만 초기화가 이루어진다
static int attack;//초기화가 이루어지지 않은 전역,정적 변수는 프로그램 크기에 포함되지 않는다.
void Calculator()
{
	static int value = 1;
	value += 1;
	printf("정적 변수 value: %d\n", value);

}
#pragma endregion

void Function()
{

	int count = 0;
	globalValue += 1;
	count += 1;
	//printf("count: %d\n", count);
	//printf("globalValue: %d\n", globalValue);
}

void function(int x)
{

	printf("%d", x);
	for (int i = 2; i <= x; i++)
	{
		return function(x / i);
	}
}

void main()
{
#pragma region 지역변수
	//'블록' 내에서 선언된 변수로 블록 내에서만 유효하고 블록 종료 시 메모리에서 삭제된다
	// A
	int data = 100;// main 함수 안의 data
	{
		//B
		int data = 20;// 블록 내의 data
		//printf("data in B: %d\n", data);
	}// 블록 내의 data 메모리 해제
	//printf("data in A: %d\n", data);

#pragma endregion
	//Function();
	//Function();
	//Calculator();
	//Calculator();

	//printf("정적 변수 attack: %d\n", attack);

	//메모리 
	// 
	// 코드 함수의 주소, 리터럴
	// 데이터 전역 변수, 정적 변수
	// BSS 전역 변수, 정적 변수
	// 힙 직접 메모리 해제
	// 스택 지역 변수 매개 변수
	//

#pragma region 약수
	int number = 0;
	//printf("입력: ");
	//scanf_s("%d", &number);
	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			printf("%d\n", i);
		}
	}
#pragma endregion

#pragma region ShortCircuit
	// 논리 연산에서 두 피연산자 중 어느 한 쪽만 '참'이면 우측의 피연산자의 값을 평가하지 않고 바로 결과를 얻는 행위
	// && || 논리 연산자
	// & | 비트 연산자
	int x = 0;
	int y = 1;
	if (x == -1 && ++y == 2) {}
	printf("x: %d, y: %d\n", x, y);
#pragma endregion

}
