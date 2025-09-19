#pragma once
#include <stdio.h>
// 크기 고정, 데이터는 int
class CircularQueue
{
public:
	void Enqueue(int InValue);
	int Dequeue();
	
	void TestPrintQueue();

	inline bool IsFull() const
	{
		return (Rear +1) % MaxSize == Front;
	}
	inline bool IsEmpty() const
	{
		return Front == Empty;
	}
	inline int Peek() const
	{
		if (IsEmpty())
		{
			printf("큐가 비어있습니다.\n");
			return Empty;
		}
		return Data[Front];
	}
	inline int GetSize() const
	{
		return ((Rear + MaxSize) - Front) % MaxSize +1;
	}

private:
	static constexpr unsigned int MaxSize = 5;
	static constexpr int Empty = -1;
	int Front = Empty;
	int Rear = Empty;
	int Data[MaxSize];
};

