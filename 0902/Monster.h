#pragma once
#include <string>
#include "Actor.h"
class Monster : public Actor
{
public:
	inline const std::string& GetName() const { return Name; }
	virtual float UseSkil(float InDamage)override;
public:
	Monster() = default;
	Monster(std::string InName)
		:Name(InName)
	{
		HealthPoint = 100.0f;
		AttackPower = 10.0f;
	}
protected:
	std::string Name;
};

