#pragma once
#include <string>

int Practice0905_1(int Number1, int Number2);
int Practice0905_2(int Age);
float Practice0905_3(float Radius);
bool Practice0905_4(int Number);
int Practice0905_5(int Score);
int Practice0905_6_AddItem(int Inventory, int Enumber);
int Practice0905_6_RemoveItem(int Inventory, int Enumber);
void Practice0905_7(int Number);
template <typename T>
T Min(T Number1, T Number2)
{
	return Number1 > Number2 ? Number2 : Number1;
}
template <typename T>
T Max(T Number1, T Number2)
{
	return Number1 > Number2 ? Number1 : Number2;
}
template <typename T>
T Clamp(T Value, T Min, T Max)
{
	int tmp=0;

	if(Value < Min)
		tmp = Min;
	else if(Value > Max)
		tmp = Max;
	else if(Value > Min && Value < Max)
		tmp = Value;
	return tmp;
}
int factorial(int Number);

void Practice09061();
int Average(int Number1, int Number2, int Number3);

void Practice09062();
int DisCount(int RegularPrice, int DisCountPrice);

void Practice09063();
int RollDice();

void Practice09064();
char Grades(int Score);

void Practice09065();

//void Practice09066();
//int DigitSum(const std::string& Number);

void Practice09067();
int BinaryConversion(int Number);

void Practice09068();

void Practice09069();
int DamageCalculate();

void Practice090610();