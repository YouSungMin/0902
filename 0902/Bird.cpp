#include "Bird.h"

void Bird::Fly()
{
	printf("[%s]가 하늘을 납니다.\n", Name.c_str());
	SetEnergy(Energy - 0.5f);
	printf("[%s] : 에너지가 50% 감소합니다.\n", Name.c_str());
}
