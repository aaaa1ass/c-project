#include <stdio.h>
void main()
{
#pragma region switch
	int count = 3;

	//switch: 어떤 결과에 따라 그 결과부터 실행되는 명령문
	// 조건에 해당하는 값에 따라 조건의 위치로 이동
	switch (count)// <- 값
	{
		//break: 특정 지점에서 분기를 탈출하는 제어문
	case 0: printf("count is 0.\n");
		break;
	case 1: printf("count is 1.\n");
		break;
	case 2: printf("count is 2.\n");
		break;
	//default:printf("예외\n");
				 
	}			 
#pragma endregion

#pragma region 증감 연산자
	/*
	//피연산자를 증감할 때 사용하는 연산자
	
	//전위 증감 연산자
	// 변수의 값을 증감시킨 후에 연산을 수행
	int a = 0;
	int result_1 = 0;

	result_1 = ++a;
	printf("result_1의 값: %d\n", result_1);
	
	result_1 = --result_1;
	printf("result_1의 값: %d\n", result_1);

	//후위 증감 연산자
	//연산을 수행한 다음 변수의 값을 증감
	int b = 0;
	int result_2 = 0;

	result_2 = b++;
	printf("result_2의 값: %d\n", result_2);
	
	result_2 = b--;
	printf("result_2의 값: %d\n", result_2);
	*/
#pragma endregion
	
#pragma region for
	//초기식을 연산하여 조건식의 결과에 따라 특정한 횟수만큼 반복
	//for(초기식;조건식;증감식;) 조건이 거짓이 될 때까지 반복
	for (int i = 0; i < 5; i++)
	{
		//printf("게임 중\n");
	}
	//초기값을 1~5의 값으로 출력
	for (int i = 1; i < 6; i++)
	{
		//무한 루프를 피하자
		//printf("%d\n", i);
	}
	int a = 0;
	for (int i = 1; i <= 10; i++)
	{
		a = a + i;
		//복합 대입 연산 a += i; a-= i;(*=, /=)
	}
	//printf("a is %d", a);

	//이중 for문
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("안쪽 for문\n");
		}
		printf("바깥쪽 for문\n");
	}
#pragma endregion


}
