#include "BinarySearchTree.h"
#include <stdio.h>

BinarySearchTree::~BinarySearchTree()
{
    DestroyTree(Root);
}

void BinarySearchTree::Insert(int InKey)
{
    Root = InsertNode(Root,InKey);
}

void BinarySearchTree::Delete(int InKey)
{
    Root = DeleteNode(Root, InKey);
}

TreeNode* BinarySearchTree::Search(int InKey)
{
    return SearchNode(Root, InKey);
}

void BinarySearchTree::PrintPreOrder() const
{
    printf("PreOrder : ");
    PreOrderTraversal(Root);
    printf("\n");
}

void BinarySearchTree::PrintInOrder() const
{
    printf("InOrder : ");
    InOrderTraversal(Root);
    printf("\n");
}

void BinarySearchTree::PrintPostOrder() const
{
    printf("PostOrder : ");
    PostOrderTraversal(Root);
    printf("\n");
}

TreeNode* BinarySearchTree::InsertNode(TreeNode* InNode, int InKey)
{
    if (InNode == nullptr)
    {
        return new TreeNode(InKey);
    }
    if (InKey < InNode->Key)
    {
        InNode->Left = InsertNode(InNode->Left,InKey);
    }
    else if (InKey > InNode->Key)
    {
        InNode->Right = InsertNode(InNode->Right,InKey);
    }
    //else
    //{
    //   //키가 중복되면 안됨
    //}
    return InNode;
}

TreeNode* BinarySearchTree::DeleteNode(TreeNode* InNode, int InKey)
{
    if (InNode == nullptr)
    {
        return InNode;
    }
    if (InKey < InNode->Key)
    {
        InNode->Left = DeleteNode(InNode->Left,InKey);
    }
    else if (InKey > InNode->Key)
    {
        InNode->Right = DeleteNode(InNode->Right,InKey);
    }
    else
    {
        if (InNode->Left == nullptr)
        {
            TreeNode* Temp = InNode->Right;
            delete InNode;
            return Temp;
        }
        else if (InNode->Right == nullptr)
        {
            TreeNode* Temp = InNode->Left;
            delete InNode;
            return Temp;
        }
        
        TreeNode* Temp = FindMinNode(InNode->Right);
        InNode->Key = Temp->Key;
        InNode->Right = DeleteNode(InNode->Right,Temp->Key);
    }
    return InNode;
}

TreeNode* BinarySearchTree::SearchNode(TreeNode* InNode, int InKey)
{
    if (InNode == nullptr)
    {
        return nullptr;
    }

    if (InKey < InNode->Key)
    {
        return SearchNode(InNode->Left,InKey);
    }
    else if (InKey > InNode->Key)
    {
        return SearchNode(InNode->Right, InKey);
    }
    else
    {
        return InNode;
    }
}

TreeNode* BinarySearchTree::FindMinNode(TreeNode* InNode)
{
    while (InNode != nullptr && InNode->Left != nullptr)
    {
        InNode = InNode->Left;
    }
    return InNode;
}

void BinarySearchTree::PreOrderTraversal(TreeNode* InNode)const
{
    if (InNode != nullptr)
    {
        printf("%d ", InNode->Key);
        PreOrderTraversal(InNode->Left);
        PreOrderTraversal(InNode->Right);
    }
}

void BinarySearchTree::InOrderTraversal(TreeNode* InNode)const
{
    if (InNode != nullptr)
    {
        InOrderTraversal(InNode->Left);
        printf("%d ", InNode->Key);
        InOrderTraversal(InNode->Right);
    }
}

void BinarySearchTree::PostOrderTraversal(TreeNode* InNode)const
{
    if (InNode != nullptr)
    {
        PostOrderTraversal(InNode->Left);
        PostOrderTraversal(InNode->Right);
        printf("%d ", InNode->Key);
    }
}

void BinarySearchTree::DestroyTree(TreeNode* InNode)
{
    if (InNode != nullptr)
    {
        DestroyTree(InNode->Left);
        DestroyTree(InNode->Right);
        delete InNode;
    }
}
