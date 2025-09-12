#include "Practice0913.h"
#include <iostream>

void Practice09131()
{
	Date* InputDate = new Date;
	char Week = '\0';
	int TotalDays = 0;
	printf("연도를 입력해주세요 : ");
	std::cin>> InputDate->year;
	printf("월을 입력해주세요 : ");
	std::cin>> InputDate->month;
	printf("일를 입력해주세요 : ");
	std::cin>> InputDate->day;

	
	TotalDays = DateCalculate(InputDate);

	switch (TotalDays % 7)
	{
	case 0:
		Week = '월';
	case 1:
		Week = '화';
	case 2:
		Week = '수';
	case 3:
		Week = '목';
	case 4:
		Week = '금';
	case 5:
		Week = '토';
	case 6:
		Week = '일';
	default:
		break;
	}
	// 4의배수는 윤년 100의 배수는 윤년이아님 400의 배수는 윤년

	printf("1년 1월 1일에서 %d년 %d월 %d일까지 [%d]일이 지났고 요일은 %c입니다",
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
