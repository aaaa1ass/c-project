#pragma once
#include <stdio.h>
#include <limits.h>
#include <malloc.h>
#include <math.h>

struct Player
{
	int hp;
	float attack;
	int x;
	int y;
};

struct Enemy
{
	int x;
	int y;
};

int main()
{
#pragma region ����ü ������
	//struct Player player;
	//struct Player* ptrPlayer = NULL;
	//ptrPlayer = &player;
	//
	//(*ptrPlayer).hp = 100;
	//(*ptrPlayer).attack = 12.5f;
	//
	//printf("%d\n", (*ptrPlayer).hp);
	//printf("%f\n", (*ptrPlayer).attack);
	//
	//ptrPlayer->hp = 250;
	//ptrPlayer->attack = 26.125f;
	//
	//printf("%d\n", (*ptrPlayer).hp);
	//printf("%f\n", (*ptrPlayer).attack);
#pragma endregion

#pragma region �� �� ������ �Ÿ�
	//������ sqrt
	//printf("��Ʈ 49: %lf\n", sqrt(49));
	////�ŵ�����
	//printf("2�� 3��: %lf\n", pow(2, 3));
	//struct Player player;
	//struct Enemy enemy;
	//player.x = 0;
	//player.y = 0;
	//enemy.x = 5;
	//enemy.y = 7;
	//double distance = sqrt(pow(player.x - enemy.x, 2) + pow(player.y - enemy.y,2));
	//printf("distance is %lf\n", distance);
	//if (distance < 100)
	//	printf("Safe.\n");
#pragma endregion

#pragma region �Ǽ� ���� ���
	//�����Ҽ��� �Ҽ��� ��ġ �����ϰ� �Ҽ��� ��ġ ��Ÿ����

	//float 4 byte
	//�ε��Ҽ���
	//�Ҽ����� ��ġ�� �������� �ʰ� �Ҽ����� ��ġ�� ��Ÿ���� ���
	//float fData = 1.3f;
	//printf("fData�� ��: %.7f\n", fData);
	//
	////double 8 byte
	//double dData = 1.3;
	//printf("dData�� ��: %.10lf\n", dData);
	//
	//if (fData == 1.3)
	//{
	//	printf("fData�� ���� 1.3�� ���� ����\n");
	//}
	//else
	//{
	//	printf("fData�� ���� 1.3�� ���� �ٸ�\n");
	//}
#pragma endregion


	return 0;
}
