#include "Practice0908.h"
#include <stdio.h>
#include <iostream>
#include <limits.h>
#include <random>
void Practice09081()
{
	int Array[5] = {0};
}
void Practice09082()
{
	int Array[5] = {0};
	int ElementCount = static_cast <int>(sizeof(Array) / sizeof(Array[0]));
	int Sum= 0;
	float Average = 0;

	for (int i = 0; i < ElementCount; i++) {
		printf("숫자를 입력해주세요: ");
		std::cin >> Array[i];
		Sum += Array[i];
	}
	Average = Sum/ static_cast <float>(ElementCount);
	printf("평균은 : %.2f\n", Average);
}
void Practice09083()
{
	int Array[5] = { 0 };
	int ElementCount = static_cast<int>(sizeof(Array) / sizeof(Array[0]));
	int Max = INT_MIN;
	int Min = INT_MAX;


	for (int i = 0; i < ElementCount; i++) {
		printf("숫자를 입력해주세요: ");
		std::cin>>Array[i];
		if (Array[i] > Max)
			Max = Array[i];
		if (Array[i] < Min)
			Min = Array[i];
	}
	printf("최대값 : %d , 최소값 : %d\n", Max,Min);
}

void Shuffle(int Array[],int Length)
{
	for (int i = Length - 1; i > 0; i--) {
		int j = rand() % (i+1);
		int Temp = Array[i];
		Array[i] = Array[j];
		Array[j] = Temp;
	}
}

void TestRef(int& OutData, const int& ReadData)
{
	OutData *= ReadData;
}
void RefF()
{
	int Number = 10;
	int Number2 = 10;
	int& Ref = Number;

	TestRef(Number,Number2);
}

void Practice09084()
{
	const int DiceCount = 1000000;
	int DiceSpot[6] = {0};
	int j = 0;
	for (int i = 0; i < DiceCount; i++) {
		j = DiceRoll();
		DiceSpot[j-1]++;
	}
	for(int i = 0 ;i<6;i++)
		printf("%d : %d번\n",i+1,DiceSpot[i]);
}
int DiceRoll()
{
	return rand()%6 +1;
}

void Practice09085()
{
	int Array[5] = { 1,2,3,4,5 };
	Reverse(Array,5);
}
void Reverse(int Array[], int Length)
{
	int ReversArray[5] = {0};

	for (int i = 0; i < Length; i++) {
		ReversArray[i] = Array[Length-1-i];
		printf("%d ", ReversArray[i]);
	}
}

void Practice09086()
{
	int SelectNumber[6] = {0};
	int DuplicateCheck = 0;
	int Flag = 0;

	for (int i = 0; i < 6 ; i++)
	{
		printf("로또 번호를 입력해주세요 : ");
		std::cin>> DuplicateCheck;

		if (DuplicateCheck > 45 || DuplicateCheck < 0)
		{
				printf("로또 번호는 1~45번까지 입니다 다시입력해주세요.\n");
				DuplicateCheck = 0;
				i--;
				continue;
		}
		for(int j = 0; j < 6; j++)
		{
			if(DuplicateCheck == SelectNumber[j])
				{
					printf("중복되는 로또 번호 입니다. 다시입력해주세요.\n");
					DuplicateCheck = 0;
					i--;
					Flag = 1;
					break;
				}
		}
		if(Flag == 0)
			SelectNumber[i] = DuplicateCheck;
		Flag = 0;
	}

	Lotto(SelectNumber,6);
}
void Lotto(int Number[], int Length) {
	srand(time(NULL));
	int LottoNumber[6] = {0};
	int DuplicateChack = 0;
	int Count = 0;

	for (int i = 0; i < Length; i++) {
		DuplicateChack = rand() % 45+1;
		for(int j = 0; j<Length;j++){
			while(LottoNumber[j] == DuplicateChack)
				DuplicateChack = rand() % 45 + 1;
		}
		LottoNumber[i] = DuplicateChack;
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if(LottoNumber[i] == Number[j])
				Count++;
		}
	}

	printf("로또 번호 : ");
	for (int i = 0; i < 6; i++) {
		printf("%d ",LottoNumber[i]);
	}
	printf("\n나의 번호 : ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", Number[i]);
	}
	printf("\n %d 개 맞췄습니다",Count);
}

void Practice09087()
{
	// 미로 크기
	const int MazeHeight = 10;
	const int MazeWidth = 20;

	// 미로 배열
	const int Maze[MazeHeight][MazeWidth] =
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
	int PlayerPosX = 1;
	int PlayerPosY = 1;
	int GoalPosX = 18;
	int GoalPosY = 7;
	char PlayerInput = '\n';
	int flag = 0;
	
	printf("=== 텍스트 미로 탈출 게임 ===\n");
	while(PlayerPosX != GoalPosX || PlayerPosY != GoalPosY)
	{
		for (int i = 0; i < MazeHeight; i++) {
			for (int j = 0; j < MazeWidth; j++) {
				if (i == PlayerPosY && j == PlayerPosX)
				{
					printf("P ");
					continue;
				}
				else if (Maze[i][j] == 0) {
					printf(". ");
				}
				else if (Maze[i][j] == 1) {
					printf("# ");
				}
				else if (Maze[i][j] == 2) {
					printf("S ");
				} 
				else if (Maze[i][j] == 3){
					printf("E ");
				}
				else
					printf("@ ");
			}
			printf("\n");
		}
		printf("이동할 수 있는 방향을 선택하세요 %(w: 위, s: 아래, a: 왼쪽, d: 오른쪽%):\n");
		if(Maze[PlayerPosY - 1][PlayerPosX] == 0 || Maze[PlayerPosY - 1][PlayerPosX] == 3)
			printf("w(↑) ");
		if (Maze[PlayerPosY + 1][PlayerPosX] == 0 || Maze[PlayerPosY + 1][PlayerPosX] == 3)
			printf("s(↓) ");
		if (Maze[PlayerPosY][PlayerPosX-1] == 0 || Maze[PlayerPosY][PlayerPosX - 1] == 3)
			printf("a(←) ");
		if (Maze[PlayerPosY][PlayerPosX+1] == 0 || Maze[PlayerPosY][PlayerPosX + 1] == 3)
			printf("d(→) ");

		while(flag == 0)
		{
			printf("방향 입력 : ");
			std::cin >> PlayerInput;
			switch (PlayerInput)
			{
			case 'w':
			case 'W':
			{
				if(Maze[PlayerPosY - 1][PlayerPosX] == 1)
				{
					printf("잘못된 입력입니다. 이동할 수 있는 방향 중에서 선택하세요.\n");
					continue;
				};
				PlayerPosY -=1;
				flag =1;
				break;
			}
			case 's':
			case 'S':
			{
				if (Maze[PlayerPosY + 1][PlayerPosX] == 1)
				{
					printf("잘못된 입력입니다. 이동할 수 있는 방향 중에서 선택하세요.\n");
					continue;
				}
				PlayerPosY += 1;
				flag = 1;
				break;
			}
			case 'a':
			case 'A':
			{
				if (Maze[PlayerPosY][PlayerPosX-1] == 1)
				{
					printf("잘못된 입력입니다. 이동할 수 있는 방향 중에서 선택하세요.\n");
					continue;
				}
				PlayerPosX -= 1;
				flag = 1;
				break;
			}
			case 'd':
			case 'D':
			{
				if (Maze[PlayerPosY][PlayerPosX+1] == 1)
				{
					printf("잘못된 입력입니다. 이동할 수 있는 방향 중에서 선택하세요.\n");
					continue;
				}
				PlayerPosX += 1;
				flag = 1;
				break;
			}
			default:
				printf("잘못된 입력입니다. 이동할 수 있는 방향 중에서 선택하세요.\n");
				break;
			}

		}
		flag = 0;
	}

}





