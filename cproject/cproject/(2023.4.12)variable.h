#pragma once
#include <stdio.h> // ������Ͽ� ���ǵ� �Լ��� �ִ� stdio.h �⺻ ����� �������
void main() //<--- ���α׷��� ������, �ϳ��� �־�� ��
{//���α׷��� ����

	//����: �޸� ������ Ȯ��
	//�ڷ���: �����͸� �����ϱ� ���� ������ �������� ����
	// 
	// �ڷ��� ������ �̸�;
	// int data;

#pragma region �ڷ����� ����
	/*
	// char �� ���� 1byte
	// short ���� 2byte
	// int ���� 4byte
	// float �Ǽ� 4byte
	// double �Ǽ� 8byte
	// long double 8~16
	*/
#pragma endregion

#pragma region ���Կ����� '='
	//int num = 100;
	//char c = 'A';
	//float pi = 3.14f;
#pragma endregion

#pragma region ���� �̸� ��Ģ
	/*
	1. ���� ����� �� ����(�̹� ����ϰ� �ִ� �ܾ�) ex)int int = 100;
	2. ���ڸ� ����� �� ������ ù��°�� �ȵ� ex) int hp1 = 100; -> ���� int 1hp = 100; -> �Ұ���
	3. ��ҹ��ڸ� ���� ex) int attack = 100; int ATTACK = 200; attack != ATTACK
	4. ���� ���� �ȵ�
	5. Ư�� ��ȣ '$', '_' ����
	*/
#pragma endregion

#pragma region ������ �ʱ�ȭ
	// ������ ���� ���ʷ� �������ִ� ����
	int exp = 0; //������ ����
	exp = 999;

#pragma endregion

#pragma region ���
	//���α׷��� ����Ǵ� ���� ���� ������ �� ���� �޸� ����
	const float pi = 3.141592;
	//pi = 5; ���� ������ �� ����.
	//�ɺ��� ���: �޸� ������ ������ �ִ� ���
	//���ͷ� ���: �޸� ������ ������ �ʴ� ���
	//3.141592 -> ���ͷ� ��
#pragma endregion

#pragma region ������
	//����� �� ��ǻ�Ͱ� �˰� �ٲ�
#pragma endregion

#pragma region ��� ������
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int B = 1;
	int C = 2;
	int E = 3;
	const int F = 4;

	num1 = B + C;
	num2 = E - F;
	num3 = 5 * B;
	num4 = 5 / F;
	num5 = 5 + 5;
#pragma endregion



}//���α׷��� ��
