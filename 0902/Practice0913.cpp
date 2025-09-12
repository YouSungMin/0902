#include "Practice0913.h"
#include <iostream>

void Practice09131()
{
	Date* InputDate = new Date;
	char Week = '\0';
	int TotalDays = 0;
	printf("������ �Է����ּ��� : ");
	std::cin>> InputDate->year;
	printf("���� �Է����ּ��� : ");
	std::cin>> InputDate->month;
	printf("�ϸ� �Է����ּ��� : ");
	std::cin>> InputDate->day;

	
	TotalDays = DateCalculate(InputDate);

	switch (TotalDays % 7)
	{
	case 0:
		Week = '��';
	case 1:
		Week = 'ȭ';
	case 2:
		Week = '��';
	case 3:
		Week = '��';
	case 4:
		Week = '��';
	case 5:
		Week = '��';
	case 6:
		Week = '��';
	default:
		break;
	}
	// 4�ǹ���� ���� 100�� ����� �����̾ƴ� 400�� ����� ����

	printf("1�� 1�� 1�Ͽ��� %d�� %d�� %d�ϱ��� [%d]���� ������ ������ %c�Դϴ�",
	InputDate->year, InputDate->month, InputDate->day, TotalDays,Week);
}

int DateCalculate(Date* InputDate)
{
	int TotalDays = 0;

	int DaysInMonths[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

	TotalDays += 365*(InputDate->year-1);
	for (int i = 1; i < InputDate->month - 1; i++)
	{
		TotalDays += DaysInMonths[i-1];
	}
	TotalDays += InputDate->day - 1;
	
	return TotalDays;
}
