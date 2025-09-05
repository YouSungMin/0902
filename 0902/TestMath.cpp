#include "TestMath.h"
#include <stdio.h>

void PrintHelloWorld()
{
	printf("Hello World\n");
}

//int Sum(int Test1, int Test2)
//{
//	return Test1 + Test2;
//}
//
//float Sum(float Test1, float Test2)
//{
//	return Test1 + Test2;
//}
//
//int Multiply(int Number1, int Number2)
//{
//	return Number1 * Number2;
//}
//
//int Division(int Number1, int Number2)
//{
//	return Number1 / Number2;
//}
//
//int Minus(int Number1, int Number2)
//{
//	return Number1 - Number2;
//}

int TestRecurcive(int Number)
{
	if (Number < 2)
	{
		return 1;
	}
	printf("Recurcive : %d\n",Number);
	return TestRecurcive(Number-1);
}

