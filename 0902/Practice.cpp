#include "Practice.h"
#include <random>
#include <time.h>
#include <stdio.h>
#include <iostream>
int Practice0905_1(int Number1, int Number2)
{
	srand(time(NULL));
	int tmp;
	int RandomValue=0;

	if (Number1 > Number2) {
		tmp = Number1;
		Number1 = Number2;
		Number2 = tmp;
	}
	RandomValue = rand() % (Number2-Number1+1) +Number1 ;
	return RandomValue;
}
int Practice0905_2(int Age)
{
	return Age;
}
float Practice0905_3(float Radius)
{
	float PI = 3.1415;
	return Radius*Radius*PI;
}
bool Practice0905_4(int Number)
{
	if (Number % 2 != 0) 
		return true;
	else
		return false;
}
int Practice0905_5(int Score)
{
	enum {
		A,
		B,
		C,
		D,
		F
	};
	if(Score > 100 || Score < 0)
		return 5;
	else if(Score >= 90)
		return A;
	else if (Score >= 90)
		return B;
	else if (Score >= 90)
		return C;
	else if (Score >= 90)
		return D;
	else if (Score >= 90)
		return F;
}
int Practice0905_6_AddItem(int Inventory,int Enumber)
{
	return Inventory |= (1 << Enumber);
}
int Practice0905_6_RemoveItem(int Inventory, int Enumber)
{
	return Inventory &= (~(1 << Enumber));
}
void Practice0905_7(int Number)
{
	for (int i = 0; i < Number; i++) {
		for (int j = Number - 1; j > i; j--) {
			printf(" ");
		}
		for (int j = 0; j <= i * 2; j++) {
			printf("*");
		}
		printf("\n");
	}
}

int factorial(int Number)
{
		if (Number == 1)
			return Number;
		else
			return factorial(Number - 1) * Number;
}


