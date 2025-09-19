#pragma once
#include <cstdint>
using int32 = int32_t;
using uint32 = uint32_t;

struct ListNode
{
	int Data = 0;
	ListNode* Next = nullptr;

	ListNode(int InData) : Data(InData){};
};
class LinkedList
{
public:
	
	LinkedList() = default;
	~LinkedList();

	void Add(int32 InData);

	void InsertAt(int32 InData,uint32 InPosition);

	void Remove(int32 InData);

	void RemoveAt(uint32 InPosition);

	ListNode* Search(int32 InData) const;

	void PrintList()const;

private:
	inline bool IsEmpty() const { return Head == nullptr; }
	ListNode* Head = nullptr;
	ListNode* Tail = nullptr;
	uint32 Size = 0;
};

