#pragma once
// 데이터는 int로 가정, 크기가 정해진 스택
class FixedStack
{
public:
	void Push(int InValue);

	int Pop();

	int Top() const; // Top에 있는 값을 확인만 하는 함수

	inline bool IsFull() const // 스택이 가득 찼는지 확인하는 함수 
	{
		return TopIndex == (StackCapacity-1);
	}
	inline bool IsEmpty() const // 스택이 비어있는지 확인하는 함수
	{
		return TopIndex == Empty;
	}
	inline int GetSize() const //스택의 현재 크기를 반환
	{
		return TopIndex+1;
	}
private:
	static constexpr int StackCapacity = 10;
	static constexpr int Empty = -1;
	int TopIndex = Empty;
	int Data[StackCapacity];
};

