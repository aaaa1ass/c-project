#pragma once
#include <stdio.h> // 헤더파일에 정의된 함수가 있다 stdio.h 기본 입출력 헤더파일
void main() //<--- 프로그램의 진입접, 하나만 있어야 함
{//프로그램의 시작

	//변수: 메모리 공간을 확보
	//자료형: 데이터를 저장하기 위해 정해진 데이터의 형태
	// 
	// 자료형 변수의 이름;
	// int data;

#pragma region 자료형의 종류
	/*
	// char 한 문자 1byte
	// short 정수 2byte
	// int 정수 4byte
	// float 실수 4byte
	// double 실수 8byte
	// long double 8~16
	*/
#pragma endregion

#pragma region 대입연산자 '='
	//int num = 100;
	//char c = 'A';
	//float pi = 3.14f;
#pragma endregion

#pragma region 변수 이름 규칙
	/*
	1. 예약어를 사용할 수 없음(이미 사용하고 있는 단어) ex)int int = 100;
	2. 숫자를 사용할 수 있으나 첫번째는 안됨 ex) int hp1 = 100; -> 가능 int 1hp = 100; -> 불가능
	3. 대소문자를 구분 ex) int attack = 100; int ATTACK = 200; attack != ATTACK
	4. 공백 포함 안됨
	5. 특수 기호 '$', '_' 가능
	*/
#pragma endregion

#pragma region 변수의 초기화
	// 변수의 값을 최초로 저장해주는 과정
	int exp = 0; //변수의 선언
	exp = 999;

#pragma endregion

#pragma region 상수
	//프로그램이 실행되는 동안 값을 변경할 수 없는 메모리 공간
	const float pi = 3.141592;
	//pi = 5; 값을 변경할 수 없다.
	//심볼릭 상수: 메모리 공간을 가지고 있는 상수
	//리터럴 상수: 메모리 공간을 가지지 않는 상수
	//3.141592 -> 리터럴 값
#pragma endregion

#pragma region 컴파일
	//사람의 언어를 컴퓨터가 알게 바꿈
#pragma endregion

#pragma region 산술 연산자
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int B = 1;
	int C = 2;
	int E = 3;
	const int F = 4;

	num1 = B + C;
	num2 = E - F;
	num3 = 5 * B;
	num4 = 5 / F;
	num5 = 5 + 5;
#pragma endregion



}//프로그램의 끝
