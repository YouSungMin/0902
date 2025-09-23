#include "Day0919.h"
#include "FixedStack.h"
#include "CircularQueue.h"
#include "CircularQueue2.h"
#include <stdio.h>
#include <iostream>
void Day0919::TestStack()
{
	FixedStack Stack;
	printf("�ʱ� ���� �׽�Ʈ==========================\n");
	if(Stack.IsEmpty())
		printf("������ ����ֽ��ϴ�. %d\n", Stack.GetSize());

	printf("Push �׽�Ʈ==========================\n");
	for (int i = 10; i <= 30; i += 10)
	{
		Stack.Push(i);
		PrintStack(Stack);
	}
	printf("Pop �׽�Ʈ==========================\n");
	printf("Pop �� �� : %d\n", Stack.Pop());
	PrintStack(Stack);

	printf("OverFlow �׽�Ʈ==========================\n");
	for (int i = 0; i <= 8; i++)
	{
		Stack.Push(i);
		PrintStack(Stack);
	}

	printf("UnderFlow �׽�Ʈ==========================\n");
	for (int i = 0; i < 10; i++)
	{
		printf("Pop �� �� : %d\n", Stack.Pop());
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
		printf("1.EnQueue 2.Dequeue 3.Peek 4.TestPrintQueue	0.����\n");
		std::cin>>SelectMenu;
		switch (SelectMenu)
		{
		case 1:
		{
			printf("EnQueue �Ͻ� �� �Է� :");
			std::cin>>Data;
			Queue.Enqueue(Data);
			printf("%d , EnQueue ����\n",Data);
			break;
		}
		case 2:
		{
			printf("DeQueue ��� : %d\n", Queue.Dequeue());
			break;
		}
		case 3:
			printf("Peek ��� : %d\n",Queue.Peek());
			break;
		case 4:
			Queue.TestPrintQueue();
			break;
		case 0:
			break;
		default:
			printf("�߸� �Է� �ϼ̽��ϴ� �ٽ��Է����ּ���.\n");
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
		printf("1.EnQueue 2.Dequeue 3.Peek 4.TestPrintQueue	0.����\n");
		std::cin >> SelectMenu;
		switch (SelectMenu)
		{
		case 1:
		{
			if(!Queue.IsFull())
			{
				printf("EnQueue �Ͻ� �� �Է� :");
				std::cin >> Data;
				Queue.Enqueue(Data);
			}
			else
				printf("ť�� ���� á���ϴ�.\n");
			break;
		}
		case 2:
		{
			printf("DeQueue ��� : %d\n", Queue.Dequeue());
			break;
		}
		case 3:
			printf("Peek ��� : %d\n", Queue.Peek());
			break;
		case 4:
			Queue.TestPrintQueue();
			break;
		case 0:
			break;
		default:
			printf("�߸� �Է� �ϼ̽��ϴ� �ٽ��Է����ּ���.\n");
			break;
		}
	}
}

void Day0919::TestSwallowCopy()
{
	//// ���� ���� : ���縦 �� �� ������ �纻�� ����� ���� �ƴ϶� �ּҸ� �����ϴ� ����
	//CircularQueue2 a(5);
	//a.Enqueue(10);
	//a.Enqueue(20);

	//CircularQueue2 b(a);	// ���� �����ڷ� a�� �纻�� ���� ��
	//CircularQueue2 c = a;	// ���� �����ڷ� a�� �纻�� ���� ��

	//a.Enqueue(30);

	//printf("a\n");
	//a.TestPrintQueue();
	//printf("\nb\n");
	//b.TestPrintQueue();
	//printf("\nc\n");
	//c.TestPrintQueue();

}

