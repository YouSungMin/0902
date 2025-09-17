#pragma once
#include "Animal.h"

class Tiger : public Animal	// Tiger는 Animal을 모두 상속 받았다.
{
public:
	void Hunt();
	virtual void Move() override;
public:
	Tiger() = default;
	Tiger(std::string InName)
		: Animal(InName)
	{

	}
	virtual ~Tiger(){};
};