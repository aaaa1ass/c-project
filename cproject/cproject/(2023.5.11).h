#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <malloc.h>
#include <math.h>
#include <string.h>
#include <stdarg.h>

void check_bottons(int time, char key, int* score)
{
	char bottons[4] = { 'a', 's', ';', '\'' };
	
	for (int i = 0; b_info_s[i].order <= time; i++)
	{
		for(int j = 33; j < 30; j--)
			if (b_state_s[i].checked == 0 && b_info_s[i].order + j == time && key == bottons[b_info_s[i].key])
			{
				*score++;
				b_state_s[i].checked = 1;
			}
	}
}

void Array(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = 100 * i;
	}
}

void ChangeString(char str[])
{
	for (int i = 0; str[i] != NULL; i++)
	{
		printf("%c", str[i] -= 32);
	}

}

void Information(int size, ...)
{
	//va_list �� ���� ������ ���� �ּҸ� ����Ű�� ������
	va_list argPtr;

	//va_start va_list�� ������� �����Ϳ��� ���� ���� �� ù ��° ������ �ּҸ� �������ִ� ��ũ��
	va_start(argPtr, size);

	int result = 0;

	for (int i = 0; i < size; i++)
	{
		//va_arg Ư�� ���� ���ڸ� ����Ű�� �ִ� va_list�� �����͸� ���� ���� ���ڷ� �̵������ִ� ��ũ��
		result += va_arg(argPtr, int);
	}
	printf("result: %d\n", result);

	va_end(argPtr);
}

int main()
{
#pragma region �Ű����� �迭
	// int dataList[5] = { 1,2,3,4,5 };
	// 
	// Array(dataList, 5);
	// 
	// for (int i = 0; i < 5; i++)
	// {
	// 		printf("%d\n", dataList[i]);
	// }

	//char ptr[10];
	//scanf("%s", ptr);
	//ChangeString(ptr);


#pragma endregion

#pragma region ���� �μ�
	//�Ű������� ������ ���� ������ ������� �������� �μ��� ���� �� �ִ� �μ�
	Information(2, 2, 4);
	Information(5, 1, 4, 2, 3, 5);



#pragma endregion


	return 0;
}
