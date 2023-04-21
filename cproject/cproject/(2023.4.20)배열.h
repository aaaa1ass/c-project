#pragma once
#include <stdio.h>
void main()
{
#pragma region 배열
	//같은 자료형의 변수로 이뤄진 유한 집합
	int array[5];

	//첫 번째 원소(index)는 0부터 시작
	array[0] = 100;
	array[1] = 200;
	array[2] = 300;
	array[3] = 400;
	array[4] = 500;
	//배열 크기는 컴파일 시점부터 고정된 메모리를 가짐
	//array[5] X

	for (int i = 0; i < 5; i++)
		printf("array[%d]: %d\n", i, array[i]);

	//	[0]		[1]		[2]
	float item_list[3] = { 15.5f, 33.3f, 67.62f };
	//배열 메모리 공간은 실행동안 변경 불가
	for (int i = 0; i < 3; i++)
		printf("item_list[%d]: %f\n", i, item_list[i]);

	//배열 크기 생략 가능
	//초기화 목록에서 설정한 요소에 따라 크기 결정
	char string[] = { 'a','b','c' };

	//배열의 이름은 배열의 시작 주소를 가리킨다
	printf("string 배열 주소:  %p\n", string);
	printf("string[0] 주소:  %p\n", &string[0]);

	//배열과 포인터
	int data = 100;
	int* ptr = &data;
	printf("ptr 값: %p\n", ptr);
	printf("ptr + 1: %p\n", ptr + 1);
#pragma endregion

#pragma region 시프트 연산자
	//비트 값을 주이진 숫자만큼 부호 방향으로 이동
	// >> 비트값을 주어진 숫자만큼 오른쪽으로 이동
	// << 왼쪽으로

	char value = 10; // 0000 1010
	printf("value 값: %d\n", value);
	printf("value 오른쪽 두 번 비트 연산: %d\n", value >> 2);
	// 0000 1010 -> 0000 0101 -> 0000 0010
	printf("value 왼쪽 세 번 비트 연산: %d\n", value << 3);
	// 0000 1010 -> 0001 0100 -> 0010 1000 -> 0101 0000

#pragma endregion

//  %  나머지(모듈러 연산)

#pragma region 홀수짝수
	/*
	int number = 0;
	printf("입력:");
	scanf_s("%d", &number);
	if (number % 2)
		printf("홀수\n");
	else
		printf("짝수\n");
	*/
#pragma endregion

#pragma region 네이밍 컨벤션
	// camel case
	// 첫 단어를 제외하고 첫 글자를 대문자로 표기
	// ex) playerHealth
	// 
	// pascal case
	// 단어의 첫 글자를 대문자로 표기
	// ex) SelectTarget
	// 
	// snake case
	// 전부 소문자 단어 사이에 _ 표기
	// ex) api_url
	//
#pragma endregion



}
