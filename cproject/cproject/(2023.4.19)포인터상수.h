#pragma once
#include <stdio.h>
void main()
{
	//������ ���ȭ 2����
	//��� ���� ������, ������ ���
#pragma region �������������
	//������ ������  ����� ����, ����Ű�� �ִ� �ּҿ� �ִ� ���� ������ �� ������ ����
	int data = 100;
	int data1 = 20;
	const int* ptr = &data;
	//*ptr = 300; �������� ���ȭ�Ǿ���
	//printf("ptr ��: %p\n", ptr);
	ptr = &data1;
	//printf("ptr ��: %p\n", ptr);
#pragma endregion

#pragma region �����ͻ��
	//����� ������ �������̹Ƿ�, �ش� ������ ���� ������ �� ������, �ٸ� �ּ� ���� ����ų �� �ִ�
	int value1 = 100;
	int* const ptr1 = &value1;//������ ������ ���ȭ
	//printf("value1 ��: %d\n", value1);
	*ptr1 = 999;//������ ����
	//printf("value1 ��: %d\n", value1);
	//ptr1 = &value2; ������ ������ ���ȭ�Ǿ���
#pragma endregion

#pragma region sizeof()
	float health = 100;
	int* pointer;
	//printf("char ũ��: %d\n", sizeof(char));
	//printf("short ũ��: %d\n", sizeof(short));
	//printf("int ũ��: %d\n", sizeof(int));
	//printf("long ũ��: %d\n", sizeof(long));
	//printf("float ũ��: %d\n", sizeof(health));
	//printf("double ũ��: %d\n", sizeof(double));
	//printf("long double ũ��: %d\n", sizeof(long double));
	//printf("pointer ũ��: %d\n", sizeof(pointer));
	//printf("\n");
#pragma endregion

#pragma region ������
	//for (int i = 1; i <= 9; i++) {
	//	for (int j = 2; j <= 9; j++) {
	//		printf("%d x %d = %d   ", j, i, i * j);
	//		if (i * j < 10)
	//			printf(" ");
	//	}
	//	printf("\n");
	//}
#pragma endregion

#pragma region scanf�Է��Լ�
	//ǥ�� �Է� �Լ�, ���� �����͸� ���Ŀ� ���� �Է�
	//scanf <- sdl �˻縦 ���� ���ϸ� ����
	//scanf_s("������ ����", &����)
	int count = 0;
	printf("�Է�:");
	//scanf_s("%d",&count);// ǥ�� �Է� �Լ��� �Է��� ������ ������ ���� �۾����� �Ѿ �� ����.
	//printf("count: %d\n", count);
	printf("\n");
#pragma endregion
	//�Է°��� ���� �� ��� ����
	while (1)
	{
		scanf_s("%d", &count);

		for (int i = 1; i <= count; i++)
		{
			for (int j = 1; j <= i; j++)
				printf("��");

			printf("\n");
		}

		if (!count)
			break;
	}

}
