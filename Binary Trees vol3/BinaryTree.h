#pragma once

//class BinaryTree
//{
//
//public:
//	BinaryTree();
//	~BinaryTree();
//
//};

class GuardInterface
{
public:
	Guard();
	~Guard();

private:

};

class EntranceGuard
	: public GuardInterface
{
public:
	EntranceGuard();
	~EntranceGuard();

private:

};

class ExitGuard
	: public GuardInterface
{
public:
	ExitGuard();
	~ExitGuard();

private:

};

class Queue
{
public:
	Queue();
	~Queue();

private:

};

class TreeInterface
{
public:
	Tree();
	~Tree();

private:

};

class TreeLocked
	: public TreeInterface
{
public:
	TreeLocked();
	~TreeLocked();

private:

};

class TreeUnlocked
	:public TreeInterface
{
public:
	TreeUnlocked();
	~TreeUnlocked();

private:

};

class TreeEmpty
	:TreeInterface
{
public:
	TreeEmpty();
	~TreeEmpty();

private:
	
};

class Insert
{
public:
	Insert();
	~Insert();

private:

};

class Delete
{
public:
	Delete();
	~Delete();

private:

};

class Find
{
public:
	Find();
	~Find();

private:

};

class NodeInterface
{
public:
	NodeInterface();
	~NodeInterface();

protected:
	
};

class RootNode
	: public NodeInterface
{
public:
	RootNode();
	~RootNode();

private:

};

class EmptyNode
	: public NodeInterface
{
public:
	EmptyNode();
	~EmptyNode();

private:

};

class Node
	: public NodeInterface
{
public:
	Node();
	~Node();

private:

};
