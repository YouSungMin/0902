#include "Practice0912.h"
#include <stdio.h>
#include "Position.h"
void Day0912_Struct()
{
	Enemy Golin;
	Golin.Name = "고블린1호";
	printf("이름 : %s\n",Golin.Name.c_str());
	printf("생명력 : %.1f\n",Golin.Health);
	printf("공격력 : %.1f\n",Golin.AttackPower);
	printf("보상 : %d\n",Golin.DropGold);


	Enemy* pGoblin = new Enemy();
	pGoblin->Name = "고블린2호";
	pGoblin->Health = 200.0f;
	pGoblin->AttackPower = 20.0f;
	pGoblin->DropGold = 200;
	PrintEnemy(pGoblin);

	Weapon* pWeapon = new Weapon();
	pWeapon->Name = "검";
	pWeapon->AttackPower = 20.0f;
	pWeapon->Durability = 100;
	printf("무기 종류 : %s\n", pWeapon->Name.c_str());
	printf("공격력 : %.1f\n", pWeapon->AttackPower);
	printf("내구도 : %d\n", pWeapon->Durability);

	Enemy* Goblins = new Enemy[3];
	for (int i = 0; i < 3; i++)
	{
		Goblins[i].Name = "고블린" + std::to_string(i+1) +"호";
		PrintEnemy(&Goblins[i]);
	}
	Enemy NamedGoblin("보스 고블린");
	PrintEnemy(&NamedGoblin);
	Enemy GoblinModifier(5.0f);
	PrintEnemy(&GoblinModifier);

	delete pGoblin;
	delete pWeapon;
	pGoblin = nullptr;
	pWeapon = nullptr;
}

void PrintEnemy(const Enemy* pEnemy)
{
	printf("이름 : %s\n", pEnemy->Name.c_str());
	printf("생명력 : %.1f\n", pEnemy->Health);
	printf("공격력 : %.1f\n", pEnemy->AttackPower);
	printf("보상 : %d\n", pEnemy->DropGold);
}

void Day0912_OperatorOverloading()
{
	Enemy Goblin1("고블린");
	Enemy Goblin2("고블린");

	Enemy FusionGoblin = Goblin1+Goblin2;
	PrintEnemy(&FusionGoblin);
	FusionGoblin = Goblin1-Goblin2;
	PrintEnemy(&FusionGoblin);

	FusionGoblin = FusionGoblin*5.0f;
	PrintEnemy(&FusionGoblin);
}

void Day0912_Position()
{
	Position p1(2, 3);
	Position p2(5, 1);

	Position sum = p1 + p2;   // sum.x == 7, sum.y == 4
	Position diff = p1 - p2;  // diff.x == -3, diff.y == 2
	//Monster mon;

	//printf("p1 = (%d,%d) \np2 = (%d,%d)\n", p1.x, p1.y, p2.x, p2.y);
	//printf("sum = (%d,%d) \ndiff = (%d,%d)\n",sum.x,sum.y,diff.x,diff.y);
	//printf("Monster HP:%f\nAttackPower:%f\nItem:%d",mon.Health,mon.AttackPower,mon.Item);
}

