//
// Created by Sam Collier on 24/11/2020.
//

#ifndef BINARYSEARCHTREE_BINARYTREE_H
#define BINARYSEARCHTREE_BINARYTREE_H


#include "Node.h"

class BinaryTree
{
	Node* root= nullptr;
	Node* insertRecursive(Node* root, int key);
public:
	void insert(int key);
	Node* search(Node* root,int key);
	std::string toString(){return root->toString();}
};


#endif //BINARYSEARCHTREE_BINARYTREE_H
