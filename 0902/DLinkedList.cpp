#include "DLinkedList.h"
#include <stdio.h>

DLinkedList::~DLinkedList()
{
	DListNode* Current = Head;
	while (Current)
	{
		DListNode* NodeToDelete = Current;
		Current = Current->Next;
		delete NodeToDelete;
		NodeToDelete = nullptr;
	}
}

void DLinkedList::DAdd(int32 InData)
{
	DListNode* Node = new DListNode(InData);

	if (IsEmpty())
	{
		Head = Node;
		Tail = Node;
		//Head->Prev = Tail;
		//Tail->Next = Head;
	}
	else
	{
		Tail->Prev = Tail;
		Tail->Next = Node;
		Tail = Node;
	}
	Size++;
}

void DLinkedList::DInsertAt(int32 InData, uint32 InPosition)
{
	if (InPosition > Size)
	{
		InPosition = Size;
	}

	if (InPosition == Size)
	{
		DAdd(InData);
		return;
	}

	DListNode* NewNode = new DListNode(InData);
	if(InPosition == 0)
	{
		NewNode->Next = Head;
		Head->Prev = NewNode;
		Head = NewNode;
	}
	else
	{
		//중간에 추가하는 경우
		DListNode* Prev = Head;
		const uint32 TargetIndex = InPosition - 1;
		for (uint32 i = 0; i < TargetIndex; i++)
		{
			Prev = Prev->Next;
		}
		NewNode->Next = Prev->Next;
		NewNode->Prev = Prev;
		Prev->Next = NewNode;
	}
	Size++;
}

void DLinkedList::DRemove(int32 InData)
{
	if(IsEmpty())
		return;

	DListNode* NodeToDelete = nullptr;
	DListNode* PrevNode = nullptr;

	if(Head->Data == InData)
	{
		NodeToDelete = Head;
		Head = Head->Next;
		if(IsEmpty())
		{
			Tail = nullptr;
		}
	}
	else
	{
		PrevNode = Head;
		while (PrevNode->Next != nullptr
			&& PrevNode->Next->Data != InData)
		{
			PrevNode = PrevNode->Next;
		}

		if (PrevNode->Next != nullptr)
		{
			NodeToDelete = PrevNode->Next;
			PrevNode->Next = NodeToDelete->Next;
			PrevNode->Next->Prev = PrevNode;

			if (NodeToDelete == Tail)
				Tail = PrevNode;
		}
	}
	if (NodeToDelete)
	{
		delete NodeToDelete;
		NodeToDelete = nullptr;
		Size--;
	}
	else
	{
		printf("%d를 가진 노드가 없습니다.\n", InData);
	}
}

void DLinkedList::DRemoveAt(uint32 InPosition)
{
	if (InPosition >= Size)
	{
		printf("%u 위치는 범위를 벗어났습니다.\n", InPosition);
		return;
	}

	DListNode* NodeToDelete = nullptr;
	if (InPosition == 0)
	{
		NodeToDelete = Head;
		Head = Head->Next;
		if (IsEmpty())
		{
			Tail = nullptr;
		}
	}
	else
	{
		if (Size / 2.0f > InPosition+1)
		{
			DListNode* PrevNode = Head;
			const uint32 TargetIndex = InPosition - 1;
			for (uint32 i = 0; i < TargetIndex; i++)
			{
				PrevNode = PrevNode->Next;
			}
			NodeToDelete = PrevNode->Next;
			PrevNode->Next = NodeToDelete->Next;
			PrevNode->Next->Prev = PrevNode;
			if (NodeToDelete == Tail)
			{
				Tail = PrevNode;
			}

			delete NodeToDelete;
			Size--;
		}
		else
		{
			DListNode* PrevNode = Tail;
			for (uint32 i = Size -1 ; i > InPosition; i--)
			{
				PrevNode = PrevNode->Prev;
			}
			NodeToDelete = PrevNode->Prev;
			PrevNode->Prev = NodeToDelete->Prev;
			PrevNode->Prev->Next = PrevNode;
			if (NodeToDelete == Head)
			{
				Head = PrevNode;
			}

			delete NodeToDelete;
			Size--;
		}
	}
}

DListNode* DLinkedList::DSearch(int32 InData) const
{
	DListNode* Result = nullptr;
	DListNode* Current = Head;
	while (Current != nullptr)
	{
		if (Current->Data == InData)
		{
			Result = Current;
			break;
		}
		Current = Current->Next;
	}

	return Result;
}

void DLinkedList::DPrintList() const
{
	DListNode* Current = Head;

	printf("리스트(크기:%u) :", Size);
	while (Current)
	{
		printf("%d -> ", Current->Data);
		Current = Current->Next;
	}
	printf("nullptr\n");
}

