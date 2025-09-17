#pragma once
#include "Animal.h"
class Bird : public Animal
{
public:
	void Fly();
	virtual void Move() override;
public:
	Bird() = default;
	Bird(std::string InName)
		: Animal(InName)
	{

	}
	virtual ~Bird(){};
};

