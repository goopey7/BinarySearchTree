//
// Created by Sam Collier on 24/11/2020.
//

#include "BinaryTree.h"

void BinaryTree::insert(int key)
{
	root=insertRecursive(root,key);
}

Node* BinaryTree::insertRecursive(Node* rootNode, int key)
{
	if(rootNode == nullptr)
	{
        rootNode = new Node(key);
		return rootNode;
	}
	else if(key < rootNode->getKey())
	{
		rootNode->setLeft(insertRecursive(rootNode->getLeft(), key));
	}
	else if(key > rootNode->getKey())
	{
		rootNode->setRight(insertRecursive(rootNode->getRight(), key));
	}
	return rootNode;
}

Node* BinaryTree::search(Node* rootNode, int key)
{
	if(rootNode->getKey() == key)
		return rootNode;
	else if(key > rootNode->getKey())
		return search(rootNode->getRight(), key);
	else if(key < rootNode->getKey())
		return search(rootNode->getLeft(), key);
}

Node* BinaryTree::search(int key)
{
    return search(root,key);
}

Node* BinaryTree::removeRecursive(Node* rootNode, int key)
{
    // base case
    if(rootNode==nullptr)
        return rootNode;

    if(key < rootNode->getKey()) // key is smaller, so look left
        rootNode->setLeft(removeRecursive(rootNode->getLeft(),key));
    else if(key > rootNode->getKey()) // key is greater, so look right
        rootNode->setRight(removeRecursive(rootNode->getRight(),key));
    else // key is equal to root, so we have found what we are looking for
    {
        // if we have one child
        if(rootNode->getLeft()==nullptr)
        {
            Node* tmp = rootNode->getRight();
            delete rootNode;
            return tmp;
        }
        else if(rootNode->getRight()==nullptr)
        {
            Node* tmp = rootNode->getLeft();
            delete rootNode;
            return tmp;
        }

        // if we have two children
        // set the node to the smallest value on the right side.
        Node* tmp = search(rootNode->getRight(),minimumValue(rootNode->getRight()));
        rootNode->setKey(tmp->getKey());
        rootNode->setRight(removeRecursive(rootNode->getRight(),tmp->getKey()));
    }
}

int BinaryTree::minimumValue(Node* rootNode)
{
    int minValue = rootNode->getKey();
    while(rootNode->getLeft() != nullptr)
    {
        minValue = rootNode->getLeft()->getKey();
        rootNode = rootNode->getLeft();
    }
    return minValue;
}

Node* BinaryTree::remove(int key)
{
    return removeRecursive(root,key);
}
