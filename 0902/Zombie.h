#pragma once
#include "Monster.h"
class Zombie : public Monster
{
public:
	virtual float UseSkil(float InDamage)override;
public:
	Zombie() = default;
	Zombie(std::string InName)
		:Monster(InName)
	{
		HealthPoint = 50.0f;
		AttackPower = 5.0f;
		Gold = 10;
	}
};

