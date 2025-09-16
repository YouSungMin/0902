#include "Day0916.h"
#include "Car.h"
#include "Animal.h"


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
}
