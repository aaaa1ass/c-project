#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <malloc.h>
#include <math.h>
#include <string.h>

typedef struct Node {
	int data;
	struct Node* next;
}Node;

int main()
{
#pragma region �ڱ� ���� ����ü
	//�ڱ� �ڽ��� ����Ű�� �����Ͱ� ����ü�� ����� �� �ִ� ����ü 
	// 
	//Node node1;
	//node1.data = 100;
	//
	//Node node2;
	//node2.data = 200;
	//
	//Node node3;
	//node3.data = 300;
	//
	//printf("node1�� data: %d\n", node1.data);
	//printf("node2�� data: %d\n", node2.data);
	//printf("node3�� data: %d\n", node3.data);
	//
	//node1.next = &node2;
	//node2.next = &node3;
	//node3.next = NULL;
	//
	//node1.next->data = 999;
	//
	//Node* currentPtr = &node1;
	//while (currentPtr)
	//{
	//	printf("data: %d\n", currentPtr->data);
	//	currentPtr = currentPtr->next;
	//}
#pragma endregion

#pragma region ���� ������
	//int data = 0;
	////        ���� ? �� : ����
	//data = 10 != 10 ? 100 : 445;
	//printf("data: %d\n", data);
#pragma endregion

	char string[10];

	scanf("%[^\n]s", string);

	printf("string: %s\n", string);


	return 0;
}
