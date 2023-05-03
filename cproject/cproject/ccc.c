#include <stdio.h>
#include <limits.h>
#include <malloc.h>

//enum 선언
enum Color
{//열거형은 초깃값을 설정할 수 있으며, 그 다음 상수값은 1씩 증가한다
	BLACK = -10,
	RED = 0,
	BLUE
};

enum State
{
	IDLE,
	ATTACK,
	DIE
};

int main()
{
#pragma region _2차원배열
	//배열의 요소로 또다른 배열을 가지는 배열

	//배열은 행렬로 구분된다
	//int array2D[4][3] =
	//{
	//	{10,20,30},
	//	{40,50,60},
	//	{70,80,90},
	//	{100,110,120}
	//};
	//printf("array2D의 주소: %p\n", array2D);
	//printf("array2D[0][0]의 주소: %p\n", &array2D[0][0]);

	//int* ptr = NULL;
	
	//배열 포인터
	//특정 사이즈의 배열만 가리킬 수 있는 하나의 포인터
	//int(* arrayPtr)[3];// 4byte x 3 총 12byte
	//
	//ptr = array2D;
	//arrayPtr = array2D;
	//
	//ptr = ptr + 3;
	//arrayPtr = arrayPtr + 1;
	//
	//printf("ptr이 가리키는 값: %d\n", *ptr);
	//printf("arrayPtr이 가리키는 값: %d\n", (*arrayPtr)[0]);
#pragma endregion

#pragma region 열거형enum
	//요소, 멤버로 불리는 값의 집합을 이루는 자료형
	//enum Color color;
	//
	//color = BLACK;
	//
	//printf("color의 값: %d\n", color);
	//
	//color = RED;
	//
	//printf("color의 값: %d\n", color);

	//enum State state;
	//int select = 0;
	//printf("플레이어의 상태를 설정: ");
	//scanf_s("%d",&select);
	//
	//
	//state = select;
	//switch (state)
	//{
	//case IDLE:printf("대기 상태");
	//	break;
	//case ATTACK:printf("공격 상태");
	//	break;
	//case DIE:printf("죽음 상태");
	//	break;
	//}
#pragma endregion

	int A, B;
	scanf_s("%d %d", &A, &B);
	printf("%d", A + B);
	return 0;
}			
			