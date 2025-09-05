#pragma once

void PrintHelloWorld();

/// <summary>
/// 두 파라미터를 더하는 함수
/// </summary>
/// <param name="Test1">더해질 첫번째 숫자</param>
/// <param name="Test2">더해질 두번째 숫자</param>
/// <returns></returns>
int Sum(int Test1, int Test2);

float Sum(float Test1, float Test2);

template <typename T>
T Add(T Number1, T Number2)
{
	return Number1 + Number2;
}

template <typename T>
T Minus(T Number1, T Number2)
{
	return Number1 - Number2;
}

template <typename T>
T Division(T Number1, T Number2)
{
	return Number1 / Number2;
}

template <typename T>
T Multiply(T Number1, T Number2)
{
	return Number1 * Number2;
}

/*int Multiply(int Number1, int Number2 = 2);

int Division(int Number1, int Number2);

int Minus(int Number1, int Number2);

int TestRecurcive(int Number)*/;

inline int Square(int Number)
{
	return Number * Number;
}