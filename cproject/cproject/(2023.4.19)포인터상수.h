#pragma once
#include <stdio.h>
void main()
{
	//포인터 상수화 2가지
	//상수 지시 포인터, 포인터 상수
#pragma region 상수지시포인터
	//포인터 변수를  상수로 선언, 가리키고 있는 주소에 있는 값을 변경할 수 없도록 설정
	int data = 100;
	int data1 = 20;
	const int* ptr = &data;
	//*ptr = 300; 역참조가 상수화되었다
	//printf("ptr 값: %p\n", ptr);
	ptr = &data1;
	//printf("ptr 값: %p\n", ptr);
#pragma endregion

#pragma region 포인터상수
	//상수로 선언한 포인터이므로, 해당 변수의 값을 변경할 수 없지만, 다른 주소 값을 가리킬 수 있다
	int value1 = 100;
	int* const ptr1 = &value1;//포인터 변수를 상수화
	//printf("value1 값: %d\n", value1);
	*ptr1 = 999;//역참조 가능
	//printf("value1 값: %d\n", value1);
	//ptr1 = &value2; 포인터 변수가 상수화되었다
#pragma endregion

#pragma region sizeof()
	float health = 100;
	int* pointer;
	//printf("char 크기: %d\n", sizeof(char));
	//printf("short 크기: %d\n", sizeof(short));
	//printf("int 크기: %d\n", sizeof(int));
	//printf("long 크기: %d\n", sizeof(long));
	//printf("float 크기: %d\n", sizeof(health));
	//printf("double 크기: %d\n", sizeof(double));
	//printf("long double 크기: %d\n", sizeof(long double));
	//printf("pointer 크기: %d\n", sizeof(pointer));
	//printf("\n");
#pragma endregion

#pragma region 구구단
	//for (int i = 1; i <= 9; i++) {
	//	for (int j = 2; j <= 9; j++) {
	//		printf("%d x %d = %d   ", j, i, i * j);
	//		if (i * j < 10)
	//			printf(" ");
	//	}
	//	printf("\n");
	//}
#pragma endregion

#pragma region scanf입력함수
	//표준 입력 함수, 여러 데이터를 서식에 맞춰 입력
	//scanf <- sdl 검사를 해제 안하면 에러
	//scanf_s("변수의 서식", &변수)
	int count = 0;
	printf("입력:");
	//scanf_s("%d",&count);// 표준 입력 함수는 입력을 수행할 때까지 다음 작업으로 넘어갈 수 없다.
	//printf("count: %d\n", count);
	printf("\n");
#pragma endregion
	//입력값에 따라 별 계단 찍기★
	while (1)
	{
		scanf_s("%d", &count);

		for (int i = 1; i <= count; i++)
		{
			for (int j = 1; j <= i; j++)
				printf("★");

			printf("\n");
		}

		if (!count)
			break;
	}

}
