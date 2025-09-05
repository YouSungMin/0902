#pragma once

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
