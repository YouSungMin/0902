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
			printf("요청한 크기 0은 유효하지 않아 최소 크기인 1로 설정하였습니다..\n");
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

	CircularQueue2(const CircularQueue2&) = delete;	// 복사 생성자는 없음
	CircularQueue2& operator=(const CircularQueue2&) = delete;	// 대입 연산자가 없음

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
			printf("큐가 비어있습니다.\n");
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

