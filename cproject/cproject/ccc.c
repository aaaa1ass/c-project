#include <stdio.h>
#include <limits.h>
#include <malloc.h>

//enum ����
enum Color
{//�������� �ʱ갪�� ������ �� ������, �� ���� ������� 1�� �����Ѵ�
	BLACK = -10,
	RED = 0,
	BLUE
};

enum State
{
	IDLE,
	ATTACK,
	DIE
};

int main()
{
#pragma region _2�����迭
	//�迭�� ��ҷ� �Ǵٸ� �迭�� ������ �迭

	//�迭�� ��ķ� ���еȴ�
	//int array2D[4][3] =
	//{
	//	{10,20,30},
	//	{40,50,60},
	//	{70,80,90},
	//	{100,110,120}
	//};
	//printf("array2D�� �ּ�: %p\n", array2D);
	//printf("array2D[0][0]�� �ּ�: %p\n", &array2D[0][0]);

	//int* ptr = NULL;
	
	//�迭 ������
	//Ư�� �������� �迭�� ����ų �� �ִ� �ϳ��� ������
	//int(* arrayPtr)[3];// 4byte x 3 �� 12byte
	//
	//ptr = array2D;
	//arrayPtr = array2D;
	//
	//ptr = ptr + 3;
	//arrayPtr = arrayPtr + 1;
	//
	//printf("ptr�� ����Ű�� ��: %d\n", *ptr);
	//printf("arrayPtr�� ����Ű�� ��: %d\n", (*arrayPtr)[0]);
#pragma endregion

#pragma region ������enum
	//���, ����� �Ҹ��� ���� ������ �̷�� �ڷ���
	//enum Color color;
	//
	//color = BLACK;
	//
	//printf("color�� ��: %d\n", color);
	//
	//color = RED;
	//
	//printf("color�� ��: %d\n", color);

	//enum State state;
	//int select = 0;
	//printf("�÷��̾��� ���¸� ����: ");
	//scanf_s("%d",&select);
	//
	//
	//state = select;
	//switch (state)
	//{
	//case IDLE:printf("��� ����");
	//	break;
	//case ATTACK:printf("���� ����");
	//	break;
	//case DIE:printf("���� ����");
	//	break;
	//}
#pragma endregion

	int A, B;
	scanf_s("%d %d", &A, &B);
	printf("%d", A + B);
	return 0;
}			
			