#include <stdio.h>
#include <limits.h>
#include "SoundManager.h"
//스택 -> LIFO 구조 last in first out
#pragma region 재귀함수
//어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수
void Recursion(int x)
{
	if (x == 1)
	{
		//재귀 함수를 계속 호출하면
		//스택 오버플로우가 발생한다
		// return: 값 반환, 함수 반환
		return;
	}
	printf("Recursion() 함수 호출\n");
	Recursion(x - 1);
}
#pragma endregion

#pragma region 팩토리얼
int Factorial(int x)
{
	if (x == 0)
		return 1;
	return x * Factorial(x - 1);
}

#pragma endregion

#pragma region 인라인함수
//함수를 호출하는 대신 호출되는 위치마다 함수의 코드를 복사하여 전달하는 방식의 함수
inline void Function()
{
	//함수 호출 과정이 없어 처리 속도가 빠르지만, 남용하면 실행 파일의 크기가 커진다
	//오버헤드: 동떨어진 위치의 메모리에 액세스할 때 추가적인 시간,메모리,자원이 든다
	printf("Function() 호출\n");
}
#pragma endregion




void main()
{
	//재귀함수
	//Recursion(3);

	//팩토리얼
	int number = 0;
	//printf("입력: ");
	//scanf_s("%d", &number);
	//printf("!%d = %d\n", number, Factorial(number));
	int f = 1;
	for (int i = 1; i <= number; i++)
	{
		f *= i;
	}
	//printf("!%d = %d\n", number, f);
	
	//인라인 함수
	//Function();


	Sound();
}			
			