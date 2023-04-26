#pragma once
#include <stdio.h>
void main()
{


#pragma region 형 변환
	//다른 자료형의 변수끼리 연산이 이루어질 때 변환

	//암묵적 형 변환
	//다른 자료형끼리 연산할 때 크기가 큰 자료형으로 변환
	//char < short < int < float < double
	int integer = 10;
	float decimal = 2.5f;
	// 12.5 <- 10.0(실수) + 2.5(실수)
	float result = integer + decimal;
	printf("result: %f\n", result);

	//명시적 형 변환
	//사용자가 직접 자료형을 변환
	// flaot 메모리 2.0 = 5 / 2
	// 정수끼리의 연산은 정수만 나온다
	// 
	int a = 5;
	int b = 2;
	float result1 = (float)a / b;
	printf("result1: %f\n", result1);
#pragma endregion

#pragma region 주소 연산자
	//변수의 주소값을 반환
	//시작 주소값
	int data = 69;
	//%p: 데이터의 주소를 출력
	//64비트 -> 포인터 8바이트
	//32비트 -> 포인터 4바이트 


	//변수의 주소는 실행할 때마다 바뀐다.
	//printf("data 주소: %p\n", &data);
#pragma endregion

#pragma region 포인터
	//메모리의 주솟값을 저장할 수 있는 변수
	int box = 100;
	int box1 = 999;
	int* ptr = &box;
	//포인터 변수도 메모리 공간이 있고 변수의 주소를 저장하면 해당 변수의 시작 주소를 가리킨다
	printf("ptr 값: %p\n", ptr);
	printf("box 주소값 %p\n", &box);
	printf("ptr 주소값 %p\n", &ptr);
	printf("box 값: %d\n", box);
	*ptr = 600;
	printf("box 값: %d\n", box);
	ptr = &box1;
	*ptr = -999;
	printf("box 값: %d\n", box);
	printf("box1 값: %d\n", box1);
	//변수의 자료형과 포인터 변수의 자료형이 일치해야 한다
	double health = 10.5;
	int* ptr1 = &health;
	printf("ptr1 값: %p\n", ptr1);
	*ptr1 = 51.5;
	printf("ptr1가 가리키는 값: %lf\n", *ptr1);

#pragma endregion		

#pragma region 범용 포인터
	//자료형이 정해지지 않은 상태로 모든 자료형을 저장할 수 있는 포인터
	//메모리 주소에 접근해서 값을 변경할 수 없다
	//형 변환을 해서 접근할 수 있다
	char charData = 'A';
	int intData = 10;
	float floatData = 19.4f;
	void* Ptr = NULL;
	Ptr = &charData;
	*(char*)Ptr = 'B';
	printf("Ptr이 가리키는 값: %c\n", *(char*)Ptr);
	Ptr = &intData;
	*(int*)Ptr = 99;
	printf("Ptr이 가리키는 값: %d\n", *(int*)Ptr);
#pragma endregion

}