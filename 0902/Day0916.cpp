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
	Car myCar("��������");
	myCar.Accel();

	Car* pCar = new Car("�����Ҵ�");
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
