#include "Actor.h"
#include <stdio.h>
#include <random>
void Actor::ApplyDamage(ICanBattle* InTarget)
{
	InTarget->TakeDamage(AttackPower);
}

void Actor::TakeDamage(float InDamage)
{
	InDamage = UseSkil(InDamage);
	InDamage = CriticalAttack(InDamage);
	SetHealthPoint(HealthPoint - InDamage);
	printf("%s가 %.0f의 피해를 입었습니다.\n", Name.c_str(), InDamage);
	printf("(%.0f/%.0f)\n", HealthPoint, MaxHealth);

	if (HealthPoint <= 0)
	{
		//사망 처리
	}
}

float Actor::UseSkil(float InDamage)
{
	int SkillPercent = 1;
	if(SkillPercent == rand() % 5 )
		InDamage += 5.0f;
	return InDamage;
}

float Actor::CriticalAttack(float InDamage)
{
	int CriticalPercent = 1;
	if(CriticalPercent == rand() % 5 )
	{
		printf("크리티컬이 발생하였습니다. 데미지2배!\n");
		InDamage *= 2.0f;
	}
	return InDamage;
}
