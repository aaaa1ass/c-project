#include <stdio.h>
void main()
{
#pragma region while
	//Ư�� ������ ������ �� ������ �ݺ�
	int count = 5;
	while (0)//����
	{	
		printf("���� ���� %d\n", count); 
		count--;
	}
#pragma endregion

#pragma region continue
	//�ش� ���ǹ��� �������� �ʰ� �ݺ����� �̾ �����ϴ� ���
	for (int i = 1; i <= 0; i++)
	{
		if (i == 3)
		{
			continue;
		}
		printf("%d ", i);
	}
#pragma endregion

#pragma region �� ��ȯ
	//�ٸ� �ڷ����� �������� ������ �̷���� �� ��ȯ
	
	//�Ϲ��� �� ��ȯ
	//�ٸ� �ڷ������� ������ �� ũ�Ⱑ ū �ڷ������� ��ȯ
	//char < short < int < float < double
	int integer = 10;
	float decimal = 2.5f;
	// 12.5 <- 10.0(�Ǽ�) + 2.5(�Ǽ�)
	float result = integer + decimal;
	printf("result: %f\n", result);

	//����� �� ��ȯ
	//����ڰ� ���� �ڷ����� ��ȯ
	// flaot �޸� 2.0 = 5 / 2
	// ���������� ������ ������ ���´�
	// 
	int a = 5;
	int b = 2;
	float result1 = (float)a/b;
	printf("result1: %f\n", result1);
#pragma endregion

#pragma region �ּ� ������
	//������ �ּҰ��� ��ȯ
	//���� �ּҰ�
	int data = 69;
	//%p: �������� �ּҸ� ���
	//64��Ʈ -> ������ 8����Ʈ
	//32��Ʈ -> ������ 4����Ʈ 
	

	//������ �ּҴ� ������ ������ �ٲ��.
	//printf("data �ּ�: %p\n", &data);
#pragma endregion

#pragma region ������
	//�޸��� �ּڰ��� ������ �� �ִ� ����
	int box = 100;
	int box1 = 999;
	int* ptr = &box;
	//������ ������ �޸� ������ �ְ� ������ �ּҸ� �����ϸ� �ش� ������ ���� �ּҸ� ����Ų��
	printf("ptr ��: %p\n", ptr);
	printf("box �ּҰ� %p\n", &box);
	printf("ptr �ּҰ� %p\n", &ptr);
	printf("box ��: %d\n", box);
	*ptr = 600;
	printf("box ��: %d\n", box);
	ptr = &box1;
	*ptr = -999;
	printf("box ��: %d\n", box);
	printf("box1 ��: %d\n", box1);
	//������ �ڷ����� ������ ������ �ڷ����� ��ġ�ؾ� �Ѵ�
	double health = 10.5;
	int* ptr1 = &health;
	printf("ptr1 ��: %p\n", ptr1);
	*ptr1 = 51.5;
	printf("ptr1�� ����Ű�� ��: %lf\n", *ptr1);
	
#pragma endregion		
}			
			