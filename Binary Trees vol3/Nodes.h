#include <iostream>
template<typename DataType>
class Node;

template<typename DataType>
class NodeInterface
{
private:
	DataType* valuePtr;
protected:
	Node<DataType>* LeftChildPtr;
	Node<DataType>* RightChildPtr;
	Node<DataType>* ParentPtr;

public:
	NodeInterface()
	{
		this->valuePtr = nullptr;
		this->LeftChildPtr = nullptr;
		this->RightChildPtr = nullptr;
		this->ParentPtr = nullptr;
	}
	///
	// GETTERS
	virtual bool getLeftChild(Node<DataType>* NodePtr)
	{
		if (this->LeftChildPtr == nullptr)
		{
			NodePtr = nullptr;
			return false;

		}
		else
		{
			NodePtr = this->LeftChildPtr;
			return true;
		}
	}
	virtual bool getRightChild(Node<DataType>* NodePtr)
	{
		if (this->RightChildPtr == nullptr)
		{
			NodePtr = nullptr;
			return false;

		}
		else
		{
			NodePtr = this->RightChildPtr;
			return true;
		}
	}
	virtual bool getValue(DataType* value) { return false; }
	virtual bool insert(Node<DataType>* NodePtr) { return false; }
};

///
// NODE CLASS //
///
template<typename DataType>
class Node
	: public NodeInterface<DataType>
{
	
public:

	bool insert(Node<DataType>* NodePtr, EmptyNode<DataType>* EmptyNodePtr)
	{
		
			if(NodePtr->getValue())
	}
};

///
// ROOT NODE CLASS ///
///
template<typename DataType>
class RootNode
	: public Node<DataType>
{
protected:
	
	
};

///
// EMPTY NODE //
///
template<typename DataType>
class EmptyNode
	: public NodeInterface<DataType>
{

public:
	// Aways returtns false, bacause empty node cannot have children
	inline bool insert(Node<DataType>* NodePtr) { return false; }

	//
	/// CONSTRUCTOr
	EmptyNode()
	{
		this->ParentPtr = nullptr;
		this->LeftChildPtr = nullptr;
		this->RightChildPtr = nullptr;
	}

};