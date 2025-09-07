#include "Practice.h"
#include <random>
#include <time.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <bitset>
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