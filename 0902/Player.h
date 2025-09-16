#pragma once
#include "Actor.h"
class Player : public Actor
{
public:
	inline const int GetPositionX() const { return PositionX; }
	inline const int GetPositionY() const { return PositionY; }
	inline void SetPositionX(int InPositionX)
	{
		PositionX = InPositionX;
	}
	inline void SetPositionY(int InPositionY)
	{
		PositionY = InPositionY;
	}
	Player() = default;
	Player(int InPositionX, int InPositionY)
		:PositionX(InPositionX),PositionY(InPositionY)
	{
		HealthPoint = 100.0f;
		AttackPower = 10.0f;
		Gold = 0;
	}
private:
	int PositionX = 0;
	int PositionY = 0;
};

