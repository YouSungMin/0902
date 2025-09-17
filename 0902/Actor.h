#pragma once
#include "ICanBattle.h"
class Actor : public ICanBattle
{
public:
	void Attack(Actor* Target);
	void TakeDamage(float InDamage);
	
	
	inline bool IsAlive(){ return HealthPoint > 0; }
	inline const float GetHealPoint() const { return HealthPoint; }
	inline const float GetAttackPower() const { return AttackPower; }
	inline const int GetGold() const { return Gold; }
	inline void SetHealPoint(float InHealPoint)
	{
		HealthPoint = InHealPoint;
		if (HealthPoint < 0)
		{
			HealthPoint = 0;
		}

	}
	inline void SetInAttackPower(float InAttackPower)
	{
		AttackPower = InAttackPower;
	}
	inline void SetGold(int InGold)
	{
		Gold = InGold;
	}
protected:
	float HealthPoint;
	float AttackPower;
	int Gold;
};

