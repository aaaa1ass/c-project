#include <stdio.h>
#include <limits.h>
#include <malloc.h>

void main()
{
#pragma region 동적할당
	//프로그램을 실행 중에 필요한 만큼 메모리를 할당하는 작업
	
	// 실행 시간에 메모리의 크기를 변경시킬 수 있으며 동적으로 메모리를 할당할 때 바이트 단위다
	//int* ptr = (int *)malloc(sizeof(int));

	// 메모리 동적 할당 시 주소를 범용 포인터로 반환하기에, 자료형 반환 후 다음 메모리에 할당해야 한다
	//*ptr = 666;
	//printf("동적 할당한 메모리 안의 값: %d\n", *ptr);

	//메모리 해제
	//free(ptr);
	
	//해제된 메모리를 해제할 수 없다
	//free(ptr);
#pragma endregion

#pragma region ASCII코드
	//영문 알파벳을 사용하는 대표적인 문자 인코딩

	//char alphabet = 65;

	//printf("ASCII 코드 정수 값: %d\n", alphabet);
	//printf("ASCII 코드 문자 값: %c\n", alphabet);

	// 알파벳 출력
	for (char i = 'a'; i <= 'z'; i++)
	{
		//printf("%c\n", i);
	}
#pragma endregion

#pragma region 허상포인터댕글링포인터
	//이미 해제된 메모리 영역을 가리키는 포인터
	//int* intPtr = (int*)malloc(sizeof(int));
	//*intPtr = 666;
	////printf("%d\n", *intPtr);
	//free(intPtr);
	//intPtr = NULL;

	//*intPtr = 2;
	// 
	//printf("%d\n", *intPtr);
#pragma endregion

#pragma region 이중포인터
	int a = 100; 
	int* aPtr;
	int** daPtr;
	aPtr = &a;
	daPtr = &aPtr;
	printf("**dptr의 값: %d\n", **daPtr);
	int b = 200;
	int* bPtr = &b;
	int** dbPtr = &bPtr;

	int temp = **daPtr;
	**daPtr = **dbPtr;
	**dbPtr = temp;

	printf("a: %d, b: %d\n", a, b);
#pragma endregion

}			
			