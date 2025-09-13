#include "Practice0913.h"
#include <iostream>

void Practice09131()
{
	Date* InputDate = new Date;
	std::string Week = "";
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
		Week = "월요일";
		break;
	case 1:
		Week = "화요일";
		break;
	case 2:
		Week = "수요일";
		break;
	case 3:
		Week = "목요일";
		break;
	case 4:
		Week = "금요일";
		break;
	case 5:
		Week = "토요일";
		break;
	case 6:
		Week = "일요일";
		break;
	default:
		break;
	}
	// 4의배수는 윤년 100의 배수는 윤년이아님 400의 배수는 윤년

	printf("1년 1월 1일에서 %d년 %d월 %d일까지 [%d]일이 지났고 요일은 %s입니다",
	InputDate->year, InputDate->month, InputDate->day, TotalDays,Week); //출력창에서 Week가 깨짐 값은 제대로 들어가 있음 
}

int DateCalculate(Date* InputDate)
{
	int TotalDays = 0; //지난 일수를 담을 변수 

	int DaysInMonths[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; // 1~12월의 일수 배열 

	TotalDays += 365*(InputDate->year-1); // 년수계산 후 일수 추가 
	for (int i = 1; i < InputDate->year; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) //윤년 계산 조건문
			TotalDays++;
	}

	if ((InputDate->year % 4 == 0 && InputDate->year % 100 != 0) || (InputDate->year % 400 == 0)) //해당년도가 윤년일 경우 2월 29일로 변경 
		DaysInMonths[1] = 29;

	for (int i = 0; i < InputDate->month-1; i++)
	{
		TotalDays += DaysInMonths[i]; // 입력 월 수가 5월일 경우 4월 까지의 일수 더하기
	}
	TotalDays += InputDate->day; // 5월의 일수를 마지막에 더하기 
	
	return TotalDays;
}
