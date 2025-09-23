#include "Day0923.h"
#include "Coordinate.h"
#include "Calculator.h"
#include <stdio.h>
#include <vector>
#include <algorithm>

void Day0923::TestTemplateClass()
{
	Coordinate<int> PositionInt(1, 3);
	Coordinate<float> PositionFloat(0.05f, 5.7f);

	printf("PositionInt : %d, %d\n", PositionInt.x, PositionInt.y);
	printf("PositionFloat : %f, %f\n", PositionFloat.x, PositionFloat.y);
	PositionInt.Print();
	PositionFloat.Print();

	Coordinate<std::string> PositionString("A", "B");
	PositionString.Print();
}

void Day0923::TestCalculator()
{
	Calculator Calc;
	int ResultInt = Calc.Add(1,3);
	float ResultFloat = Calc.Add(2.5f,7.3f);
	Coordinate<int> ResultCoord = Calc.Add(Coordinate<int>(1, 2), Coordinate<int>(3, 4));

	ResultInt = Calc.Multiply(5, 3);
	ResultFloat = Calc.Multiply(3.5f, 2.0f);
	ResultCoord = Calc.Multiply(Coordinate<int>(1, 2), Coordinate<int>(3, 4));

	bool ResultBool =  Calc.Equal(9.8f, ResultFloat);
}

void Day0923::TestVector()
{
	// #include <vector> �ʼ�
	std::vector<int> Scores;	// int�迭 Scores�� ����
	Scores.reserve(5);			// ���� ����� ������ ����Ǵ� �ִ� ũ�⸦ ���� ���� ����

	Scores.push_back(10);		// vector�� �ڿ� �߰�
	Scores.push_back(20);
	Scores.push_back(30);

	// Ư�� ������ �ʱ�ȭ �� vector�� ����� ���� ��(3���� "����"���� �ʱ�ȭ�� vector)
	std::vector<std::string> Names(3, "����");

	printf("ù��° ���� : %d\n", Scores[0]);	// �迭 ����ϵ��� ���. �ٸ� ������ ����� ������.
	//printf("�׹�° ���� : %d\n", Scores[3]);	// ����
	printf("�ι�° ���� : %d\n", Scores.at(1));	// �ι�° ��ҿ� ����
	//printf("�׹�° ���� : %d\n", Scores.at(3));	// �׹�° ��ҿ� ����(=���ܸ� �߻�)
	printf("����° ���� : %d\n", Scores.back());		// ������ ��ҿ� ����
	printf("ù��° ���� : %d\n", Scores.front());	// ù��° ��ҿ� ����

	// �Ϲ����� ��ȸ ���
	printf("��� ���� : ");
	for (int i = 0; i < Scores.size(); i++)
	{
		printf("%d ", Scores[i]);
	}
	printf("\n");

	// �ݺ��ڸ� ���� ��ȸ ���
	printf("��� ���� : ");
	for (auto iter = Scores.begin(); iter != Scores.end(); iter++)
		//for (std::vector<int>::iterator iter = Scores.begin(); iter != Scores.end(); iter++)
	{
		printf("%d ", *iter);	// ���� iter��ġ�� �ִ� ���� ���
	}
	printf("\n");

	// �뷮 Ȯ��(Size, Capacity)
	//	Size : ���� vector���� ���� ���Ǵ� ���� ����ִ� ����
	//	Capacity : ���� vector�� �Ҵ�� �޸� ����(���� ������� ���� �͵� ����)
	printf("���� ���� ����(Size) : %u\n", static_cast<unsigned int>(Scores.size()));
	printf("�Ҵ�� �޸�(Capacity) : %u\n", static_cast<unsigned int>(Scores.capacity()));

	// �����ϱ� : �ڿ��� �����ϴ� ���� ����.
	Scores.pop_back(); // ������ ���� �ϳ� ����
	printf("��� ���� : ");
	for (auto iter = Scores.begin(); iter != Scores.end(); iter++)
	{
		printf("%d ", *iter);
	}
	printf("\n");

	Scores.clear();	// ��� ���� ����(Size�� 0, Capacity�� �״��)
	printf("��� ���� : ");
	for (auto iter = Scores.begin(); iter != Scores.end(); iter++)
	{
		printf("%d ", *iter);
	}
	printf("\n");
	printf("���� ���� ����(Size) : %u\n", static_cast<unsigned int>(Scores.size()));
	printf("�Ҵ�� �޸�(Capacity) : %u\n", static_cast<unsigned int>(Scores.capacity()));

	// ���� �� ��
	// - ������ ���ҵ��� ������ �߿����� ���� �� ��밡��.
	// - �߰��� �ִ� ���Ҹ� ������ �� �������� �ִ� ���ҿ� ���� ��ȯ�ϰ� pop_back���� �����ϴ� ����
	std::vector<int> Numbers = { 10,20,30,40,50 };
	int DeleteNumber = 20;

	std::vector<int>::iterator FindIter = std::find(Numbers.begin(), Numbers.end(), DeleteNumber);
	if (FindIter != Numbers.end())
	{
		// ã�Ҵ�.
		*FindIter = Numbers.back();	// ã�� ��ġ�� ������ ���� �־��.
		Numbers.pop_back();			// ������ ��� ����
	}
	else
	{
		// ����.
	}
}

void Day0923::TestVectorPractice()
{
	std::vector<int> Numbers;
	int InputNumber = 0;
	int Max = -1 ,Min = 9999;
	while(true)
	{
		printf("���� �Է�(����: 0�Է�): ");
		std::cin >> InputNumber;
		if(InputNumber == 0)
			break;
		Numbers.push_back(InputNumber);
	}
	for (int i = 0; i < Numbers.size(); i++)
	{
		printf("%d ",Numbers[i]);
	}
	printf("\n");

	for (int i = 0; i < Numbers.size(); i++)
	{
		if(Numbers[i] > Max)
			Max = Numbers[i];
		if(Numbers[i] < Min)
			Min = Numbers[i];
	}
	printf("�ִ� = %d, �ּڰ� = %d\n",Max,Min);

	printf("�������� ���� : ");
	std::sort(Numbers.begin(),Numbers.end());
	for (int i = 0; i < Numbers.size(); i++)
	{
		printf("%d ", Numbers[i]);
	}
	printf("\n");

	printf("ã�� ���� �Է�: ");
	std::cin>>InputNumber;
	int cnt = 0;
	for (int i = 0; i < Numbers.size(); i++)
	{
		if(Numbers[i] == InputNumber)
			break;
		cnt++;
	}
	
	if (cnt != Numbers.size())
	{
		printf("ã�� ���� %d�� vector�� %d��°�� �ֽ��ϴ�\n",InputNumber,cnt);
	}
	else
	{
		printf("ã�� ���� %d�� vector�� �����ϴ�.\n", InputNumber);
	}

	std::vector<int> Numbers2 = {10,20,30,40};
	printf("���� ��ġ��\n");
	for (int i = 0; i < Numbers2.size(); i++)
	{
		Numbers.push_back(Numbers2[i]);
	}
	printf("��ģ ���\n");
	for (int i = 0; i < Numbers.size(); i++)
	{
		printf("%d ", Numbers[i]);
	}
	printf("\n");

	std::string Strings = {"abcdefghi"};
	std::vector<char>reverse;
	for (int i = Strings.length() - 1; i >= 0; i--)
	{
		reverse.push_back(Strings[i]);
	}

	for (int i = 0; i < reverse.size(); i++)
	{
		std::cout<<reverse[i];
	}
	printf("\n");

	int TotalSum = 0;
	for (int Number : Numbers)
	{
		TotalSum += Number;
	}
	printf("vector�� ��� ������ ��: %d",TotalSum);
}
