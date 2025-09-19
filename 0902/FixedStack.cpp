#include "FixedStack.h"
#include <stdio.h>

void FixedStack::Push(int InValue)
{
    if (IsFull())
    {
        printf("스택이 가득 찼습니다!(Stack Overflow)\n");
        return;
    }
    TopIndex++;
    Data[TopIndex] =InValue;
}

int FixedStack::Pop()
{
    if (IsEmpty())
    {
        printf("스택이 비어 있습니다!(Stack Underflow)\n");
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
        printf("스택이 비어 있습니다. 값을 반환할 수 없습니다.\n");
        return Empty;
    }
    return Data[TopIndex];
}
