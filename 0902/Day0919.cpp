#include "Day0919.h"
#include "FixedStack.h"
#include "CircularQueue.h"
#include "CircularQueue2.h"
#include <stdio.h>
#include <iostream>
void Day0919::TestStack()
{
	FixedStack Stack;
	printf("초기 상태 테스트==========================\n");
	if(Stack.IsEmpty())
		printf("스택이 비어있습니다. %d\n", Stack.GetSize());

	printf("Push 테스트==========================\n");
	for (int i = 10; i <= 30; i += 10)
	{
		Stack.Push(i);
		PrintStack(Stack);
	}
	printf("Pop 테스트==========================\n");
	printf("Pop 한 값 : %d\n", Stack.Pop());
	PrintStack(Stack);

	printf("OverFlow 테스트==========================\n");
	for (int i = 0; i <= 8; i++)
	{
		Stack.Push(i);
		PrintStack(Stack);
	}

	printf("UnderFlow 테스트==========================\n");
	for (int i = 0; i < 10; i++)
	{
		printf("Pop 한 값 : %d\n", Stack.Pop());
		PrintStack(Stack);
	}
}

void Day0919::PrintStack(FixedStack &Stack)
{
	printf("Top = %d , Stack Size = %d\n", Stack.Top(), Stack.GetSize());
}

void Day0919::TestQueue()
{
	int SelectMenu = -1;
	int Data = 0;
	CircularQueue Queue;

	while (SelectMenu != 0)
	{
		printf("1.EnQueue 2.Dequeue 3.Peek 4.TestPrintQueue	0.종료\n");
		std::cin>>SelectMenu;
		switch (SelectMenu)
		{
		case 1:
		{
			printf("EnQueue 하실 값 입력 :");
			std::cin>>Data;
			Queue.Enqueue(Data);
			printf("%d , EnQueue 성공\n",Data);
			break;
		}
		case 2:
		{
			printf("DeQueue 결과 : %d\n", Queue.Dequeue());
			break;
		}
		case 3:
			printf("Peek 결과 : %d\n",Queue.Peek());
			break;
		case 4:
			Queue.TestPrintQueue();
			break;
		case 0:
			break;
		default:
			printf("잘못 입력 하셨습니다 다시입력해주세요.\n");
			break;
		}
	}
}

void Day0919::TestQueue2()
{
	int SelectMenu = -1;
	int Data = 0;
	CircularQueue2 Queue(3);

	while (SelectMenu != 0)
	{
		printf("1.EnQueue 2.Dequeue 3.Peek 4.TestPrintQueue	0.종료\n");
		std::cin >> SelectMenu;
		switch (SelectMenu)
		{
		case 1:
		{
			if(!Queue.IsFull())
			{
				printf("EnQueue 하실 값 입력 :");
				std::cin >> Data;
				Queue.Enqueue(Data);
			}
			else
				printf("큐가 가득 찼습니다.\n");
			break;
		}
		case 2:
		{
			printf("DeQueue 결과 : %d\n", Queue.Dequeue());
			break;
		}
		case 3:
			printf("Peek 결과 : %d\n", Queue.Peek());
			break;
		case 4:
			Queue.TestPrintQueue();
			break;
		case 0:
			break;
		default:
			printf("잘못 입력 하셨습니다 다시입력해주세요.\n");
			break;
		}
	}
}

void Day0919::TestSwallowCopy()
{
	//// 얕은 복사 : 복사를 할 때 완전한 사본을 만드는 것이 아니라 주소만 복사하는 복사
	//CircularQueue2 a(5);
	//a.Enqueue(10);
	//a.Enqueue(20);

	//CircularQueue2 b(a);	// 복사 생성자로 a의 사본을 만든 것
	//CircularQueue2 c = a;	// 대입 연산자로 a의 사본을 만든 것

	//a.Enqueue(30);

	//printf("a\n");
	//a.TestPrintQueue();
	//printf("\nb\n");
	//b.TestPrintQueue();
	//printf("\nc\n");
	//c.TestPrintQueue();

}

