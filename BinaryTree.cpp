//
// Created by Sam Collier on 24/11/2020.
//

#include "BinaryTree.h"

void BinaryTree::insert(int key)
{
	root=insertRecursive(root,key);
}

Node* BinaryTree::insertRecursive(Node *root, int key)
{
	if(root== nullptr)
	{
		root = new Node(key);
		return root;
	}
	else if(key < root->getKey())
	{
		root->setLeft(insertRecursive(root->getLeft(),key));
	}
	else if(key > root->getKey())
	{
		root->setRight(insertRecursive(root->getRight(),key));
	}
	return root;
}

Node* BinaryTree::search(Node* root,int key)
{
	if(root->getKey()==key)
		return root;
	else if(key > root->getKey())
	{
		return search(root->getRight(),key);
	}
	else if(key < root->getKey())
	{
		return search(root->getLeft(),key);
	}
}
