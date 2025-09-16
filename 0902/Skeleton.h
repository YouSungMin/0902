#pragma once
#include "Monster.h"
class Skeleton : public Monster
{
public:
	void BoneThrowing();
public:
	Skeleton() = default;
	Skeleton(std::string InName)
		:Monster(InName)
	{
		HealthPoint = 40.0f;
		AttackPower = 7.0f;
		Gold = 7;
	}
};

