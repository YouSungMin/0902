#include "Practice0909.h"
#include "Practice0905.h"
#include "Practice0910.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <direct.h>
#include <fstream>

void PointerParameter(int* pNumber)
{
	(*pNumber) = (*pNumber)*2;
}
void PointerParameter2(int* pNumber ,float* p2Number)
{
	(*pNumber) = (*pNumber) + 3;
	//(*p2Number) = (*p2Number) / 2;
	(*p2Number) *= 0.5f; // 나누기와 곱하기중 선택가능하다면 곱하기가 더유리
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
	//(*test) = 20; //매우위험 터짐
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

	int* Data = new int(5); //int 하나를 할당받고 주소의 값에는 5 설정
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
		printf("배열에 넣을 숫자를 입력하세요(중지: 0 입력) : ");
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

			printf("배열에는 ");
			for (int i = 0; i < Size; i++) {
				printf("%d ", *(Array + i));
			}
			printf(" 가 담겨 있습니다.\n");
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
	printf("가로의 길이를 입력해주세요 : ");
	std::cin >> Horizontal;
	printf("세로의 길이를 입력해주세요 : ");
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
		printf("1~100 사이의 숫자를 예상해 보세요 : ");
		std::cin >> PlayerNumber;

		if (PlayerNumber < RandomNumber)
		{
			printf("더 큰 수를 찍어보세요\n");
			*(Array + i) = PlayerNumber;
			i++;
		}
		else if (PlayerNumber > RandomNumber)
		{
			printf("더 작은 수를 찍어보세요\n");
			*(Array + i) = PlayerNumber;
			i++;
		}
		else
		{
			printf("정답입니다!\n찾는 수는 %d였습니다.\n", RandomNumber);
			printf("입력하신 숫자 : ");
			for (int j = 0; j < i; j++) {
				printf("%d ", Array[j]);
			}
			break;
		}
		CountDown--;
		printf("남은 회수는 %d번 입니다.\n", CountDown);
	}
	if (CountDown <= 0)
	{
		printf("실패했습니다.\n");
		printf("입력하신 숫자 : ");
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
	*	- 2차원 배열을 활용하여 텍스트 기반 미로 탈출 게임을 구현.
		- 미로의 구성
			- 10행 20열의 2차원 배열
			- 저장 방식
				- 길(0): '. '으로 표시
				- 벽(1): '# '으로 표시
				- 시작점(2): 'S '로 표시
				- 출구(3): 'E '로 표시
			- 미로 코드

				```cpp
				// 미로 크기
				const int MazeRows = 10;
				const int MazeCols = 20;

				// 미로 배열
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

		- 이동 입력 처리
			- w(W): 위, s(S): 아래, a(A): 왼쪽, d(D): 오른쪽
			- 대소문자 구분 없이 처리
		- 플레이어가 출구에 도착하면 종료
			- 플레이어는 ‘P ‘로 표시
		- 게임 화면은 다음과 같은 양식을 따른다.

			```cpp
			=== 텍스트 미로 탈출 게임 ===
			[미로 화면 출력]
			이동할 수 있는 방향을 선택하세요 (w: 위, s: 아래, a: 왼쪽, d: 오른쪽):
			w(↑) s(↓) a(←) d(→)
			방향 입력:
			```
	*/
	srand(time(NULL));
	int PlayerX = 0;
	int PlayerY = 0;
	int PlayerHP = 100;
	int HealPercent = 0;
	int BattlePercent = 1;
	int Percent = 0;

	/*int MazeWidth = 0;
	int MazeHeight = 0;*/

	//int Maze[MazeHeight][MazeWidth];

	FindStartPosition(PlayerX, PlayerY);
	//ReadMapFile(MazeWidth, MazeHeight);
	printf("~~ 미로 탈출 게임 ~~\n");

	while (PlayerHP > 0)
	{
		PrintMaze(PlayerX, PlayerY);

		if (IsEnd(PlayerX, PlayerY))
		{
			printf("축하합니다! 미로를 탈출했습니다!\n");
			break;
		}

		int MoveFlags = PrintAvailableMoves(PlayerX, PlayerY);
		MoveDirection Direction = GetMoveInput(MoveFlags);
		switch (Direction)
		{
		case DirUp:
			PlayerY--;
			break;
		case DirDown:
			PlayerY++;
			break;
		case DirLeft:
			PlayerX--;
			break;
		case DirRight:
			PlayerX++;
			break;
		case DirNone:
		default:
			// 있을 수 없음
			break;
		}
		Percent = rand() % 10;
		if(Percent == HealPercent && PlayerHP < 100)
		{
			PlayerHP += 10;
			printf("HP가 회복되었습니다. 현재 체력 %d\n",PlayerHP);
		}
		else if (Percent == BattlePercent || Percent == BattlePercent + 1){
			PlayerHP = StartBattle(PlayerHP);
		}
	}

}

//void ReadMapFile(int MazeWidth, int MazeHeight)
//{
//	int Position = 0;
//	const char* FilePath = ".\\Data\\MapData.txt";
//	std::ifstream InputFile(FilePath);
//	if (!InputFile.is_open())	// 파일이 열렸는지 확인하는 함수
//	{
//		printf("파일을 열 수 없습니다.\n");
//		printf("[%s] 경로를 확인하세요.\n", FilePath);
//		return;
//	}
//
//	std::string FileContents(
//		(std::istreambuf_iterator<char>(InputFile)),
//		std::istreambuf_iterator<char>());	//InputFile에 있는 글자들을 모두 읽어서 FileContents에 저장하기
//	int MazeSize = FileContents.length();
//
//	Position = FileContents.find(',');
//
//	char* Maze = new char[MazeSize];
//	for (int i = 0; i < MazeSize; i++) {
//		Maze[i] = FileContents[i];
//	}
//
//	printf("%s\n", FileContents.c_str());	// FileContents안에 있는 문자열을 const char*로 돌려주는 함수
//}

int StartBattle(int PlayerHP)
{
	int MonsterHP = 30;
	int Damage = 0;
	int Turn = 0;


	srand(time(NULL));

	printf("전투가 발생했습니다. \n");
	while (MonsterHP > 0 && PlayerHP > 0) {
		printf("턴을 시작하려면 1을 입력해주세요");
		std::cin >> Turn;

		Damage = DamageCalculate();
		MonsterHP -= Damage;
		printf("플레이어가 %d의 데미지를 입혔습니다.\n", Damage);
		if (MonsterHP <= 0)
		{
			MonsterHP = 0;
			printf("몬스터의 체력 : %d\n", MonsterHP);
			break;
		}
		printf("몬스터의 체력 : %d\n", MonsterHP);


		Damage = DamageCalculate();
		PlayerHP -= Damage;
		printf("몬스터가 %d의 데미지를 입혔습니다.\n", Damage);
		if (PlayerHP <= 0)
			PlayerHP = 0;
		else
			printf("플레이어의 체력 : %d\n", PlayerHP);
	}
	if (MonsterHP <= 0)
	{ 
		printf("플레이어 승리\n");
		return PlayerHP;
	}
	else
	{
		printf("플레이어 패배\n");
		return PlayerHP;
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
				// 절대 들어오면 안되는 곳 == 맵 데이터가 잘못된 것
			}
		}
		printf("\n");
	}
}

void FindStartPosition(int& OutStartX, int& OutStartY)
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

	printf("이동할 수 있는 방향을 선택하세요 (w:위 a:왼쪽 s:아래쪽 d:오른쪽):\n");
	if (!IsWall(PlayerX, PlayerY - 1))
	{
		printf("W(↑) ");
		MoveFlags |= DirUp;
	}
	if (!IsWall(PlayerX, PlayerY + 1))
	{
		printf("S(↓) ");
		MoveFlags |= DirDown;
	}
	if (!IsWall(PlayerX - 1, PlayerY))
	{
		printf("A(←) ");
		MoveFlags |= DirLeft;
	}
	if (!IsWall(PlayerX + 1, PlayerY))
	{
		printf("D(→) ");
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
		printf("방향을 입력하세요 : ");
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

		printf("잘못된 입력입니다. 이동할 수 있는 방향 중에서 선택하세요.\n");
	}

	return Direction;
}

