#pragma once
#include <iostream>
#include <type_traits>
#include <limits>
template <typename T>
struct Coordinate
{
	T x;
	T y;

	Coordinate() : x{}, y{}
	{
	}
	Coordinate(T InX, T InY)
		: x(InX), y(InY)
	{
	}

	void Print() const
	{
		if constexpr (std::is_same_v<T, int>)
		{
			printf("(%d, %d)\n",x,y);
		}
		else if constexpr (std::is_same_v<T, float>)
		{
			printf("(%f, %f)\n",x,y);
		}
		else
		{
			std::cout <<"("<< x << ", " << y <<")" << std::endl;
		}
	}

	Coordinate& operator+=(const Coordinate& other)
	{
		x += other.x;
		y += other.y;
		return *this;
	}
	Coordinate& operator-=(const Coordinate& other)
	{
		x -= other.x;
		y -= other.y;
		return *this;
	}
};

template <typename T>
T Abs(T InValue)
{
	return (InValue < 0 ) ? -InValue : InValue;
}

//// 이항연산자는 구조체 밖에 쓰는 것이 일반적이다.
template <typename T>
Coordinate<T> operator+(const Coordinate<T>& a, const Coordinate<T>& b)
{
	return Coordinate<T>(a.x + b.x, a.y + b.y);
}

template <typename T>
Coordinate<T> operator-(const Coordinate<T>& a, const Coordinate<T>& b)
{
	return Coordinate<T>(a.x - b.x, a.y - b.y);
}

template <typename T>
Coordinate<T> operator*(const Coordinate<T>& a, const Coordinate<T>& b)
{
	return Coordinate<T>(a.x * b.x, a.y * b.y);
}

//template <typename T>
//bool operator==(const Coordinate<T>& a, const Coordinate<T>& b)
//{
//	return (a.x == b.x) && a.y == b.y;
//}
//
//template <>
//bool operator==(const Coordinate<float>& a, const Coordinate<float>& b)
//{
//	return Abs(a.x - b.x) <= FLT_EPSILON && Abs(a.y - b.y) <= FLT_EPSILON;
//}
//template <>
//bool operator==(const Coordinate<double>& a, const Coordinate<double>& b)
//{
//	return Abs(a.x - b.x) <= DBL_EPSILON && Abs(a.y - b.y) <= DBL_EPSILON;
//}

template <typename T>
bool operator!=(const Coordinate<T>& a, const Coordinate<T>& b)
{
	return !(a == b);
}

//Coordinate operator+(const Coordinate& a, const Coordinate& b);
//Coordinate operator-(const Coordinate& a, const Coordinate& b);
//bool operator==(const Coordinate& a, const Coordinate& b);
//bool operator!=(const Coordinate& a, const Coordinate& b);