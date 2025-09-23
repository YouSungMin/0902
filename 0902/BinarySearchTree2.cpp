#include "BinarySearchTree2.h"
BinarySearchTree2::~BinarySearchTree2()
{
	DestroyTree2(Root);
}

void BinarySearchTree2::Insert2(int InKey)
{
	
}

void BinarySearchTree2::Delete2(int InKey)
{
}

TreeNode* BinarySearchTree2::Search2(int InKey)
{
	return nullptr;
}

void BinarySearchTree2::PrintPreOrder2() const
{
}

void BinarySearchTree2::PrintInOrder2() const
{
}

void BinarySearchTree2::PrintPostOrder2() const
{
}

TreeNode* BinarySearchTree2::InsertNode2(TreeNode* InNode, int InKey)
{
	
	return nullptr;
}

TreeNode* BinarySearchTree2::DeleteNode2(TreeNode* InNode, int InKey)
{
	return nullptr;
}

TreeNode* BinarySearchTree2::SearchNode2(TreeNode* InNode, int InKey)
{
	return nullptr;
}

TreeNode* BinarySearchTree2::FindMinNode2(TreeNode* InNode)
{
	return nullptr;
}

void BinarySearchTree2::PreOrderTraversal2(TreeNode* InNode) const
{
}

void BinarySearchTree2::InOrderTraversal2(TreeNode* InNode) const
{
}

void BinarySearchTree2::PostOrderTraversal2(TreeNode* InNode) const
{
}

void BinarySearchTree2::DestroyTree2(TreeNode* InNode)
{
	while (InNode != nullptr)
	{
		if(InNode->Left != nullptr)
			InNode = InNode->Left;
		else
		{
			InNode = InNode->Right;
			delete InNode->Left;
		}
	}
}
