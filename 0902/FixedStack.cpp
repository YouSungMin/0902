#include "FixedStack.h"
#include <stdio.h>

void FixedStack::Push(int InValue)
{
    if (IsFull())
    {
        printf("������ ���� á���ϴ�!(Stack Overflow)\n");
        return;
    }
    TopIndex++;
    Data[TopIndex] =InValue;
}

int FixedStack::Pop()
{
    if (IsEmpty())
    {
        printf("������ ��� �ֽ��ϴ�!(Stack Underflow)\n");
        return Empty;
    }
    int Result = Data[TopIndex];
    TopIndex--;

    return Result;
}

int FixedStack::Top() const
{
    if (IsEmpty())
    {
        printf("������ ��� �ֽ��ϴ�. ���� ��ȯ�� �� �����ϴ�.\n");
        return Empty;
    }
    return Data[TopIndex];
}
