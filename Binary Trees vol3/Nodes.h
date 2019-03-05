#pragma once

template<class DataType>
class NodeInterface
{
public:
	bool setLeftChild();
	bool setRightChild();
	

protected:
	NodeInterface<DataType>* leftChild;
	NodeInterface<DataType>* rightChild;
};

template<class DataType>
class RootNode
	: public NodeInterface<DataType>
{
public:
	RootNode();
	~RootNode();

private:

};

template<class DataType>
class EmptyNode
	: public NodeInterface<DataType>
{
public:
	EmptyNode();
	~EmptyNode();

private:

};

template<class DataType>
class Node
	: public NodeInterface<DataType>
{
public:
	Node();
	~Node();
	bool changeParent();

private:

};
