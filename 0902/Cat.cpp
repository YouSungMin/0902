#include "Cat.h"

void Cat::Jump()
{
	printf("[%s]가 점프를 합니다.\n", Name.c_str());
	SetEnergy(Energy - 0.1f);
	printf("[%s] : 에너지가 10% 감소합니다.\n", Name.c_str());
}
