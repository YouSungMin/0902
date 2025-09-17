#pragma once
#include "Animal.h"

class Tiger : public Animal	// Tiger�� Animal�� ��� ��� �޾Ҵ�.
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