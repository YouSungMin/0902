#pragma once
struct Position
{
	int x = 0;
	int y = 0;

	Position() = default; // 자동으로 생성되는 기본생성자와 같다 
	Position(int InX, int InY)
		:x(InX),y(InY)
	{
		//추가 계산이 필요한 경우 , 새로 대입 
	}
	//Position operator+(const Position& other) const
	//{
	//	return Position(
	//		x + other.x,
	//		y + other.y);
	//}

	//Position operator-(const Position& other) const
	//{
	//	return Position(
	//		x - other.x,
	//		y - other.y);
	//}
};

// 이항연산자는 구조체 밖에 쓰는 것이 일반적이다.
Position operator+(const Position& a, const Position& b);

Position operator-(const Position& a, const Position& b);

bool operator==(const Position& a, const Position& b);

bool operator!=(const Position& a, const Position& b);