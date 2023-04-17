#pragma once
#include <stdio.h>
void main()
{
#pragma region �����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ִ��� ������ �Ѿ ������ ����
	// char: 1byte (-128 ~ +127)
	char data = 128;
	printf("data: %d\n", data);
#pragma endregion

#pragma region ����÷ο�
	//Ư���� �ڷ����� ǥ���� �� �ִ� �ּڰ��� ������ �ʾ ������ ����
	char value = -129;
	printf("value: %d\n", value);
#pragma endregion

#pragma region ���迬����
	// �� ���� �ǿ������� ���� ���Ͽ� �� ����� 0 or 1�� ��Ÿ���� ������

	// A < B: B�� A���� ũ��
	// A > B
	// A <= B: B�� A���� ũ�ų� ����
	// A >= B
	// A == B: A�� B�� ����
	// A != B: A�� B�� ���� �ʴ�
	// 0 -> ����
	// 1 -> ��
	//
	int A = 10;
	int B = 20;
	int C = 30;
	printf("A < B: %d\n", A < B);
	printf("A > B: %d\n", A > B);
	printf("A <= B: %d\n", A <= B);
	printf("A >= B: %d\n", A >= B);
	printf("A == B: %d\n", A == B);
	printf("A != B: %d\n", A != B);
#pragma endregion

#pragma region if, else if, else
	//if: � Ư���� ������ ���Ͽ� ������ �´ٸ� �����ϴ� ��ɹ�

	//����(����)
	if (15 == 15)
	{
		//������ ���̸� { } ����
		printf("15�� 15�� ����.\n");
	}

	//else if: if���� ������ ���� ���� �� else if���� ������ �´ٸ� �����ϴ� ��ɹ�
	if (5 < 1)
	{
		printf("if�� ����\n");
	}
	else if (5 > 1)
	{
		printf("else if�� ����\n");
	}
	else if (5 <= 1)
	{
		//else if�� ���� �� ���� ����
		;
	}

	//else: if�� else if���� ������ �� ���� ���� �� �����ϴ� ��ɹ�
	if ('A' == 'B')
	{
		printf("if\n");
	}
	else if ('C' == 'D')
	{
		printf("else if\n");
	}
	else
	{
		printf("else\n");
	}
#pragma endregion

#pragma region �� ������
	// && AND
	if ('A' == 'A' && 'A' <= 'A')
	{
		printf("AND�� ������ ����\n");
	}
	// || OR
	if ('A' == 'A' || 'A' == 'B')
	{
		printf("OR�� ������ ����\n");
	}
	// ! NOT
	if ('A')
	{
		printf("NOT�� ������ ����\n");
	}
#pragma endregion

#pragma region ��и�
	int x = 0;
	int y = 0;
	int z = 0;

	if (x == 0 && y == 0)
	{
		printf("����\n");
	}
	else if (x && y == 0)
	{
		printf("x����\n");
	}
	else if (x == 0 && y)
	{
		printf("y����\n");
	}
	else
	{
		if (x > 0 && y > 0)
		{
			z = 1;
		}
		else if (x < 0 && y > 0)
		{
			z = 2;
		}
		else if (x < 0 && y < 0)
		{
			z = 3;
		}
		else if (x > 0 && y < 0)
		{
			z = 4;
		}
		else
		{
			z = 0;
		}
		printf("�� %d ��и�\n", z);
	}

#pragma endregion

}