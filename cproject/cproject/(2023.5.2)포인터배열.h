#pragma once
#include <stdio.h>
#include <limits.h>
#include <malloc.h>

int main()
{
#pragma region 포인터배열
	const char* string[3];
	//[] [] [] 8 byte 메모리 3공간 
	string[0] = "First";
	string[1] = "Second";
	string[2] = "Third";

	for (int i = 0; i < 3; i++)
	{
		//printf("string[%d]: %s\n", i, string[i]);
	}
	int a = 10;
	int b = 20;
	int c = 30;
	int* ptr1 = &a;
	int* ptr2 = &b;
	int* ptr3 = &c;
	int* ptr_arr[3] = { ptr1, ptr2, ptr3 };
	//printf("ptr_arr[0]의 값: %p\n", ptr_arr[0]);
	//printf("ptr_arr[0]가 가리키는 값: %d\n", *ptr_arr[0]);
#pragma endregion

#pragma region unsigned
	//부호가 없는 자료형으로 부호비트가 없고 자료를 저장할 수 있는 데이터 영역이 2배 늘어난다

	char data = 128;
	unsigned char uData = 128;

	//signed 자료형은 암묵적 형변환이 진행될 때 늘어나는 메모리 값은 1(부호비트)로 채워진다
	//printf("data: %u\n", data);
	//printf("data: %d\n", data);

	//%u: unsigned int형 값을 표현하는 서식 지정자
	//둘 다 부호가 없는 표현이므로 암묵적 형변환이 진행될 때 늘어나는 메모리 값은 0으로 채워진다
	//printf("uData: %u\n", uData);
	//printf("uData: %d\n", uData);

#pragma endregion

#pragma region 공약수
	// 두 개의 정수형 변수 선언
	int x;
	int y;
	// 입력
	printf("x: ");
	scanf_s("%d", &x);
	printf("y: ");
	scanf_s("%d", &y);
	for (int i = 1; i <= x && i <= y; i++)
	{
		if (x % i == 0 && y % i == 0)
			printf("%d ", i);
	}
#pragma endregion

	// 성공적으로 종료했을 경우 0
	// 아니면 1
	return 0;
}
