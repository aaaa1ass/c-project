#pragma once
#include <stdio.h>
void main()
{

#pragma region ����������
	/*
	char character = 'B';
	int data = 100;
	float decimal = 99.966666333f;
	//printf(data); -> X
	//���� ������: ����ϱ� �� �ڷ����� ������ ��������� ����
	// %c ����
	// %d ����
	// %f �Ǽ� (float)
	//
	//���İ� ���� ��ġ��Ű��
	printf("value of character: %c\n", character);
	printf("value of data: %d\n", data);
	//float -> �Ҽ��� ���� 6�ڸ����� ǥ��
	printf("value of decimal: %f\n", decimal);
	printf("data: %d, decimal: %f", data, decimal);
	*/
#pragma endregion

#pragma region ��Ʈ
	//�����͸� ��Ÿ���� �ּ� ���� 0 or 1
	//�������� �� ����� �����ϴ� ����
	//8 Bit -> 1 Byte
	//
	// ��Ʈ ������: ��Ʈ ������ �� ���� ����
	// AND
	// �� ���� �ǿ����ڰ� ��� 1�̸� 1�� ��ȯ
	char num1 = 10; //1010
	char num2 = 15; //1111
	char num3 = 129;
	printf("num1 num2 AND ����: %d\n", num1 & num2);
	// OR
	// �� ���� �ǿ����� �� �ϳ��� 1�� ������ 1�� ��ȯ
	printf("num1 num2 OR ����: %d\n", num1 | num2);
	// XOR
	// �� ���� �ǿ����ڰ� ������ 0�� ��ȯ, �ٸ��� 1�� ��ȯ
	printf("num1 num2 XOR ����: %d\n", num1 ^ num2);
	// NOT
	// ��Ʈ�� ����
	printf("num1 NOT ����: %d\n", ~num1);
	// ù ��° ��Ʈ: ��ȣ ��Ʈ 
	// 0->��� 1->����
	printf("num3�� ��: %d", num3);
#pragma endregion


}