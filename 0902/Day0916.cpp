#include "Day0916.h"
#include "Car.h"
#include "Animal.h"
#include "Tiger.h"
#include "Bird.h"
#include "Cat.h"


//Day0916::Day0916()
//{
//}
//
//Day0916::~Day0916()
//{
//}

void Day0916::ClassInstance()
{
	Car myCar("지역변수");
	myCar.Accel();

	Car* pCar = new Car("동적할당");
	pCar->HandleTurn();
	delete pCar;
	pCar = nullptr;
}

void Day0916::ClassInstance2()
{
	Animal Panda("Panda");
	Panda.Move();
	Panda.Eat();
	Panda.Sleep();
	Panda.ShowInfo();

	int Age = Panda.GetAge();
	const std::string& Name = Panda.GetName();
}

void Day0916::TestTiger()
{
	Tiger tiger = Tiger("호식이");
	tiger.Move();
	tiger.Hunt();
	tiger.ShowInfo();
}

void Day0916::TestBird()
{
	Bird bird = Bird("짹짹이");
	bird.Move();
	bird.Fly();
	bird.ShowInfo();
}

void Day0916::TestCat()
{
	Cat cat = Cat("나비");
	cat.Move();
	cat.Jump();
	cat.ShowInfo();
}