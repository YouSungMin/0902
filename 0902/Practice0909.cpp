#include "Practice0909.h"
#include <iostream>
#include <stdio.h>

void PointerParameter(int* pNumber)
{
	(*pNumber) = (*pNumber)*2;
}
void PointerParameter2(int* pNumber ,float* p2Number)
{
	(*pNumber) = (*pNumber) + 3;
	//(*p2Number) = (*p2Number) / 2;
	(*p2Number) *= 0.5f; // ������� ���ϱ��� ���ð����ϴٸ� ���ϱⰡ ������
}

void DynamicAllocation()
{	
	int Size = 5;
	int* Array = nullptr;
	Array = (int*)malloc(sizeof(int)*Size);


	free(Array);
	Array = nullptr;

	int* Data = new int(5); //int �ϳ��� �Ҵ�ް� �ּ��� ������ 5 ����
	delete Data;
	Data = nullptr;

	Array = new int[10];
	delete[] Array;
	Array = nullptr;
}

void DynamicAllocation2()
{
	int CurrentSize =0;
	int Size = 3;
	int* Array = new int[Size];
	int* NewArray = new int[CurrentSize];
	int num = -1;

	while (num != 0)
	{
		printf("�迭�� ���� ���ڸ� �Է��ϼ���(����: 0 �Է�) : ");
		if (Size > CurrentSize)
		{
			std::cin >> num;
			*(Array + CurrentSize) = num;
			CurrentSize++;
		}
		else
		{
			CurrentSize++;
			NewArray = new int[CurrentSize];
			for (int i = 0; i < Size; i++) {
				*(NewArray + i) = *(Array + i);
			}
			std::cin >> num;
			*(NewArray + Size) = num;

			Array = new int [CurrentSize];
			for (int i = 0; i < CurrentSize; i++) {
				*(Array + i) = *(NewArray + i);
			}
			Size = CurrentSize;

			printf("�迭���� ");
			for (int i = 0; i < Size; i++) {
				printf("%d ", *(Array + i));
			}
			printf(" �� ��� �ֽ��ϴ�.\n");
		}
	}

	delete[] Array;
	delete[] NewArray;
	Array = nullptr;
	NewArray = nullptr;
}

void Day0909()
{
	int Number = 0;
	int Number2 = 10;
	float Number3 = 3.0f;

	//int* p = nullptr;
	int* p = &Number;

	(*p) = 30;
	printf("%d ",Number);
	PointerParameter(&Number2);

	PointerParameter2(&Number2,&Number3);

	int* test = p;
	test++;
	//(*test) = 20; //�ſ����� ����
}
void Day09091()
{
	int Array[5] = {10,20,30,40,50};
	int* pArray = Array;
	int* pArray2 = &Array[0];

	*(pArray+2) =  300;

	for (int data : Array)
	{
		printf("%d ",data);
	}printf("\n");
}