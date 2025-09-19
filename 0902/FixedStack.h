#pragma once
// �����ʹ� int�� ����, ũ�Ⱑ ������ ����
class FixedStack
{
public:
	void Push(int InValue);

	int Pop();

	int Top() const; // Top�� �ִ� ���� Ȯ�θ� �ϴ� �Լ�

	inline bool IsFull() const // ������ ���� á���� Ȯ���ϴ� �Լ� 
	{
		return TopIndex == (StackCapacity-1);
	}
	inline bool IsEmpty() const // ������ ����ִ��� Ȯ���ϴ� �Լ�
	{
		return TopIndex == Empty;
	}
	inline int GetSize() const //������ ���� ũ�⸦ ��ȯ
	{
		return TopIndex+1;
	}
private:
	static constexpr int StackCapacity = 10;
	static constexpr int Empty = -1;
	int TopIndex = Empty;
	int Data[StackCapacity];
};

