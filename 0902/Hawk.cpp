#include "Hawk.h"

void Hawk::Move()
{
	//Animal::Move(); // �θ��� Animal�� Move ���� 
	printf("[%s]�� �޷��ϰ� ���ϴ�.\n", Name.c_str());
}

void Hawk::Fly()
{
	printf("[%s]�� ���ϴ�.", Name.c_str());
}
