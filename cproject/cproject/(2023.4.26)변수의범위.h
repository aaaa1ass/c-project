#pragma once
#include <stdio.h>
#include <limits.h>

#pragma region ��������
//�Լ� �ܺο��� ����� ������ ���α׷� ��𼭵� ���� �����ϸ� ���α׷��� ����Ǿ�߸� �޸𸮿��� �����ȴ�
int globalValue = 5;
#pragma endregion

#pragma region ��������
//���� ������ ���� ������ Ư¡�� ������ �� ���� �ʱ�ȭ�� �̷������
static int attack;//�ʱ�ȭ�� �̷������ ���� ����,���� ������ ���α׷� ũ�⿡ ���Ե��� �ʴ´�.
void Calculator()
{
	static int value = 1;
	value += 1;
	printf("���� ���� value: %d\n", value);

}
#pragma endregion

void Function()
{

	int count = 0;
	globalValue += 1;
	count += 1;
	//printf("count: %d\n", count);
	//printf("globalValue: %d\n", globalValue);
}

void function(int x)
{

	printf("%d", x);
	for (int i = 2; i <= x; i++)
	{
		return function(x / i);
	}
}

void main()
{
#pragma region ��������
	//'���' ������ ����� ������ ��� �������� ��ȿ�ϰ� ��� ���� �� �޸𸮿��� �����ȴ�
	// A
	int data = 100;// main �Լ� ���� data
	{
		//B
		int data = 20;// ��� ���� data
		//printf("data in B: %d\n", data);
	}// ��� ���� data �޸� ����
	//printf("data in A: %d\n", data);

#pragma endregion
	//Function();
	//Function();
	//Calculator();
	//Calculator();

	//printf("���� ���� attack: %d\n", attack);

	//�޸� 
	// 
	// �ڵ� �Լ��� �ּ�, ���ͷ�
	// ������ ���� ����, ���� ����
	// BSS ���� ����, ���� ����
	// �� ���� �޸� ����
	// ���� ���� ���� �Ű� ����
	//

#pragma region ���
	int number = 0;
	//printf("�Է�: ");
	//scanf_s("%d", &number);
	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			printf("%d\n", i);
		}
	}
#pragma endregion

#pragma region ShortCircuit
	// �� ���꿡�� �� �ǿ����� �� ��� �� �ʸ� '��'�̸� ������ �ǿ������� ���� ������ �ʰ� �ٷ� ����� ��� ����
	// && || �� ������
	// & | ��Ʈ ������
	int x = 0;
	int y = 1;
	if (x == -1 && ++y == 2) {}
	printf("x: %d, y: %d\n", x, y);
#pragma endregion

}
