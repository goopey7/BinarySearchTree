//
// Created by Sam Collier on 24/11/2020.
//

#ifndef BINARYSEARCHTREE_NODE_H
#define BINARYSEARCHTREE_NODE_H


#include <string>

class Node
{
private:
	Node* left= nullptr, *right= nullptr;
	int key;
public:
	Node(int inKey){key=inKey;}
	Node* getLeft(){return left;}
	Node* getRight(){return right;}
	int getKey(){return key;}
	void setLeft(Node* inLeft){left=inLeft;}
	void setRight(Node* inRight){right=inRight;}
	void setKey(int inKey){key=inKey;}
	std::string toString();
};


#endif //BINARYSEARCHTREE_NODE_H
