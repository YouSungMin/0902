#include "Day0918.h"
#include "LinkedList.h"
#include "DLinkedList.h"
#include <stdio.h>
void Day0918::TestSingleLinkedList()
{
	LinkedList MyList;

	printf("Add �׽�Ʈ\n");
	MyList.Add(10);
	MyList.Add(20);
	MyList.Add(30);
	MyList.PrintList();

	printf("InsertAt �׽�Ʈ\n");
	MyList.InsertAt(40,100);
	MyList.PrintList();
	MyList.InsertAt(5,0);
	MyList.PrintList();
	MyList.InsertAt(15,2);
	MyList.PrintList();

	printf("Remove �׽�Ʈ\n");
	MyList.Remove(20);
	MyList.PrintList();
	MyList.Remove(123);
	MyList.PrintList();

	printf("RemoveAt �׽�Ʈ\n");
	MyList.RemoveAt(10);
	MyList.PrintList();
	MyList.RemoveAt(7);
	MyList.PrintList();


	ListNode* Found = MyList.Search(15);
	if (Found)
	{
		printf("15�� ã�ҽ��ϴ�.\n");
	}
	else
	{
		printf("15�� �����ϴ�.\n");
	}
	Found = MyList.Search(999);
	if (Found)
	{
		printf("999�� �����ϴ�.\n");
		
	}
	else
	{
		printf("999�� �����ϴ�.\n");
	}
}

void Day0918::TestDoublyLinkedList()
{
	DLinkedList MyList;

	printf("Add �׽�Ʈ\n");
	MyList.DAdd(10);
	MyList.DAdd(20);
	MyList.DAdd(30);
	MyList.DPrintList();

	printf("InsertAt �׽�Ʈ\n");
	MyList.DInsertAt(40, 100);
	MyList.DPrintList();
	MyList.DInsertAt(5, 0);
	MyList.DPrintList();
	MyList.DInsertAt(15, 2);
	MyList.DPrintList();

	printf("Remove �׽�Ʈ\n");
	MyList.DRemove(20);
	MyList.DPrintList();
	MyList.DRemove(123);
	MyList.DPrintList();

	printf("RemoveAt �׽�Ʈ\n");
	MyList.DRemoveAt(10);
	MyList.DPrintList();
	MyList.DRemoveAt(4);
	MyList.DPrintList();
}
