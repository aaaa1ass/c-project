#pragma once
#include <stdio.h>
#include <limits.h>
#include <malloc.h>

#pragma region ����ü
//���� ���� ������ �ϳ��� �������� ����ȭ�� ���� �ϳ��� ��ü�� �����ϴ� ��
struct Player
{
	int attack;
	float health;
	char grade;
	// <- �޸𸮰� ������ ���� ���赵 ����
	//����ü�� �����ϱ� ���� ����ü�� �޸� ������ �������� �����Ƿ� ����ü ���� �����͸� �ʱ�ȭ�� �� ����
};

struct Model
{
	int weight;
	short mesh;
	double size;
	//����ü�� ũ��� ��� ������ ������ ���� �ٸ��� ������ �� ������ ����ü ũ�⸦ �����ϴ� ���´� �⺻ �ڷ������θ� �����ȴ�
};
#pragma endregion



void main()
{
#pragma region ����ü
	//����ü ����
	struct Player player;

	//player.attack = 10;
	//player.grade = 'A';
	//player.health = 92.15f;
	//
	//printf("player.attack: %d\n", player.attack);
	//printf("player.grade: %c\n", player.grade);
	//printf("player.health: %f\n", player.health);

	//����ü �ʱ�ȭ
	//�ʱ�ȭ ����Ʈ�� �ʱ�ȭ�� �� ����ü���� ����� ���� ������ ����� �Ѵ�
	struct Player newPlayer = { 15, 99.5f, 'B' };
	//printf("newPlayer.attack: %d\n", newPlayer.attack);
	//printf("newPlayer.grade: %c\n", newPlayer.grade);
	//printf("newPlayer.health: %f\n", newPlayer.health);
#pragma endregion

#pragma region ����Ʈ�е�
	//��� ������ �޸𸮿��� cpu�� ���� �� �� ���� ���� �� �ֵ��� �����Ϸ��� ���������� ��Ͽ� ���� ����Ʈ�� �е����ִ� �۾�
	struct Player otherPlayer;
	//����ü�� ũ��� ����ü�� �����ϴ� ��� �� ���� ū ũ���� �޸��� ����� �ȴ�
	//printf("Player�� ũ��: %d\n", sizeof(otherPlayer));

	struct Model model;
	//printf("model�� ũ��: %d\n", sizeof(model));
#pragma endregion

#pragma region �Ҽ�
	//int number = 0;
	//int count = 0;
	//printf("�Է�: ");
	//scanf_s("%d", &number);
	//printf("%d ������ �Ҽ�: ",number);
	//for (int i = 2; i <= number; i++)
	//{
	//	count = 0;
	//	for (int j = 2; j < i; j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			count++;
	//			break;
	//		}
	//	}
	//	if (!count)
	//		printf("%d ", i);
	//}
#pragma endregion


}
