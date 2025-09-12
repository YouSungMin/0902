#include "Practice0905.h"
#include "Practice0912.h"
#include <random>
#include <time.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <bitset>
#include "Practice0909.h"
int Practice0905_1(int Number1, int Number2)
{
	srand(time(NULL));
	int tmp;
	int RandomValue=0;

	if (Number1 > Number2) {
		tmp = Number1;
		Number1 = Number2;
		Number2 = tmp;
	}
	RandomValue = rand() % (Number2-Number1+1) +Number1 ;
	return RandomValue;
}
int Practice0905_2(int Age)
{
	return Age;
}
float Practice0905_3(float Radius)
{
	float PI = 3.1415;
	return Radius*Radius*PI;
}
bool Practice0905_4(int Number)
{
	if (Number % 2 != 0) 
		return true;
	else
		return false;
}
int Practice0905_5(int Score)
{
	enum {
		A,
		B,
		C,
		D,
		F
	};
	if(Score > 100 || Score < 0)
		return 5;
	else if(Score >= 90)
		return A;
	else if (Score >= 90)
		return B;
	else if (Score >= 90)
		return C;
	else if (Score >= 90)
		return D;
	else if (Score >= 90)
		return F;
}
int Practice0905_6_AddItem(int Inventory,int Enumber)
{
	return Inventory |= (1 << Enumber);
}
int Practice0905_6_RemoveItem(int Inventory, int Enumber)
{
	return Inventory &= (~(1 << Enumber));
}
void Practice0905_7(int Number)
{
	for (int i = 0; i < Number; i++) {
		for (int j = Number - 1; j > i; j--) {
			printf(" ");
		}
		for (int j = 0; j <= i * 2; j++) {
			printf("*");
		}
		printf("\n");
	}
}
int factorial(int Number)
{
		if (Number == 1)
			return Number;
		else
			return factorial(Number - 1) * Number;
}

void Practice09061()
{
	int Number1, Number2, Number3;
	printf("��հ� ���\n");
	printf("ù��° ���� :");
	std::cin>>Number1;
	printf("�ι�° ���� :");
	std::cin >> Number2;
	printf("����° ���� :");
	std::cin >> Number3;

	printf("�� ������ ��հ��� %d �Դϴ�.",Average(Number1,Number2,Number3));
}
int Average(int Number1, int Number2, int Number3)
{
	
	return (Number1+Number2+Number3)/3;
}

void Practice09062()
{
	int RegularPrice = 0;
	int DisCountPrice = 0;
	printf("������ �Է����ּ���: ");
	std::cin >> RegularPrice;
	while(true){
		printf("�������� �Է����ּ���: ");
		std::cin>>DisCountPrice;
		if (DisCountPrice > 100 || DisCountPrice <= 0)
			printf("�������� �߸��Է��ϼ̽��ϴ� �ٽ��Է����ּ���.");
		else
			break;
	}
	printf("���� %d ������ %d%% ������ %d���Դϴ�",RegularPrice,DisCountPrice,DisCount(RegularPrice, DisCountPrice));
}
int DisCount(int RegularPrice, int DisCountPrice)
{
	return RegularPrice * ((100 - DisCountPrice) * 0.01);
}

void Practice09063()
{
	char GameStart = 'y';
	
	while (true){
		printf("�ֻ����� �����ðڽ��ϱ�? (Yes = y): ");
		std::cin>>GameStart;
		if(GameStart != 'y')
			break;
		printf("�ֻ��������� %d�� ���Խ��ϴ�.!\n",RollDice());
	}
	printf("����");
}
int RollDice()
{
	int spot = 0;
	srand(time(NULL));
	return spot = rand() % 6 + 1;
}

void Practice09064()
{
	int score=0;

	while(true){
		printf("������ �Է����ּ��� : ");
		std::cin >> score;
		if(score > 100 || score < 0 )
			printf("������ �߸��Է��ϼ̽��ϴ� �ٽ��Է����ּ���.\n");
		else{
			printf("������ %c�Դϴ�.",Grades(score));
			break;
		}
	}
}
char Grades(int Score)
{
	char grades = NULL;
	switch (Score/10)
	{
	case 10:
	case 9:
		grades = 'A';
		break;
	case 8:
		grades = 'B';
		break;
	case 7:
		grades = 'C';
		break;
	case 6:
		grades = 'D';
		break;
	default:
		grades = 'F';
		break;
	}
	return grades;
}

void Practice09065()
{
	int Number1, Number2, Number3;
	int Tmp;
	printf("ù��° ���ڸ� �Է�: ");
	std::cin >> Number1;
	printf("�ι�° ���ڸ� �Է�: ");
	std::cin >> Number2;

	if (Number1 > Number2) {
		Tmp = Number1;
		Number1 = Number2;
		Number2 = Tmp;
	}

	printf("����° ���ڸ� �Է�: ");
	std::cin >> Number3;
	printf("%d", Clamp(Number3, Number1, Number2));
}

//void Practice09066()
//{
//	std::string Number = 0;
//	printf("���ڸ� �Է����ּ���: ");
//	std::cin>>Number;
//	printf("%d",DigitSum(Number));
//}
//int DigitSum(const std::string& Number)
//{
//	int sum = 0;
//	for (char c : Number)
//	{
//		if (std::isdigit(c)) // ������ ��츸 ó��
//		{
//			sum += (c - '0');
//		}
//	}
//	return sum;
//}

void Practice09067()
{
	int Number = 0;
	printf("���ڸ� �Է����ּ���: ");
	std::cin >> Number;
	printf("10���� : %d  , 2���� : %d ", Number, BinaryConversion(Number));
}
int BinaryConversion(int Number)
{
	int bin = 0;
	int powerOfTen = 1;
	while (Number > 0)
	{
		bin += (Number % 2) * powerOfTen;
		powerOfTen *= 10;
		Number /= 2;
	}
	return bin;
}

void Practice09068()
{
	int Money = 10000;
	int Betting = 0;
	int Slot1=0,Slot2=0,Slot3=0;
	srand(time(NULL));

	while (Money > 100)
	{
		printf("���� ���� �ݾ� : %d\n",Money);
		printf("������ �ݾ��� �Է����ּ��� : ");
		std::cin>>Betting;
		if(Money <Betting){
			printf("������ �ݾ׺��� ���ñݾ��� �� Ů�ϴ�\n");
			continue;
		}
		else if (Betting < 100) {
			printf("�ּ� ���ñݾ��� 100�Դϴ�.\n");
			continue;
		}
		Slot1 = rand() % 7 + 1;
		Slot2 = rand() % 7 + 1;
		Slot3 = rand() % 7 + 1;

		if (Slot1 == Slot2 && Slot2 == Slot3) {
			if (Slot1 == 7) {
				Money += Betting * 10000;
				printf("%d : %d : %d ���ϵ帳�ϴ� ������ �������ϴ�.\n", Slot1, Slot2, Slot3);
			}
			else {
				Money += Betting * 50;
				printf("%d : %d : %d ���ϵ帳�ϴ�. \n", Slot1, Slot2, Slot3);
			}
		}
		else
			printf("%d : %d : %d\n", Slot1, Slot2, Slot3);

	}
	printf("�����ݾ��� �����Ͽ� ������ ����˴ϴ�.");
}

//void Practice09069()
//{
//	int MonsterHP = 100;
//	int PlayerHP = 100;
//	int Damage = 0;
//	int Turn = 0;
//
//
//	srand(time(NULL));
//
//
//	while (MonsterHP > 0 && PlayerHP > 0) {
//		printf("���� �����Ϸ��� 1�� �Է����ּ���");
//		std::cin >> Turn;
//
//		Damage = DamageCalculate();
//		MonsterHP -= Damage;
//		printf("�÷��̾ %d�� �������� �������ϴ�.\n", Damage);
//		if (MonsterHP <= 0)
//		{
//			MonsterHP = 0;
//			printf("������ ü�� : %d\n", MonsterHP);
//			break;
//		}
//		printf("������ ü�� : %d\n", MonsterHP);
//
//		
//		Damage = DamageCalculate();
//		PlayerHP -= Damage;
//		printf("���Ͱ� %d�� �������� �������ϴ�.\n", Damage);
//		if(PlayerHP <= 0)
//			PlayerHP = 0;
//		else
//			printf("�÷��̾��� ü�� : %d\n", PlayerHP);
//	}
//	if (MonsterHP <= 0)
//		printf("�÷��̾� �¸�");
//	else
//		printf("�÷��̾� �й�");
//}
int DamageCalculate(float AttackPower)
{

	int Critical = 0;
	int Damage = 0;

	Damage = AttackPower;
	if (rand() % 10 == Critical) {
		Damage *= 2;
	}
	return Damage;
}

void Practice090610()
{
	enum Card
	{
		CardA,
		Card2,
		Card3,
		Card4,
		Card5,
		Card6,
		Card7,
		Card8,
		Card9,
		Card10,
		CardJ,
		CardQ,
		CardK,
		CardJoker,
		NumfCards
	};
	int Money = 10000;
	const int MinimumBet = 100;

	while(Money >= MinimumBet)
	{
		int CurrentBet = MinimumBet;
		printf("������ ���ּ���(100~%d)",Money);
		std::cin>>CurrentBet;
		printf("%d���� �����߽��ϴ�.",CurrentBet);
		Money -= CurrentBet;

		int Dealer1 = rand() % CardJoker;
		int Dealer2 = -1;
		while (Dealer2 != Dealer1)
		{
			Dealer2 = rand() % CardJoker;
		}
		int Dealer3 = -1;
		while (Dealer3 != Dealer1 && Dealer3 != Dealer2) {
			Dealer2 = rand() % CardJoker;
		}

		int JokerIndex = rand() % 3;

		switch (JokerIndex)
		{
		case 0:
			Dealer1 = CardJoker;
			break;
		case 1:
			Dealer2 = CardJoker;
			break;
		case 2:
			Dealer1 = CardJoker;
			break;
		default:
			break;
		}

		printf("ī�带 �����ϼ��� (0~2) : ");
		int PlayerInput = 0;
		std::cin>>PlayerInput;

		bool PlayerWin = false;
		printf("�÷��̾�� %d�� �����߽��ϴ�.\n", PlayerInput);
		switch (PlayerInput)
		{
		case 0:
			if (Dealer1 == CardJoker)
				PlayerWin = true;
			break;
		case 1:
			if (Dealer2 == CardJoker)
				PlayerWin = true;
			break;
		case 2:
			if (Dealer3 == CardJoker)
				PlayerWin = true;
			break;
		default:
			break;
		}
		if(PlayerWin){
			Money += MinimumBet * 2;
			printf("��Ŀ�� �̾ҽ��ϴ�. ����� ���� �ݾ��� %d �Դϴ�,\n", Money);
		}
		else
		{
			printf("����� ����ī��� ��Ŀ�� �ƴմϴ�.\n �ٽõ��� (0=yes, 1= no)");
			int Select = -1;
			std::cin >> Select;
			if (Select == 0)
			{
				int PlayerSecondInput = -1;
				switch (PlayerInput)
				{
				case 0:
					{
						do
						{
							printf("���� ī���� �ϳ��� �����ϼ���(1,2): ");
							std::cin>>PlayerSecondInput;
						}while(PlayerSecondInput != 1 && PlayerSecondInput != 2);
						break;
					}
				case 1:
					{
					do
					{
						printf("���� ī���� �ϳ��� �����ϼ���(0,2): ");
						std::cin >> PlayerSecondInput;
					} while (PlayerSecondInput != 0 && PlayerSecondInput != 2);
						break;
					}
				case 2:
					{
					do
					{
						printf("���� ī���� �ϳ��� �����ϼ���(0,1): ");
						std::cin >> PlayerSecondInput;
					} while (PlayerSecondInput != 0 && PlayerSecondInput != 1);
						break;
					}
				default:
					break;
				}
			}
		}
	}
}
