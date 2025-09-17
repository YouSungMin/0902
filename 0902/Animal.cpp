#include "Animal.h"
#include <stdio.h>



Animal::Animal(std::string InName)
	:Name(InName)
{
	printf("%s�� �����Ǿ����ϴ�.\n",Name.c_str());
}

//void Animal::Move()
//{
//	if (Energy < 0.1f)
//	{
//		printf("%s�� ���� ��� ������ �� �����ϴ�.\n",Name.c_str());
//	}
//	else
//	{
//		SetEnergy(Energy - 0.1f);
//		printf("%s�� �̵��߽��ϴ�. ���� ������ : %.0f%%\n", Name.c_str(), Energy * 100);
//	}
//}

void Animal::Eat()
{
	SetEnergy(Energy + 0.1f);
	if (Energy > 1.0f)
	{
		SetEnergy(1.0f);
	}
	printf("%s�� �Ծ����ϴ�. ���� ������ : %.0f%%\n", Name.c_str(),Energy*100);
}

void Animal::Sleep()
{
	SetAge(Age);
	SetEnergy(1.0f);
	printf("%s�� ���� ����ϴ�. ���� ������ : %.0f%%\n", Name.c_str(),Energy*100);
}

void Animal::ShowInfo()
{
	printf("%s�� ����\n", Name.c_str());
	printf("���� : %d, ������ : %.0f%%\n",Age,Energy*100);
}
