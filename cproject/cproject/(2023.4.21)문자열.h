#pragma once
#include <stdio.h> // #include 파일 처리 전처리문
//시스템 파일이나 사용자 정의 파일을 프로그램 소스에 삽입하여 사용하기 위한 선언문
#include <limits.h>

#pragma region 매크로
	//특정 데이터가 문자열로 정의되고 처리되는 과정
#define SIZE 50 // SIZE == 50
	//선행 처리되기 때문에 ; 필요 없음
	//메모리 공간을 가지고 있지 않다

#pragma endregion

void main()
{
	//printf("매크로 SIZE의 값: %d\n", SIZE);

	//전처리기
	//컴파일 전에 프로그램 사전 처리 과정
#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자 변수의 집합

	//%s 문자열 출력 서식
	//문자열은 마지막에 NULL이 포함된다
	//NULL은 문자열의 끝을 알려준다


	// 2가지
	//포인터 이용
	const char* name = "mob";//name -> 첫 번째 글자를 가리킨다
	//"mob" -> 메모리 '데이터 영역 read only'
	printf("name의 값: %p\n", name);
	printf("name이 가리키는 값: %s\n", name);
	//문자열 상수는 데이터 영역의 읽기 전용 공간에 저장되기 때문에 문자열의 값을 변경할 수 없다.
	//*name = 'g'; name[0] = 'a';
	name = "ritz";//"ritz"의 첫 번째 글자를 가리킨다
	printf("name의 값: %p\n", name);
	printf("name이 가리키는 값: %s\n", name);

	//배열 이용
	char string[] = "Game";
	//ro 데이터 영역의 글자를 메모리 '스택' 영역에 가져온다
	printf("string의 값: %s\n", string);
	string[0] = 'S';
	printf("string의 값: %s\n", string);
	char string1[] = { "a p p\0le" };// 공백도 포함
	// NULL 까지 문자열만 출력한다
	printf("string1의 값: %s\n", string1);
	// char 배열은 포인터 상수다
	//string = string1; -> X
	//string = "special week"; -> X
#pragma endregion

#pragma region 최댓값과 최솟값
	int max = INT_MIN;
	int min = INT_MAX;
	int numbers[10] = { 0, 5, 20, 35, 50, 65, 80, 100, 135, 200 };
	for (int i = 0; i < 10; i++)
	{
		if (max < numbers[i])
			max = numbers[i];
		if (min > numbers[i])
			min = numbers[i];
	}
	printf("최댓값: %d\n", max);
	printf("최솟값: %d\n", min);
#pragma endregion

}
