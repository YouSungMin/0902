#pragma once
#include <string>
class Animal
{
public:
	std::string Name;
	float Energy = 1.0f;
	int Age = 0;

	Animal(std::string InName);

	void Move();
	void Eat();
	void Sleep();
	void ShowInfo();
};

