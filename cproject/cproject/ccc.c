#include <stdio.h>
void main()
{
#pragma region switch
	int count = 3;

	//switch: � ����� ���� �� ������� ����Ǵ� ��ɹ�
	// ���ǿ� �ش��ϴ� ���� ���� ������ ��ġ�� �̵�
	switch (count)// <- ��
	{
		//break: Ư�� �������� �б⸦ Ż���ϴ� ���
	case 0: printf("count is 0.\n");
		break;
	case 1: printf("count is 1.\n");
		break;
	case 2: printf("count is 2.\n");
		break;
	//default:printf("����\n");
				 
	}			 
#pragma endregion

#pragma region ���� ������
	/*
	//�ǿ����ڸ� ������ �� ����ϴ� ������
	
	//���� ���� ������
	// ������ ���� ������Ų �Ŀ� ������ ����
	int a = 0;
	int result_1 = 0;

	result_1 = ++a;
	printf("result_1�� ��: %d\n", result_1);
	
	result_1 = --result_1;
	printf("result_1�� ��: %d\n", result_1);

	//���� ���� ������
	//������ ������ ���� ������ ���� ����
	int b = 0;
	int result_2 = 0;

	result_2 = b++;
	printf("result_2�� ��: %d\n", result_2);
	
	result_2 = b--;
	printf("result_2�� ��: %d\n", result_2);
	*/
#pragma endregion
	
#pragma region for
	//�ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư���� Ƚ����ŭ �ݺ�
	//for(�ʱ��;���ǽ�;������;) ������ ������ �� ������ �ݺ�
	for (int i = 0; i < 5; i++)
	{
		//printf("���� ��\n");
	}
	//�ʱⰪ�� 1~5�� ������ ���
	for (int i = 1; i < 6; i++)
	{
		//���� ������ ������
		//printf("%d\n", i);
	}
	int a = 0;
	for (int i = 1; i <= 10; i++)
	{
		a = a + i;
		//���� ���� ���� a += i; a-= i;(*=, /=)
	}
	//printf("a is %d", a);

	//���� for��
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("���� for��\n");
		}
		printf("�ٱ��� for��\n");
	}
#pragma endregion


}
