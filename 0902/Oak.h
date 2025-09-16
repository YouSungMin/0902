#pragma once
#include "Monster.h"
class Oak : public Monster
{
public:
	void RockThrowing();
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

