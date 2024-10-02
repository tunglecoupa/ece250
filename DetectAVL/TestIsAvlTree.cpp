#include <iostream>
#include "BinaryTree.h"
using namespace std;

// Test program
int main()
{
	IsAvlTree<int> isAvl;

	BinarySearchTree<int> tree;

	isAvl.is_avl(tree.root);
}