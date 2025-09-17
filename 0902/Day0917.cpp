#include "Day0917.h"
#include "Tiger.h"
#include "Hawk.h"
#include "Bird.h"
#include "Cat.h"
#include "Shape.h"

void Day0917::TestPolymorphism()
{
	Tiger* pTiger = new Tiger("ȣ����");
	Hawk* pHawk = new Hawk("��");

	printf("ȣ���� �̵�\n");
	pTiger->Move();
	printf("���� �̵�\n");
	pHawk->Move();

	printf("���� �̵�\n");
	Animal* pAnimal = pTiger;
	pAnimal->Move(); // Animal�� Move�� �����

	Tiger* pTempTiger = dynamic_cast<Tiger*>(pAnimal);
	if (pTempTiger == nullptr)
	{
		// pAnimal�� Tiger*�� �ƴϴ�.
	}
	else
	{
		// pAnimal�� ����� �ּҴ� Tiger�� �ּҰ� �´�.
		pTempTiger->Hunt();
	}

	// pAnimal->Hunt(); // ��� �Ұ���
	
	delete pTiger;
	pTiger = nullptr;
	delete pHawk;
	pHawk = nullptr;
}

void Day0917::TestPractice1()
{
	Animal* Animals[4];

	Animals[0] = new Tiger("ȣ����");
	Animals[1] = new Hawk("��");
	Animals[2] = new Bird("��");
	Animals[3] = new Cat("�����");

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
	//};	// ���� enum�� ������ �����̱� ������ �̸��� ��ġ�� �ȵ�

	Color myColor = Green;
	Fruit myFruit = Orange;
	if (myColor == myFruit)
	{
		// �������δ� ���� �ȵ����� ���������� ����� ��
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
		Red = 0,	// TrafficLight2�ȿ� �ִ� Red�� ������ �̸��� ��ġ�� �ʴ´�.
		Yellow,
		Green
	};
	Color2 myColor2 = Color2::Red;
	Fruit2 myFruit2 = Fruit2::Apple;
	//if (myColor2 == myFruit2)
	//{
	//	// ���������� ����.
	//}
	//int Number = myColor2;	// �Ͻ��� ĳ������ ����
	int Number = static_cast<int>(myColor2);	// ����� ĳ������ �ʼ�

	// uint8_t�� ����Ϸ��� #include <stdint.h>�� �ʿ�

	PlayerState state = PlayerState::None;
	state = static_cast<PlayerState>(static_cast<int>(state) | static_cast<int>(PlayerState::OnGround));
	state = state | PlayerState::OnGround;	// ��ɾ� �����ε��� �ؾ� ����
}
