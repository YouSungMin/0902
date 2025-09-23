#pragma once
#include <stdio.h>
class CircularQueue2
{
public:

	CircularQueue2(unsigned int InMaxSize)
		: MaxSize(InMaxSize == 0 ? 1 : InMaxSize)
	{
		if (InMaxSize == 0)
		{
			printf("��û�� ũ�� 0�� ��ȿ���� �ʾ� �ּ� ũ���� 1�� �����Ͽ����ϴ�..\n");
		}
		Data = new int[MaxSize];
	}
	~CircularQueue2()
	{
		if(Data != nullptr)
		{ 
			delete Data;
			Data = nullptr;
		}
	}

	CircularQueue2(const CircularQueue2&) = delete;	// ���� �����ڴ� ����
	CircularQueue2& operator=(const CircularQueue2&) = delete;	// ���� �����ڰ� ����

	void Enqueue(int InValue);
	int Dequeue();
	
	void TestPrintQueue();

	inline bool IsFull() const
	{
		return (Rear + 1) % MaxSize == Front;
	}
	inline bool IsEmpty() const
	{
		return Front == Empty;
	}
	inline int Peek() const
	{
		if (IsEmpty())
		{
			printf("ť�� ����ֽ��ϴ�.\n");
			return Empty;
		}
		return Data[Front];
	}
	inline int GetSize() const
	{
		return ((Rear + MaxSize) - Front) % MaxSize + 1;
	}

private:
	unsigned int MaxSize = 1;
	static constexpr unsigned int Empty = -1;
	int Front = Empty;
	int Rear = Empty;
	
	int* Data = nullptr;
};

