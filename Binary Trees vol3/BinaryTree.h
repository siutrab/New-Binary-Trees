#pragma once
#include "Nodes.h"
//class BinaryTree
//{
//
//public:
//	BinaryTree();
//	~BinaryTree();
//
//};

template<class DataType>
class Queue
{
public:
	Queue();
	~Queue();
	bool push();	// Inserts an element at the beginning of queue returns true if succeed
	bool pop();		// Sends the pointer to the tree, returns true if succeed
	bool remove()	// Removes an element from queur
private:
	void reload()	// Sets the queue again (if an element is removed etc.)
};

template<class DataType>
class TreeInterface
{
public:


private:
	EmptyNode<DataType>* EmptyNodePtr;
	RootNode<DataType>* RootNodePtr;
};

template<class DataType>
class TreeLocked
	: public TreeInterface<DataType>
{
public:
	TreeLocked();
	~TreeLocked();

private:

};

template<class DataType>
class TreeUnlocked
	:public TreeInterface<DataType>
{
public:
	TreeUnlocked();
	~TreeUnlocked();

private:

};



