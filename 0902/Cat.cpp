#include "Cat.h"

void Cat::Jump()
{
	printf("[%s]�� ������ �մϴ�.\n", Name.c_str());
	SetEnergy(Energy - 0.1f);
	printf("[%s] : �������� 10% �����մϴ�.\n", Name.c_str());
}

void Cat::Move()
{
	printf("[%s]�� �ֿ��ϸ� �����Դϴ�.\n", Name.c_str());
}
