#pragma once
#include <type_traits>

class Day0917
{
public:
	void TestPolymorphism();
	void TestPractice1();
	void TestEnumClass();

private:
	static constexpr int Size = 5;
	int Test[Day0917::Size];
};

enum class PlayerState : uint8_t
{
	None = 0,
	OnGround = 1 << 0,
	Jumping = 1 << 1,
	Stunned = 1 << 2,
	Poisoned = 1 << 3,
	Invisible = 1 << 4,
	Invincible = 1 << 5,
	Flying = 1 << 6
};

// PlayerState의 원래 타입을 StateType이라고 하자고 정하는 것
// using StateType = uint8_t;
// std::underlying_type_t는 #include <type_traits> 필요

using StateType = std::underlying_type_t<PlayerState>;

inline PlayerState operator|(PlayerState Left, PlayerState Right)
{
	return static_cast<PlayerState>(static_cast<StateType>(Left) | static_cast<StateType>(Right));
};

inline PlayerState operator&(PlayerState Left, PlayerState Right)
{
	return static_cast<PlayerState>(static_cast<StateType>(Left) & static_cast<StateType>(Right));
};

inline PlayerState operator~(PlayerState Value)
{
	return static_cast<PlayerState>(!static_cast<StateType>(Value));
};

inline PlayerState& operator|=(PlayerState& Left, PlayerState Right)
{
	Left = Left | Right;
	return Left;
};

inline PlayerState& operator&=(PlayerState& Left, PlayerState Right)
{
	Left = Left & Right;
	return Left;
};