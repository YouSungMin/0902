#include "Actor.h"

void Actor::Attack(Actor* InTarget)
{
	InTarget->TakeDamage(AttackPower);
}

void Actor::TakeDamage(float InDamage)
{
	SetHealPoint(HealthPoint - InDamage);
	if (HealthPoint <= 0)
	{
		//»ç¸Á Ã³¸®
	}
}
