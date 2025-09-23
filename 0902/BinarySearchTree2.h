#pragma once
struct TreeNode
{
	int Key = 0;
	TreeNode* Left = nullptr;
	TreeNode* Right = nullptr;

	TreeNode() = default;
	TreeNode(int InKey) : Key(InKey) {}
};

class BinarySearchTree2
{
	BinarySearchTree2() = default;
	~BinarySearchTree2();

	void Insert2(int InKey);
	void Delete2(int InKey);
	TreeNode* Search2(int InKey);

	void PrintPreOrder2() const;
	void PrintInOrder2() const;
	void PrintPostOrder2() const;

	inline bool IsEmpty() const { return Root == nullptr; }

private:
	TreeNode* Root = nullptr;

	TreeNode* InsertNode2(TreeNode* InNode, int InKey);
	TreeNode* DeleteNode2(TreeNode* InNode, int InKey);
	TreeNode* SearchNode2(TreeNode* InNode, int InKey);
	TreeNode* FindMinNode2(TreeNode* InNode);

	void PreOrderTraversal2(TreeNode* InNode)const;
	void InOrderTraversal2(TreeNode* InNode)const;
	void PostOrderTraversal2(TreeNode* InNode)const;

	void DestroyTree2(TreeNode* InNode);
};

