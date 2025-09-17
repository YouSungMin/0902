#pragma once

class ICanBattle
{
public:
	virtual void ApplyDamage(ICanBattle* InTarget) = 0;
	virtual void TakeDamage(float InDamage) = 0;
	virtual ~ICanBattle(){};
};