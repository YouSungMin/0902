#pragma once
#include <limits>
class Calculator
{	
public:
	template<typename T>
	T Add(const T& a, const T& b)
	{
		return a + b;
	}

	template<typename T>
	T Sub(const T& a, const T& b)
	{
		return a - b;
	}

	template<typename T>
	T Multiply(const T& a, const T& b)
	{
		return a * b;
	}

	template<typename T>
	T Divide(const T& a, const T& b)
	{
		return a / b;
	}

	template<typename T>
	bool Equal(const T& a, const T& b)
	{
		return (a == b);
	}

	template<>
	bool Equal(const float& a, const float& b)
	{
		float abs = (a - b) < 0 ? -(a - b) : (a - b);
		return abs < FLT_EPSILON;
	}

	template<>
	bool Equal(const double& a, const double& b)
	{
		double abs = (a - b) < 0 ? -(a - b) : (a - b);
		return abs < DBL_EPSILON;
	}
};

