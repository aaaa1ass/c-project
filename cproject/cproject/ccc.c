#include <stdio.h>
#include <limits.h>
#include <malloc.h>

void main()
{
#pragma region �����Ҵ�
	//���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ��ϴ� �۾�
	
	// ���� �ð��� �޸��� ũ�⸦ �����ų �� ������ �������� �޸𸮸� �Ҵ��� �� ����Ʈ ������
	//int* ptr = (int *)malloc(sizeof(int));

	// �޸� ���� �Ҵ� �� �ּҸ� ���� �����ͷ� ��ȯ�ϱ⿡, �ڷ��� ��ȯ �� ���� �޸𸮿� �Ҵ��ؾ� �Ѵ�
	//*ptr = 666;
	//printf("���� �Ҵ��� �޸� ���� ��: %d\n", *ptr);

	//�޸� ����
	//free(ptr);
	
	//������ �޸𸮸� ������ �� ����
	//free(ptr);
#pragma endregion

#pragma region ASCII�ڵ�
	//���� ���ĺ��� ����ϴ� ��ǥ���� ���� ���ڵ�

	//char alphabet = 65;

	//printf("ASCII �ڵ� ���� ��: %d\n", alphabet);
	//printf("ASCII �ڵ� ���� ��: %c\n", alphabet);

	// ���ĺ� ���
	for (char i = 'a'; i <= 'z'; i++)
	{
		//printf("%c\n", i);
	}
#pragma endregion

#pragma region ��������ʹ�۸�������
	//�̹� ������ �޸� ������ ����Ű�� ������
	//int* intPtr = (int*)malloc(sizeof(int));
	//*intPtr = 666;
	////printf("%d\n", *intPtr);
	//free(intPtr);
	//intPtr = NULL;

	//*intPtr = 2;
	// 
	//printf("%d\n", *intPtr);
#pragma endregion

#pragma region ����������
	int a = 100; 
	int* aPtr;
	int** daPtr;
	aPtr = &a;
	daPtr = &aPtr;
	printf("**dptr�� ��: %d\n", **daPtr);
	int b = 200;
	int* bPtr = &b;
	int** dbPtr = &bPtr;

	int temp = **daPtr;
	**daPtr = **dbPtr;
	**dbPtr = temp;

	printf("a: %d, b: %d\n", a, b);
#pragma endregion

}			
			