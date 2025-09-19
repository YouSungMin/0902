#include "Day0918.h"
#include "LinkedList.h"
#include "DLinkedList.h"
#include <stdio.h>
void Day0918::TestSingleLinkedList()
{
	LinkedList MyList;

	printf("Add 테스트\n");
	MyList.Add(10);
	MyList.Add(20);
	MyList.Add(30);
	MyList.PrintList();

	printf("InsertAt 테스트\n");
	MyList.InsertAt(40,100);
	MyList.PrintList();
	MyList.InsertAt(5,0);
	MyList.PrintList();
	MyList.InsertAt(15,2);
	MyList.PrintList();

	printf("Remove 테스트\n");
	MyList.Remove(20);
	MyList.PrintList();
	MyList.Remove(123);
	MyList.PrintList();

	printf("RemoveAt 테스트\n");
	MyList.RemoveAt(10);
	MyList.PrintList();
	MyList.RemoveAt(7);
	MyList.PrintList();


	ListNode* Found = MyList.Search(15);
	if (Found)
	{
		printf("15를 찾았습니다.\n");
	}
	else
	{
		printf("15가 없습니다.\n");
	}
	Found = MyList.Search(999);
	if (Found)
	{
		printf("999를 없습니다.\n");
		
	}
	else
	{
		printf("999가 없습니다.\n");
	}
}

void Day0918::TestDoublyLinkedList()
{
	DLinkedList MyList;

	printf("Add 테스트\n");
	MyList.DAdd(10);
	MyList.DAdd(20);
	MyList.DAdd(30);
	MyList.DPrintList();

	printf("InsertAt 테스트\n");
	MyList.DInsertAt(40, 100);
	MyList.DPrintList();
	MyList.DInsertAt(5, 0);
	MyList.DPrintList();
	MyList.DInsertAt(15, 2);
	MyList.DPrintList();

	printf("Remove 테스트\n");
	MyList.DRemove(20);
	MyList.DPrintList();
	MyList.DRemove(123);
	MyList.DPrintList();

	printf("RemoveAt 테스트\n");
	MyList.DRemoveAt(10);
	MyList.DPrintList();
	MyList.DRemoveAt(4);
	MyList.DPrintList();
}
