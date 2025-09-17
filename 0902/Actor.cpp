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
	printf("%s�� %.0f�� ���ظ� �Ծ����ϴ�.\n", Name.c_str(), InDamage);
	printf("(%.0f/%.0f)\n", HealthPoint, MaxHealth);

	if (HealthPoint <= 0)
	{
		//��� ó��
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
		printf("ũ��Ƽ���� �߻��Ͽ����ϴ�. ������2��!\n");
		InDamage *= 2.0f;
	}
	return InDamage;
}
