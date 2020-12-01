//
// Created by Sam Collier on 24/11/2020.
//

#ifndef BINARYSEARCHTREE_BINARYTREE_H
#define BINARYSEARCHTREE_BINARYTREE_H


#include "Node.h"

class BinaryTree
{
	Node* root=nullptr;
	Node* insertRecursive(Node* rootNode, int key);
    Node* search(Node* rootNode, int key);
    Node* removeRecursive(Node* rootNode, int key);
    int minimumValue(Node* rootNode);
public:
	void insert(int key);
	Node* search(int key);
	Node* remove(int key);
	std::string toString(){return root->toString();}
};


#endif //BINARYSEARCHTREE_BINARYTREE_H
