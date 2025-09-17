#pragma once
#include "Monster.h"
class Oak : public Monster
{
public:
	virtual float UseSkil(float InDamage)override;
public:
	Oak() = default;
	Oak(std::string InName)
		:Monster(InName)
	{
		HealthPoint = 70.0f;
		AttackPower = 10.0f;
		Gold = 20;
	}
};

