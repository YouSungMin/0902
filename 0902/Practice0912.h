#pragma once
#include <string>
#include <random>
//����ü�� ����� ���� 
struct Enemy
{
	std::string Name = "���";
	float Health = 100.0f;
	float AttackPower = 10.0f;
	int DropGold = 100;

	Enemy()
	{
		//������ ���� �ƴ� ������ �ʱ�ȭ �� �� ������ ���
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
		DropGold = static_cast<int>(Modifier*100.f);
	}
	Enemy(std::string _Name, float _Health, float _AttackPower, int _DropGold)
		: Name(_Name), Health(_Health), AttackPower(_AttackPower), DropGold(_DropGold)	// ���鶧���� ���� ����ü�� ���������.
	{
		// ���⼭ ���� ���� ����� ���� ���� ���� ��
		//Name = _Name;
		//Health = _Health;
		//AttackPower = _AttackPower;
		//DropGold = _DropGold;
	}
	Enemy operator+(const Enemy& other) const	// <- �������� ���� const�� �� �Լ����� �ɹ� ������ ������ ���ϰڴٴ� �ǹ�
	{
		// �̸��� ���ʰ��� ���
		// Health�� ��ġ��
		// AttackPower�� ���ʴ� 70%���
		// DropGold�� ��ġ��
		return Enemy(
			Name + "(��ü)",
			Health + other.Health,
			AttackPower * 0.7f + other.AttackPower * 0.7f,
			DropGold + other.DropGold);
	}
	Enemy operator-(const Enemy& other) const
	{
		return Enemy(
			Name + "(��ü-)",
			Health - other.Health *0.5,
			AttackPower - other.AttackPower * 0.5f,
			DropGold - other.DropGold *0.5);
	}

	Enemy operator*(float Multiplier) const
	{
		return Enemy(
			Name + "(��ü*)",
			Health * Multiplier,
			AttackPower * Multiplier,
			DropGold *Multiplier);
	}

};

struct Weapon
{
	std::string Name = "�����̸�";
	float AttackPower = 10.0f;
	int Durability = 100;
};

struct Armor
{
	std::string Name = "���̸�";
	float DefensePower = 10.0f;
	int Durability = 100;
};
void Day0912_Struct();
void PrintEnemy(const Enemy* pEnemy);

void Day0912_OperatorOverloading();

struct Position 
{
	int x = 0;
	int y = 0;
	int Health = 100;

	Position(int PositionX, int PositionY)
	{
		x = PositionX;
		y = PositionY;
	}
	Position operator+(const Position& other) const
	{
		return Position(
			x + other.x,
			y + other.y);
	}

	Position operator-(const Position& other) const
	{
		return Position(
			x - other.x,
			y - other.y);
	}
};

struct Monster
{
	float Health = 30.0f;
	float AttackPower = 5.0f;
	int Item = 0;

	Monster()
	{
		srand(time(NULL));
		Health = rand() % 50 + 30;
		AttackPower = rand() % (15 - 5 + 1) + 5;
		Item = rand() % 15 +5;
	}
};

struct Player
{
	int x = 0;
	int y = 0;
	float Health = 100.0f;
	float AttackPower = 10.0f;
	int Item = 0;

	Player(int PositionX, int PositionY)
	{
		x = PositionX;
		y = PositionY;
	}
};

void Day0912_Position();
