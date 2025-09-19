#include "CircularQueue.h"

void CircularQueue::Enqueue(int InValue)
{
    if (IsFull())
    {
        printf("ť�� ���� á���ϴ�.\n");
        return;
    }
    if (IsEmpty())
    {
        Front = 0;
    }

    Rear = (Rear + 1) % MaxSize;
    Data[Rear] = InValue;
}

int CircularQueue::Dequeue()
{
    if (IsEmpty())
    {
        printf("ť�� ������ϴ�.\n");
        return Empty;
    }
    int Result = Data[Front];
    
    if (Front != Rear)
    {
        Front = (Front+1) % MaxSize;
    }
    else
    {
        Front = Empty;
        Rear = Empty;
    }
    return Result;
}

void CircularQueue::TestPrintQueue()
{
    if (IsEmpty())
    {
        printf("ť�� ������ϴ�.\n");
        return;
    }
    for (int i = 0; i < GetSize(); i++)
    {
        printf("%d ", Data[(Front + i) % MaxSize]);
    }
    printf("\n Front = %d, Rear = %d\n",Front,Rear);
   
}
