#include "Bird.h"

void Bird::Fly()
{
	printf("[%s]�� �ϴ��� ���ϴ�.\n", Name.c_str());
	SetEnergy(Energy - 0.5f);
	printf("[%s] : �������� 50% �����մϴ�.\n", Name.c_str());
}
