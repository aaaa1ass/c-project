#pragma once
#include <stdio.h>
void main()
{

#pragma region 서식지정자
	/*
	char character = 'B';
	int data = 100;
	float decimal = 99.966666333f;
	//printf(data); -> X
	//서식 지정자: 출력하기 한 자료형의 정보를 명시적으로 지정
	// %c 문자
	// %d 정수
	// %f 실수 (float)
	//
	//서식과 변수 일치시키자
	printf("value of character: %c\n", character);
	printf("value of data: %d\n", data);
	//float -> 소수점 이하 6자리까지 표기
	printf("value of decimal: %f\n", decimal);
	printf("data: %d, decimal: %f", data, decimal);
	*/
#pragma endregion

#pragma region 비트
	//데이터를 나타내는 최소 단위 0 or 1
	//조합으로 논리 계산을 수행하는 단위
	//8 Bit -> 1 Byte
	//
	// 비트 연산자: 비트 단위로 논리 연산 수행
	// AND
	// 두 개의 피연산자가 모두 1이면 1을 반환
	char num1 = 10; //1010
	char num2 = 15; //1111
	char num3 = 129;
	printf("num1 num2 AND 연산: %d\n", num1 & num2);
	// OR
	// 두 개의 피연산자 중 하나라도 1이 있으면 1을 반환
	printf("num1 num2 OR 연산: %d\n", num1 | num2);
	// XOR
	// 두 개의 피연산자가 같으면 0을 반환, 다르면 1을 반환
	printf("num1 num2 XOR 연산: %d\n", num1 ^ num2);
	// NOT
	// 비트를 반전
	printf("num1 NOT 연산: %d\n", ~num1);
	// 첫 번째 비트: 부호 비트 
	// 0->양수 1->음수
	printf("num3의 값: %d", num3);
#pragma endregion


}