#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <malloc.h>
#include <math.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <time.h>


int main()
{
#pragma region rand()
	//0 ~ 32767 ������ ���� ���� ����

	//time(): 1970�� 1�� 1�� 0�� (UTC)���� ������� �帥 �ð� ��ȯ
	// ����: ��

	//srand(time(NULL));
	//
	//int value;
	//
	//for (int i = 0;i < 5;i++)
	//{
	//	value = rand() ;
	//	printf("value: %d\n", value);
	//}


#pragma endregion

#pragma region up_down
	//int a = 0;
	//srand(time(NULL));
	//a = rand() % 50 + 1;
	//int life = 5;
	//int q = 0;
	//while (life)
	//{
	//	printf("���� ���: %d\n�Է�: ",life);
	//	scanf("%d", &q);
	//	
	//	if (a > q)
	//	{
	//		printf("UP\n");
	//		life--;
	//	}
	//	else if (a < q)
	//	{
	//		printf("DOWN\n");
	//		life--;
	//	}
	//	else
	//		break;
	//
	
	//}
	//
	//if (life)
	//{
	//	printf("You win\n");
	//}
	//else
	//{
	//	printf("You lose\n");
	//}

#pragma endregion

#pragma region ������ �°�
	// char �ڷ����� short �ڷ��� ������ �̷���� �� cpu�� ó���ϱ⿡ ���� ������ ũ���� ���� �ڷ��� int�� �ڵ� ����ȯ�Ǵ� ����
	char data1 = 5;
	short data2 = 10;
	printf("data1, data2�� ������ ũ��: %d\n", sizeof(data1 + data2));// 4 byte
#pragma endregion




	return 0;
}			
			