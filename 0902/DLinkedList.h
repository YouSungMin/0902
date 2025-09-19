#pragma once
#include <cstdint>
using int32 = int32_t;
using uint32 = uint32_t;

struct DListNode
{
	int Data = 0;
	DListNode* Next = nullptr;
	DListNode* Prev = nullptr;

	DListNode(int InData) : Data(InData) {};
};
class DLinkedList
{
public:

	DLinkedList() = default;
	~DLinkedList();

	void DAdd(int32 InData);

	void DInsertAt(int32 InData, uint32 InPosition);

	void DRemove(int32 InData);

	void DRemoveAt(uint32 InPosition);

	DListNode* DSearch(int32 InData) const;

	void DPrintList()const;

private:
	inline bool IsEmpty() const { return Head == nullptr; }
	DListNode* Head = nullptr;
	DListNode* Tail = nullptr;
	uint32 Size = 0;
};

