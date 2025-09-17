#include "Animal.h"
#include <stdio.h>



Animal::Animal(std::string InName)
	:Name(InName)
{
	printf("%s가 생성되었습니다.\n",Name.c_str());
}

//void Animal::Move()
//{
//	if (Energy < 0.1f)
//	{
//		printf("%s가 힘이 없어서 움직일 수 없습니다.\n",Name.c_str());
//	}
//	else
//	{
//		SetEnergy(Energy - 0.1f);
//		printf("%s가 이동했습니다. 남은 에너지 : %.0f%%\n", Name.c_str(), Energy * 100);
//	}
//}

void Animal::Eat()
{
	SetEnergy(Energy + 0.1f);
	if (Energy > 1.0f)
	{
		SetEnergy(1.0f);
	}
	printf("%s가 먹었습니다. 남은 에너지 : %.0f%%\n", Name.c_str(),Energy*100);
}

void Animal::Sleep()
{
	SetAge(Age);
	SetEnergy(1.0f);
	printf("%s가 잠을 잤습니다. 남은 에너지 : %.0f%%\n", Name.c_str(),Energy*100);
}

void Animal::ShowInfo()
{
	printf("%s의 정보\n", Name.c_str());
	printf("나이 : %d, 에너지 : %.0f%%\n",Age,Energy*100);
}
