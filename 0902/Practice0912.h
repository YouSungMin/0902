#pragma once
#include <string>
#include <random>
//구조체는 헤더에 선언 
struct Enemy
{
	std::string Name = "고블린";
	float Health = 100.0f;
	float AttackPower = 10.0f;
	int DropGold = 100;

	Enemy()
	{
		//정해진 값이 아닌 값으로 초기화 할 때 생성자 사용
		DropGold = rand() % 100 +50;
	}
	Enemy(std::string _Name)
	{
		Name = _Name;
	}
	Enemy(float Modifier)
	{
		Health = Modifier *10;
		AttackPower = Modifier*5;
		DropGold = static_cast<int>(Modifier*100.0f);
	}
	Enemy(std::string _Name, float _Health, float _AttackPower, int _DropGold)
		: Name(_Name), Health(_Health), AttackPower(_AttackPower), DropGold(_DropGold)	// 만들때부터 값이 박힌체로 만들어진다.
	{
		// 여기서 쓰는 것은 만들어 놓고 고쳐 쓰는 것
		//Name = _Name;
		//Health = _Health;
		//AttackPower = _AttackPower;
		//DropGold = _DropGold;
	}
	Enemy operator+(const Enemy& other) const	// <- 마지막에 붙은 const는 이 함수에서 맴버 변수의 수정을 안하겠다는 의미
	{
		// 이름은 왼쪽것을 사용
		// Health는 합치고
		// AttackPower는 양쪽다 70%사용
		// DropGold는 합치기
		return Enemy(
			Name + "(합체)",
			Health + other.Health,
			AttackPower * 0.7f + other.AttackPower * 0.7f,
			DropGold + other.DropGold);
	}
	Enemy operator-(const Enemy& other) const
	{
		return Enemy(
			Name + "(합체-)",
			Health - other.Health *0.5f,
			AttackPower - other.AttackPower * 0.5f,
			DropGold - static_cast<int>(other.DropGold *0.5f));
	}

	Enemy operator*(float Multiplier) const
	{
		return Enemy(
			Name + "(합체*)",
			Health * Multiplier,
			AttackPower * Multiplier,
			DropGold * static_cast<int>(Multiplier));
	}

};

struct Weapon
{
	std::string Name = "무기이름";
	float AttackPower = 10.0f;
	int Durability = 100;
};

struct Armor
{
	std::string Name = "방어구이름";
	float DefensePower = 10.0f;
	int Durability = 100;
};
void Day0912_Struct();
void PrintEnemy(const Enemy* pEnemy);

void Day0912_OperatorOverloading();



//struct Monster
//{
//	float Health = 30.0f;
//	float AttackPower = 5.0f;
//	int Item = 0;
//
//	Monster()
//	{
//		Health = rand() % 50 + 30;
//		AttackPower = rand() % (15 - 5 + 1) + 5;
//		Item = rand() % 15 +5;
//	}
//};

//struct Player
//{
//	int x = 0;
//	int y = 0;
//	float Health = 100.0f;
//	float AttackPower = 10.0f;
//	int Item = 0;
//
//	Player(int PositionX, int PositionY)
//	{
//		x = PositionX;
//		y = PositionY;
//	}
//};

void Day0912_Position();
