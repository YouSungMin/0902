#include "LinkedList.h"
#include <stdio.h>


LinkedList::~LinkedList()
{
	ListNode* Current = Head;
	while (Current)
	{
		ListNode* NodeToDelete = Current;
		Current = Current->Next;
		delete NodeToDelete;
		NodeToDelete = nullptr;
	}
}

void LinkedList::Add(int32 InData)
{
	ListNode* Node = new ListNode(InData);

	if (IsEmpty())
	{
		Head = Node;
		Tail = Node;
	}
	else
	{
		Tail->Next = Node;
		Tail = Node;
	}
	Size++;
}

void LinkedList::InsertAt(int32 InData, uint32 InPosition)
{
	if (InPosition > Size)
	{
		InPosition = Size;
	}

	if (InPosition == Size)
	{
		Add(InData);
		return;
	}

	ListNode* NewNode = new ListNode(InData);
	if (InPosition == 0)
	{
		//�� �տ� �߰��Ǵ� ���
		NewNode->Next = Head;
		Head = NewNode;
	}
	else
	{
		//�߰��� �߰��ϴ� ���
		ListNode* Prev = Head;
		const uint32 TargetIndex = InPosition -1;
		for (uint32 i = 0; i < TargetIndex; i++)
		{
			Prev = Prev->Next;
		}
		NewNode->Next = Prev->Next;
		Prev->Next = NewNode;
	}
	Size++;
}

void LinkedList::Remove(int32 InData)
{
	if(IsEmpty())
		return;

	ListNode* NodeToDelete = nullptr; 
	ListNode* PrevNode = nullptr;

	if (Head->Data == InData)
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
			if(NodeToDelete == Tail)
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
		printf("%d�� ���� ��尡 �����ϴ�.\n",InData);
	}
}

void LinkedList::RemoveAt(uint32 InPosition)
{
	if (InPosition >= Size)
	{
		printf("%u ��ġ�� ������ ������ϴ�.\n",InPosition);
		return;
	}

	ListNode* NodeToDelete = nullptr;
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
		ListNode* Prev = Head;
		const uint32 TargetIndex = InPosition-1;
		for (uint32 i = 0; i < TargetIndex; i++)
		{
			Prev = Prev->Next;
		}
		NodeToDelete = Prev->Next;
		Prev->Next = NodeToDelete->Next;
		if (NodeToDelete == Tail)
		{
			Tail = Prev;
		}

		delete NodeToDelete;
		Size--;
	}
}

ListNode* LinkedList::Search(int32 InData) const
{
	ListNode* Result = nullptr;
	ListNode* Current = Head;
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

void LinkedList::PrintList() const
{
	ListNode* Current = Head;

	printf("����Ʈ(ũ��:%u) :",Size);
	while (Current)
	{
		printf("%d -> ", Current->Data);
		Current = Current->Next;
	}
	printf("nullptr\n");
}
