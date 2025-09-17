#include "Player.h"
#include "Monster.h"
#include "Goblin.h"
#include "Zombie.h"
#include "Oak.h"
#include "Skeleton.h"
#include <stdio.h>
#include <iostream>

void Player::HealerEncount()
{
	char Choice = NULL;
	int endflag = 0;
	int HealPoint = 0;
	while (endflag == 0)
	{
		printf("ġ��縦 �������ϴ� ġ���Ͻðڽ��ϱ�? (���� ü��:%.1f)\n", HealthPoint);
		std::cin >> Choice;
		if (Choice == 'y')
			while (Gold > 0)
			{
				printf("ġ���Ͻ� HP��ŭ �Է����ּ��� (HP 1 = ��� 1) (���� ���� ��� : %d)\n", Gold);
				std::cin >> HealPoint;
				if ((100 - HealthPoint) < HealPoint)
					printf("%0.1f ���� �ʰ��ؼ� ȸ���� �� �����ϴ�.\n", (100.0f - HealthPoint));
				if (HealthPoint < HealPoint)
					printf("��尡 �����մϴ�.\n");
				else
				{
					Gold = Gold - HealPoint;
					HealthPoint += HealPoint;
					printf("%d ��ŭ ȸ�� �Ͽ����ϴ�.(���� ü�� : %.1f)(���� ���� ��� : %d)\n", HealPoint,HealthPoint,Gold);
					endflag = 1;
					break;
				}
			}
		else if (Choice == 'n')
			printf("ġ�Ḧ �����ϼ̽��ϴ�.\n");
		else
		{
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.");
			continue;
		}
	}
}

void Player::StartBattle()
{
	Monster Enemy;
	char Turn = 0;
	int MonsterSpawn = 0;

	MonsterSpawn = rand() % 4;
	switch (MonsterSpawn)
	{
	case 0:
		Enemy = Goblin("���");
		break;
	case 1:
		Enemy = Oak("��ũ");
		break;
	case 2:
		Enemy = Zombie("����");
		break;
	case 3:
		break;
		Enemy = Skeleton("���̷���");
	default:
		break;
	}
	while (Enemy.GetHealthPoint() > 0 && HealthPoint > 0)
	{
		printf("���� �����Ϸ��� 1�� �Է����ּ���");
		std::cin >> Turn;
		if (Turn != '1')
			continue;
	}

}
