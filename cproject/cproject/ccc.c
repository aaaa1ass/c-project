#include <stdio.h>
#include <limits.h>
#include "SoundManager.h"
//���� -> LIFO ���� last in first out
#pragma region ����Լ�
//� �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� �����ϴ� �Լ�
void Recursion(int x)
{
	if (x == 1)
	{
		//��� �Լ��� ��� ȣ���ϸ�
		//���� �����÷ο찡 �߻��Ѵ�
		// return: �� ��ȯ, �Լ� ��ȯ
		return;
	}
	printf("Recursion() �Լ� ȣ��\n");
	Recursion(x - 1);
}
#pragma endregion

#pragma region ���丮��
int Factorial(int x)
{
	if (x == 0)
		return 1;
	return x * Factorial(x - 1);
}

#pragma endregion

#pragma region �ζ����Լ�
//�Լ��� ȣ���ϴ� ��� ȣ��Ǵ� ��ġ���� �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ�
inline void Function()
{
	//�Լ� ȣ�� ������ ���� ó�� �ӵ��� ��������, �����ϸ� ���� ������ ũ�Ⱑ Ŀ����
	//�������: �������� ��ġ�� �޸𸮿� �׼����� �� �߰����� �ð�,�޸�,�ڿ��� ���
	printf("Function() ȣ��\n");
}
#pragma endregion




void main()
{
	//����Լ�
	//Recursion(3);

	//���丮��
	int number = 0;
	//printf("�Է�: ");
	//scanf_s("%d", &number);
	//printf("!%d = %d\n", number, Factorial(number));
	int f = 1;
	for (int i = 1; i <= number; i++)
	{
		f *= i;
	}
	//printf("!%d = %d\n", number, f);
	
	//�ζ��� �Լ�
	//Function();


	Sound();
}			
			