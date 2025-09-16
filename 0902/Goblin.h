#pragma once
#include "Monster.h"
class Goblin : public Monster
{
public:
	void DoubleAttack();
public:
	Goblin() = default;
	Goblin(std::string InName)
		:Monster(InName)
	{
		HealthPoint = 30.0f;
		AttackPower = 3.0f;
		Gold = 5;
	}
};

