#pragma once
#include <stdio.h>
void main()
{
#pragma region �迭
	//���� �ڷ����� ������ �̷��� ���� ����
	int array[5];

	//ù ��° ����(index)�� 0���� ����
	array[0] = 100;
	array[1] = 200;
	array[2] = 300;
	array[3] = 400;
	array[4] = 500;
	//�迭 ũ��� ������ �������� ������ �޸𸮸� ����
	//array[5] X

	for (int i = 0; i < 5; i++)
		printf("array[%d]: %d\n", i, array[i]);

	//	[0]		[1]		[2]
	float item_list[3] = { 15.5f, 33.3f, 67.62f };
	//�迭 �޸� ������ ���ൿ�� ���� �Ұ�
	for (int i = 0; i < 3; i++)
		printf("item_list[%d]: %f\n", i, item_list[i]);

	//�迭 ũ�� ���� ����
	//�ʱ�ȭ ��Ͽ��� ������ ��ҿ� ���� ũ�� ����
	char string[] = { 'a','b','c' };

	//�迭�� �̸��� �迭�� ���� �ּҸ� ����Ų��
	printf("string �迭 �ּ�:  %p\n", string);
	printf("string[0] �ּ�:  %p\n", &string[0]);

	//�迭�� ������
	int data = 100;
	int* ptr = &data;
	printf("ptr ��: %p\n", ptr);
	printf("ptr + 1: %p\n", ptr + 1);
#pragma endregion

#pragma region ����Ʈ ������
	//��Ʈ ���� ������ ���ڸ�ŭ ��ȣ �������� �̵�
	// >> ��Ʈ���� �־��� ���ڸ�ŭ ���������� �̵�
	// << ��������

	char value = 10; // 0000 1010
	printf("value ��: %d\n", value);
	printf("value ������ �� �� ��Ʈ ����: %d\n", value >> 2);
	// 0000 1010 -> 0000 0101 -> 0000 0010
	printf("value ���� �� �� ��Ʈ ����: %d\n", value << 3);
	// 0000 1010 -> 0001 0100 -> 0010 1000 -> 0101 0000

#pragma endregion

//  %  ������(��ⷯ ����)

#pragma region Ȧ��¦��
	/*
	int number = 0;
	printf("�Է�:");
	scanf_s("%d", &number);
	if (number % 2)
		printf("Ȧ��\n");
	else
		printf("¦��\n");
	*/
#pragma endregion

#pragma region ���̹� ������
	// camel case
	// ù �ܾ �����ϰ� ù ���ڸ� �빮�ڷ� ǥ��
	// ex) playerHealth
	// 
	// pascal case
	// �ܾ��� ù ���ڸ� �빮�ڷ� ǥ��
	// ex) SelectTarget
	// 
	// snake case
	// ���� �ҹ��� �ܾ� ���̿� _ ǥ��
	// ex) api_url
	//
#pragma endregion



}
