#include "Practice0909.h"
#include "Practice0910.h"
#include "Practice0912.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <direct.h>
#include <fstream>
#include "Player.h"
#include "Monster.h"
#include "Goblin.h"
#include "Zombie.h"
#include "Oak.h"
#include "Skeleton.h"

void PointerParameter(int* pNumber)
{
	(*pNumber) = (*pNumber)*2;
}
void PointerParameter2(int* pNumber ,float* p2Number)
{
	(*pNumber) = (*pNumber) + 3;
	//(*p2Number) = (*p2Number) / 2;
	(*p2Number) *= 0.5f; // ������� ���ϱ��� ���ð����ϴٸ� ���ϱⰡ ������
}
void Day0909()
{
	int Number = 0;
	int Number2 = 10;
	float Number3 = 3.0f;

	//int* p = nullptr;
	int* p = &Number;

	(*p) = 30;
	printf("%d ", Number);
	PointerParameter(&Number2);

	PointerParameter2(&Number2, &Number3);

	int* test = p;
	test++;
	//(*test) = 20; //�ſ����� ����
}
void Day09091()
{
	int Array[5] = { 10,20,30,40,50 };
	int* pArray = Array;
	int* pArray2 = &Array[0];

	*(pArray + 2) = 300;

	for (int data : Array)
	{
		printf("%d ", data);
	}printf("\n");
}

void DynamicAllocation()
{	
	int Size = 5;
	int* Array = nullptr;
	Array = (int*)malloc(sizeof(int)*Size);


	free(Array);
	Array = nullptr;

	int* Data = new int(5); //int �ϳ��� �Ҵ�ް� �ּ��� ������ 5 ����
	delete Data;
	Data = nullptr;

	Array = new int[10];
	delete[] Array;
	Array = nullptr;
}
void DynamicAllocation2()
{
	int CurrentSize =0;
	int Size = 3;
	int* Array = new int[Size];
	int* NewArray = new int[CurrentSize];
	int num = -1;

	while (num != 0)
	{
		printf("�迭�� ���� ���ڸ� �Է��ϼ���(����: 0 �Է�) : ");
		if (Size > CurrentSize)
		{
			std::cin >> num;
			*(Array + CurrentSize) = num;
			CurrentSize++;
		}
		else
		{
			CurrentSize++;
			NewArray = new int[CurrentSize];
			for (int i = 0; i < Size; i++) {
				*(NewArray + i) = *(Array + i);
			}
			std::cin >> num;
			*(NewArray + Size) = num;

			Array = new int [CurrentSize];
			for (int i = 0; i < CurrentSize; i++) {
				*(Array + i) = *(NewArray + i);
			}
			Size = CurrentSize;

			printf("�迭���� ");
			for (int i = 0; i < Size; i++) {
				printf("%d ", *(Array + i));
			}
			printf(" �� ��� �ֽ��ϴ�.\n");
		}
	}

	delete[] Array;
	delete[] NewArray;
	Array = nullptr;
	NewArray = nullptr;
}

void Practice09091()
{
	int Horizontal = 0;
	int Vertical = 0;
	int cnt = 0;
	printf("������ ���̸� �Է����ּ��� : ");
	std::cin >> Horizontal;
	printf("������ ���̸� �Է����ּ��� : ");
	std::cin >> Vertical;

	int* arr = new int[Horizontal*Vertical];

	for (int i = 0; i < Horizontal * Vertical; i++)
	{
		arr[i] = i;
	}

	for (int i = 0; i < Vertical; i++) {
		for (int j = 0; j < Horizontal; j++) {
			printf("%2d ",arr[cnt]);
			cnt++;
		}
		printf("\n");
	}
	
}
void Practice09092()
{
	int RandomNumber = rand() % 100 + 1;
	int PlayerNumber = 0;
	int CountDown = 5;
	int i=0;
	int* Array = new int[CountDown];

	while (CountDown > 0)
	{
		printf("1~100 ������ ���ڸ� ������ ������ : ");
		std::cin >> PlayerNumber;

		if (PlayerNumber < RandomNumber)
		{
			printf("�� ū ���� ������\n");
			*(Array + i) = PlayerNumber;
			i++;
		}
		else if (PlayerNumber > RandomNumber)
		{
			printf("�� ���� ���� ������\n");
			*(Array + i) = PlayerNumber;
			i++;
		}
		else
		{
			printf("�����Դϴ�!\nã�� ���� %d�����ϴ�.\n", RandomNumber);
			printf("�Է��Ͻ� ���� : ");
			for (int j = 0; j < i; j++) {
				printf("%d ", Array[j]);
			}
			break;
		}
		CountDown--;
		printf("���� ȸ���� %d�� �Դϴ�.\n", CountDown);
	}
	if (CountDown <= 0)
	{
		printf("�����߽��ϴ�.\n");
		printf("�Է��Ͻ� ���� : ");
		for (int j = 0; j < i; j++) {
			printf("%d ",Array[j]);
		}
	}
	delete[] Array;
	Array = nullptr;
}

int MazeWidth = 20;
int MazeHeight = 10;
int** Maze = nullptr;

void MazeEscapeRun()
{
	/*
	*	- 2���� �迭�� Ȱ���Ͽ� �ؽ�Ʈ ��� �̷� Ż�� ������ ����.
		- �̷��� ����
			- 10�� 20���� 2���� �迭
			- ���� ���
				- ��(0): '. '���� ǥ��
				- ��(1): '# '���� ǥ��
				- ������(2): 'S '�� ǥ��
				- �ⱸ(3): 'E '�� ǥ��
			- �̷� �ڵ�

				```cpp
				// �̷� ũ��
				const int MazeRows = 10;
				const int MazeCols = 20;

				// �̷� �迭
				int Maze[MazeRows][MazeCols] =
				{
					{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
					{1,2,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,1,0,1},
					{1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,0,1},
					{1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1},
					{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
					{1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1},
					{1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1},
					{1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,3,1},
					{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
					{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
				};
				```

		- �̵� �Է� ó��
			- w(W): ��, s(S): �Ʒ�, a(A): ����, d(D): ������
			- ��ҹ��� ���� ���� ó��
		- �÷��̾ �ⱸ�� �����ϸ� ����
			- �÷��̾�� ��P ���� ǥ��
		- ���� ȭ���� ������ ���� ����� ������.

			```cpp
			=== �ؽ�Ʈ �̷� Ż�� ���� ===
			[�̷� ȭ�� ���]
			�̵��� �� �ִ� ������ �����ϼ��� (w: ��, s: �Ʒ�, a: ����, d: ������):
			w(��) s(��) a(��) d(��)
			���� �Է�:
			```
	*/
	
	//Player* character = new Player(0,0);
	Player character =  Player(1,1);

	int HealPercent = 0;
	int BattlePercent = 1;
	int Percent = 0;

	FindStartPosition(character.GetPositionX(), character.GetPositionY());

	printf("~~ �̷� Ż�� ���� ~~\n");

	while (character.GetHealPoint() > 0)
	{
		PrintMaze(character.GetPositionX(), character.GetPositionY());

		if (IsEnd(character.GetPositionX(), character.GetPositionY()))
		{
			printf("�����մϴ�! �̷θ� Ż���߽��ϴ�!\n");
			break;
		}

		int MoveFlags = PrintAvailableMoves(character.GetPositionX(), character.GetPositionY());
		MoveDirection Direction = GetMoveInput(MoveFlags);
		switch (Direction)
		{
		case DirUp:
			character.SetPositionY(character.GetPositionY() - 1);
			break;
		case DirDown:
			character.SetPositionY(character.GetPositionY() + 1);
			break;
		case DirLeft:
			character.SetPositionX(character.GetPositionX() - 1);
			break;
		case DirRight:
			character.SetPositionX(character.GetPositionX() + 1);
			break;
		case DirNone:
		default:
			// ���� �� ����
			break;
		}
		Percent = rand() % 10;
		if (Percent == HealPercent)
		{
			if(character.GetGold() > 0)
				HealerEncount(character);
		}
		if (Percent == BattlePercent || Percent == BattlePercent + 1){
			StartBattle(character);
		}

	}

}

//void ReadMapFile(int MazeWidth, int MazeHeight)
//{
//	int Position = 0;
//	const char* FilePath = ".\\Data\\MapData.txt";
//	std::ifstream InputFile(FilePath);
//	if (!InputFile.is_open())	// ������ ���ȴ��� Ȯ���ϴ� �Լ�
//	{
//		printf("������ �� �� �����ϴ�.\n");
//		printf("[%s] ��θ� Ȯ���ϼ���.\n", FilePath);
//		return;
//	}
//
//	std::string FileContents(
//		(std::istreambuf_iterator<char>(InputFile)),
//		std::istreambuf_iterator<char>());	//InputFile�� �ִ� ���ڵ��� ��� �о FileContents�� �����ϱ�
//	int MazeSize = FileContents.length();
//
//	Position = FileContents.find(',');
//
//	char* Maze = new char[MazeSize];
//	for (int i = 0; i < MazeSize; i++) {
//		Maze[i] = FileContents[i];
//	}
//
//	printf("%s\n", FileContents.c_str());	// FileContents�ȿ� �ִ� ���ڿ��� const char*�� �����ִ� �Լ�
//}

void HealerEncount(Player& character)
{
	char Choice = NULL;
	int endflag = 0;
	int HealPoint = 0;
	while (endflag == 0)
	{
		printf("ġ��縦 �������ϴ� ġ���Ͻðڽ��ϱ�? (���� ü��:%.1f)\n",character.GetHealPoint());
		std::cin>>Choice;
		if(Choice == 'y')
			while (character.GetGold() > 0)
			{
				printf("ġ���Ͻ� HP��ŭ �Է����ּ��� (HP 1 = ��� 1) (���� ���� ��� : %d)\n", character.GetGold());
				std::cin >> HealPoint;
				if((100 - character.GetHealPoint()) < HealPoint)
					printf("%0.1f ���� �ʰ��ؼ� ȸ���� �� �����ϴ�.\n",(100.0f - character.GetHealPoint()));
				if(character.GetHealPoint() < HealPoint)
					printf("��尡 �����մϴ�.\n");
				else
				{
					character.SetGold(character.GetGold() - HealPoint);
					character.SetHealPoint(character.GetHealPoint() + HealPoint);
					printf("%d ��ŭ ȸ�� �Ͽ����ϴ�.(���� ü�� : %.1f)(���� ���� ��� : %d)\n",HealPoint,character.GetHealPoint(), character.GetGold());
					endflag = 1;
					break;
				}
			}
		else if(Choice == 'n')
			printf("ġ�Ḧ �����ϼ̽��ϴ�.\n");
		else
		{
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.");
			continue;
		}
	}
}

void StartBattle(Player& character)
{
	Monster Enemy;
	float Damage = 0;
	char Turn = 0;
	int MonsterSpawn = 0;

	MonsterSpawn = rand() % 4;
	switch (MonsterSpawn)
	{
	case 0:
		Enemy = Goblin("���");
		break;
	case 1:
		Enemy = Oak("��ũ");
		break;
	case 2:
		Enemy = Zombie("����");
		break;
	case 3:
		break;
		Enemy = Skeleton("���̷���");
	default:
		break;
	}

	printf("������ �߻��߽��ϴ�. \n");
	while (Enemy.GetHealPoint()> 0 && character.GetHealPoint() > 0) {

		printf("���� �����Ϸ��� 1�� �Է����ּ���");
		std::cin >> Turn;
		if(Turn != '1')
			continue;

		Damage = CriticalCalculate(character.GetAttackPower());
		Enemy.SetHealPoint(Enemy.GetHealPoint() - Damage);
		printf("�÷��̾ %.1f�� �������� �������ϴ�.\n", Damage);
		if (Enemy.GetHealPoint() <= 0)
		{
			printf("%s�� ü�� : %.1f\n",Enemy.GetName().c_str(), Enemy.GetHealPoint());
			break;
		}
		printf("%s�� ü�� : %.1f\n", Enemy.GetName().c_str(),Enemy.GetHealPoint());


		Damage = CriticalCalculate(Enemy.GetAttackPower());
		character.SetHealPoint(character.GetHealPoint() - Damage);
		printf("%s�� %.1f�� �������� �������ϴ�.\n", Enemy.GetName().c_str(), Damage);
		printf("�÷��̾��� ü�� : %.1f\n", character.GetHealPoint());
	}
	if (Enemy.GetHealPoint() == 0)
	{ 
		printf("�÷��̾� �¸� \n");
		character.SetGold(character.GetGold()+Enemy.GetGold());
	}
	else
	{
		printf("�÷��̾� �й�\n");
	}
}



void PrintMaze(int PlayerX, int PlayerY)
{
	for (int y = 0; y < MazeHeight; y++)
	{
		for (int x = 0; x < MazeWidth; x++)
		{
			if (PlayerX == x && PlayerY == y)
			{
				printf("P ");
			}
			else if (Maze[y][x] == Wall)
			{
				printf("# ");
			}
			else if (Maze[y][x] == Path)
			{
				printf(". ");
			}
			else if (Maze[y][x] == Start)
			{
				printf("S ");
			}
			else if (Maze[y][x] == End)
			{
				printf("E ");
			}
			else
			{
				// ���� ������ �ȵǴ� �� == �� �����Ͱ� �߸��� ��
			}
		}
		printf("\n");
	}
}

void FindStartPosition(int OutStartX, int OutStartY)
{
	for (int y = 0; y < MazeHeight; y++)
	{
		for (int x = 0; x < MazeWidth; x++)
		{
			if (Maze[y][x] == Start)
			{
				OutStartX = x;
				OutStartY = y;
				return;
			}
		}
	}
	OutStartX = 0;
	OutStartY = 0;
}

int PrintAvailableMoves(int PlayerX, int PlayerY)
{
	int MoveFlags = DirNone;

	printf("�̵��� �� �ִ� ������ �����ϼ��� (w:�� a:���� s:�Ʒ��� d:������):\n");
	if (!IsWall(PlayerX, PlayerY - 1))
	{
		printf("W(��) ");
		MoveFlags |= DirUp;
	}
	if (!IsWall(PlayerX, PlayerY + 1))
	{
		printf("S(��) ");
		MoveFlags |= DirDown;
	}
	if (!IsWall(PlayerX - 1, PlayerY))
	{
		printf("A(��) ");
		MoveFlags |= DirLeft;
	}
	if (!IsWall(PlayerX + 1, PlayerY))
	{
		printf("D(��) ");
		MoveFlags |= DirRight;
	}
	printf("\n");

	return MoveFlags;
}

bool IsWall(int X, int Y)
{
	bool isWall = false;
	if (Y < 0 || Y >= MazeHeight ||
		X < 0 || X >= MazeWidth ||
		Maze[Y][X] == Wall)
		isWall = true;
	return isWall;
}

bool IsEnd(int X, int Y)
{
	return Maze[Y][X] == End;
}

MoveDirection GetMoveInput(int MoveFlags)
{
	char InputChar = 0;
	MoveDirection Direction = DirNone;

	while (true)
	{
		printf("������ �Է��ϼ��� : ");
		std::cin >> InputChar;

		if ((InputChar == 'w' || InputChar == 'W')
			&& (MoveFlags & DirUp) /*!= 0*/)
		{
			Direction = DirUp;
			break;
		}
		if ((InputChar == 's' || InputChar == 'S')
			&& (MoveFlags & DirDown) /*!= 0*/)
		{
			Direction = DirDown;
			break;
		}
		if ((InputChar == 'a' || InputChar == 'A')
			&& (MoveFlags & DirLeft) /*!= 0*/)
		{
			Direction = DirLeft;
			break;
		}
		if ((InputChar == 'd' || InputChar == 'D')
			&& (MoveFlags & DirRight) /*!= 0*/)
		{
			Direction = DirRight;
			break;
		}

		printf("�߸��� �Է��Դϴ�. �̵��� �� �ִ� ���� �߿��� �����ϼ���.\n");
	}

	return Direction;
}

float CriticalCalculate(float AttackPower)
{

	int Critical = 0;
	float Damage = 0;

	Damage = AttackPower;
	if (rand() % 10 == Critical) {
		Damage *= 2;
	}
	return Damage;
}


