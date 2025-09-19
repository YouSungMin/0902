#pragma once
#include "ICanBattle.h"
#include <string>
class Actor : public ICanBattle
{
public:
	Actor() = default;
	Actor(const char* InName)
		:Name(InName)
	{
	}

	virtual void ApplyDamage(ICanBattle* InTarget)override;
	virtual void TakeDamage(float InDamage)override;
	virtual float UseSkil(float InDamage);
	virtual float CriticalAttack(float InDamage);

	inline bool IsAlive(){ return HealthPoint > 0; }
	inline const float GetHealthPoint() const { return HealthPoint; }
	inline const float GetAttackPower() const { return AttackPower; }
	inline const int GetGold() const { return Gold; }
	inline void SetHealthPoint(float InHealPoint)
	{
		HealthPoint = InHealPoint;
		if (HealthPoint > MaxHealth)
		{
			HealthPoint = MaxHealth;
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
	std::string Name = "╬вем";
	float HealthPoint = 100.0f;
	float AttackPower = 10.0f;
	float MaxHealth = 100.0f;
	int Gold;
};

