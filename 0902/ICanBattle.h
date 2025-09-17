#pragma once

class ICanBattle
{
public:
	virtual void Attack(ICanBattle* InTarget) = 0;
	virtual void DamageCalculate() = 0;
	virtual void HealthPointCalculate() = 0;
	virtual ~ICanBattle(){};
};