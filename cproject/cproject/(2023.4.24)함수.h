#pragma once
#include <stdio.h>
#include <limits.h>

#pragma region �Լ�
// Ư���� �۾��� �����ϱ� ���� ���������� ����� �ڵ��� ����
// �ڷ��� �̸�(){}

//void: ���� ��ȯ���� �ʴ�
void Attack()
{
	for (int i = 0; i < 5; i++)
		printf("����\n");
}

//��ȯ��: �ڷ����� �´� �� ��ȯ�ϴ�
int Function()
{
	return 100;
}
// �ڷ����� ��ȯ ���°� ��ġ�ؾ� �Ѵ�
int ProcessInt()
{
	return 65.4;
}
//���� �̸��� �Լ� �ߺ� ���� �Ұ�
#pragma endregion

#pragma region �Ű�����
//�����ϱ� ���� ����
void Calculator(int x)
{
	printf("�Ű� ���� x�� ��: %d\n", x);
}
int Add(int x, int y)
{
	return x + y;
}
#pragma endregion

//���� ���� ���� �Լ�
void swap(int a, int b)
{
	printf("a, b = %d, %d\n", a, b);
	int temp;
	temp = b;
	b = a;
	a = temp;
	printf("a, b = %d, %d\n", a, b);
}

//������ ���� ���� �Լ�
void swap_reference(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


void main()
{
	//�Լ� ȣ��
	//Attack();

	//printf("Function(): %d\n",Function());
	//printf("ProcessInt(): %d\n", ProcessInt());

	//Calculator(123/*<-�μ�: ȣ��� �� ������ ���޵Ǵ� ��*/);
	//�μ��� ���ʺ��� ���ʴ�� ����
	//printf("Add() �Լ��� ��: %d\n", Add(10, 20));

#pragma region ������������&��������������
	int a = 100;
	int b = 200;

	// a and b swap

	//call by value
	swap(a, b);
	printf("a, b = %d, %d\n", a, b);

	//call by reference
	//�Լ� ȣ�� �� �ּҸ� �����ϸ� ������ �ּҰ� ������ �Լ� ������ �Ͼ ������ ������ �޴´�.
	swap_reference(&a, &b);
	printf("a, b = %d, %d\n", a, b);
#pragma endregion
}
