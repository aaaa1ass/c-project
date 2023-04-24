#pragma once
#include <stdio.h> // #include ���� ó�� ��ó����
//�ý��� �����̳� ����� ���� ������ ���α׷� �ҽ��� �����Ͽ� ����ϱ� ���� ����
#include <limits.h>

#pragma region ��ũ��
	//Ư�� �����Ͱ� ���ڿ��� ���ǵǰ� ó���Ǵ� ����
#define SIZE 50 // SIZE == 50
	//���� ó���Ǳ� ������ ; �ʿ� ����
	//�޸� ������ ������ ���� �ʴ�

#pragma endregion

void main()
{
	//printf("��ũ�� SIZE�� ��: %d\n", SIZE);

	//��ó����
	//������ ���� ���α׷� ���� ó�� ����
#pragma region ���ڿ�
	// �������� �޸� ������ ����� ���� ������ ����

	//%s ���ڿ� ��� ����
	//���ڿ��� �������� NULL�� ���Եȴ�
	//NULL�� ���ڿ��� ���� �˷��ش�


	// 2����
	//������ �̿�
	const char* name = "mob";//name -> ù ��° ���ڸ� ����Ų��
	//"mob" -> �޸� '������ ���� read only'
	printf("name�� ��: %p\n", name);
	printf("name�� ����Ű�� ��: %s\n", name);
	//���ڿ� ����� ������ ������ �б� ���� ������ ����Ǳ� ������ ���ڿ��� ���� ������ �� ����.
	//*name = 'g'; name[0] = 'a';
	name = "ritz";//"ritz"�� ù ��° ���ڸ� ����Ų��
	printf("name�� ��: %p\n", name);
	printf("name�� ����Ű�� ��: %s\n", name);

	//�迭 �̿�
	char string[] = "Game";
	//ro ������ ������ ���ڸ� �޸� '����' ������ �����´�
	printf("string�� ��: %s\n", string);
	string[0] = 'S';
	printf("string�� ��: %s\n", string);
	char string1[] = { "a p p\0le" };// ���鵵 ����
	// NULL ���� ���ڿ��� ����Ѵ�
	printf("string1�� ��: %s\n", string1);
	// char �迭�� ������ �����
	//string = string1; -> X
	//string = "special week"; -> X
#pragma endregion

#pragma region �ִ񰪰� �ּڰ�
	int max = INT_MIN;
	int min = INT_MAX;
	int numbers[10] = { 0, 5, 20, 35, 50, 65, 80, 100, 135, 200 };
	for (int i = 0; i < 10; i++)
	{
		if (max < numbers[i])
			max = numbers[i];
		if (min > numbers[i])
			min = numbers[i];
	}
	printf("�ִ�: %d\n", max);
	printf("�ּڰ�: %d\n", min);
#pragma endregion

}
