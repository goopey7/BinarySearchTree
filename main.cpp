#include <iostream>
#include "BinaryTree.h"

int main()
{
	BinaryTree tree;
	tree.insert(20);
	tree.insert(30);
	tree.insert(10);
	std::cout << tree.toString() << std::endl;
	return 0;
}
