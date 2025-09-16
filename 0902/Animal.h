#pragma once
#include <string>
class Animal
{
public:
	void Move();
	void Eat();
	void Sleep();
	void ShowInfo();

	inline const std::string& GetName() const { return Name; }
	inline const float GetEnergy() const { return Energy; }
	inline const float GetAge() const { return Age; }
	Animal(std::string InName);

protected:
	inline void SetEnergy(float InEnergy)
	{
		if (InEnergy < 0)
		{
			Energy = 0.0f;
		}
		else if (InEnergy > 1.0f)
		{
			Energy = 1.0f;
		}
		else
		{
			Energy = InEnergy;
		}
	}
	inline void SetAge(float InAge)
	{
		Age = InAge;
	}
	std::string Name;
	float Energy = 1.0f;
	int Age = 0;
};

