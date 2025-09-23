#include "Day0922.h"
#include "BinarySearchTree.h"

void Day0922::TestTree()
{
	BinarySearchTree bst;
	bst.Insert(30);
	bst.Insert(50);
	bst.Insert(10);
	bst.PrintPreOrder();
	bst.PrintInOrder();
	bst.PrintPostOrder();
}
