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
		printf("치료사를 만났습니다 치료하시겠습니까? (현재 체력:%.1f)\n", HealthPoint);
		std::cin >> Choice;
		if (Choice == 'y')
			while (Gold > 0)
			{
				printf("치료하실 HP만큼 입력해주세요 (HP 1 = 골드 1) (현재 남은 골드 : %d)\n", Gold);
				std::cin >> HealPoint;
				if ((100 - HealthPoint) < HealPoint)
					printf("%0.1f 보다 초과해서 회복할 수 없습니다.\n", (100.0f - HealthPoint));
				if (HealthPoint < HealPoint)
					printf("골드가 부족합니다.\n");
				else
				{
					Gold = Gold - HealPoint;
					HealthPoint += HealPoint;
					printf("%d 만큼 회복 하였습니다.(현재 체력 : %.1f)(현재 남은 골드 : %d)\n", HealPoint,HealthPoint,Gold);
					endflag = 1;
					break;
				}
			}
		else if (Choice == 'n')
			printf("치료를 거절하셨습니다.\n");
		else
		{
			printf("잘못 입력하셨습니다. 다시 입력해주세요.");
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
		Enemy = Goblin("고블린");
		break;
	case 1:
		Enemy = Oak("오크");
		break;
	case 2:
		Enemy = Zombie("좀비");
		break;
	case 3:
		break;
		Enemy = Skeleton("스켈레톤");
	default:
		break;
	}
	while (Enemy.GetHealthPoint() > 0 && HealthPoint > 0)
	{
		printf("턴을 시작하려면 1을 입력해주세요");
		std::cin >> Turn;
		if (Turn != '1')
			continue;
	}

}
