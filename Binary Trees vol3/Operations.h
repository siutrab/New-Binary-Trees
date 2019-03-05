#pragma once
#include "Nodes.h"

class GuardInterface
{
public:
	GuardInterface();
	~GuardInterface();

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
	bool pop();
	bool push();
private:

};

class TreeInterface
{
public:
	TreeInterface();
	~TreeInterface();

	
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
	:public TreeInterface
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
