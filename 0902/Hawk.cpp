#include "Hawk.h"

void Hawk::Move()
{
	//Animal::Move(); // 부모의 Animal의 Move 실행 
	printf("[%s]가 펄럭하고 납니다.\n", Name.c_str());
}

void Hawk::Fly()
{
	printf("[%s]가 납니다.", Name.c_str());
}
