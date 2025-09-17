#pragma once
#include "Animal.h"
class Cat : public Animal
{
public:
	void Jump();
	virtual void Move()override;
public:
	Cat() = default;
	Cat(std::string InName)
		: Animal(InName)
	{

	}
};

