#include "Position.h"
Position operator+(const Position& a, const Position& b)
{
	return Position(a.x + b.x, a.y + b.y);
}

Position operator-(const Position& a, const Position& b)
{
	return Position(a.x - b.x, a.y - b.y);
}

bool operator==(const Position& a, const Position& b)
{
	return (a.x == b.x) && a.y == b.y;
}

bool operator!=(const Position& a, const Position& b)
{
	//return (a.x != b.x) || (a.y != b.y);
	return !(a == b);
}