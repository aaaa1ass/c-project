#pragma once
#include <stdio.h>
#include <limits.h>
#include <malloc.h>

int main()
{
#pragma region �����͹迭
	const char* string[3];
	//[] [] [] 8 byte �޸� 3���� 
	string[0] = "First";
	string[1] = "Second";
	string[2] = "Third";

	for (int i = 0; i < 3; i++)
	{
		//printf("string[%d]: %s\n", i, string[i]);
	}
	int a = 10;
	int b = 20;
	int c = 30;
	int* ptr1 = &a;
	int* ptr2 = &b;
	int* ptr3 = &c;
	int* ptr_arr[3] = { ptr1, ptr2, ptr3 };
	//printf("ptr_arr[0]�� ��: %p\n", ptr_arr[0]);
	//printf("ptr_arr[0]�� ����Ű�� ��: %d\n", *ptr_arr[0]);
#pragma endregion

#pragma region unsigned
	//��ȣ�� ���� �ڷ������� ��ȣ��Ʈ�� ���� �ڷḦ ������ �� �ִ� ������ ������ 2�� �þ��

	char data = 128;
	unsigned char uData = 128;

	//signed �ڷ����� �Ϲ��� ����ȯ�� ����� �� �þ�� �޸� ���� 1(��ȣ��Ʈ)�� ä������
	//printf("data: %u\n", data);
	//printf("data: %d\n", data);

	//%u: unsigned int�� ���� ǥ���ϴ� ���� ������
	//�� �� ��ȣ�� ���� ǥ���̹Ƿ� �Ϲ��� ����ȯ�� ����� �� �þ�� �޸� ���� 0���� ä������
	//printf("uData: %u\n", uData);
	//printf("uData: %d\n", uData);

#pragma endregion

#pragma region �����
	// �� ���� ������ ���� ����
	int x;
	int y;
	// �Է�
	printf("x: ");
	scanf_s("%d", &x);
	printf("y: ");
	scanf_s("%d", &y);
	for (int i = 1; i <= x && i <= y; i++)
	{
		if (x % i == 0 && y % i == 0)
			printf("%d ", i);
	}
#pragma endregion

	// ���������� �������� ��� 0
	// �ƴϸ� 1
	return 0;
}
