#include "Day0917.h"
#include "Tiger.h"
#include "Hawk.h"
#include "Bird.h"
#include "Cat.h"
#include "Shape.h"

void Day0917::TestPolymorphism()
{
	Tiger* pTiger = new Tiger("호식이");
	Hawk* pHawk = new Hawk("매");

	printf("호식이 이동\n");
	pTiger->Move();
	printf("매형 이동\n");
	pHawk->Move();

	printf("동물 이동\n");
	Animal* pAnimal = pTiger;
	pAnimal->Move(); // Animal의 Move가 실행됨

	Tiger* pTempTiger = dynamic_cast<Tiger*>(pAnimal);
	if (pTempTiger == nullptr)
	{
		// pAnimal은 Tiger*가 아니다.
	}
	else
	{
		// pAnimal에 저장된 주소는 Tiger의 주소가 맞다.
		pTempTiger->Hunt();
	}

	// pAnimal->Hunt(); // 사용 불가능
	
	delete pTiger;
	pTiger = nullptr;
	delete pHawk;
	pHawk = nullptr;
}

void Day0917::TestPractice1()
{
	Animal* Animals[4];

	Animals[0] = new Tiger("호랑이");
	Animals[1] = new Hawk("매");
	Animals[2] = new Bird("새");
	Animals[3] = new Cat("고양이");

	for (int i = 0; i < 4; i++)
	{
		Animals[i]->Move();
	}
	for (int i = 0; i < 4; i++)
	{
		delete Animals[i];
		Animals[i] = nullptr;
	}

}

void Day0917::TestEnumClass()
{
	enum Color
	{
		Red = 0,
		Green,
		Blue
	};
	enum Fruit
	{
		Apple = 0,
		Orange,
		Banana
	};
	//enum TrafficLight
	//{
	//	Red, Yellow, Green
	//};	// 기존 enum은 범위가 전역이기 때문에 이름이 겹치면 안됨

	Color myColor = Green;
	Fruit myFruit = Orange;
	if (myColor == myFruit)
	{
		// 논리적으로는 말이 안되지만 문법적으로 허용이 됨
	}

	enum class Color2
	{
		Red = 0,
		Green,
		Blue
	};
	enum class Fruit2
	{
		Apple = 0,
		Orange,
		Banana
	};
	enum class TrafficLight2
	{
		Red = 0,	// TrafficLight2안에 있는 Red기 때문에 이름이 겹치지 않는다.
		Yellow,
		Green
	};
	Color2 myColor2 = Color2::Red;
	Fruit2 myFruit2 = Fruit2::Apple;
	//if (myColor2 == myFruit2)
	//{
	//	// 문법적으로 금지.
	//}
	//int Number = myColor2;	// 암시적 캐스팅은 금지
	int Number = static_cast<int>(myColor2);	// 명시적 캐스팅이 필수

	// uint8_t를 사용하려면 #include <stdint.h>가 필요

	PlayerState state = PlayerState::None;
	state = static_cast<PlayerState>(static_cast<int>(state) | static_cast<int>(PlayerState::OnGround));
	state = state | PlayerState::OnGround;	// 명령어 오버로딩을 해야 가능
}
