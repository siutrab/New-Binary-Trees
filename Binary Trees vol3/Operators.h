#pragma once

class RotationInterface
{
public:
	RotationInterface();
	~RotationInterface();
	virtual void rotate() = 0;

private:
	void switchNodes();	// Changing two nodes
};

class RotationLeft
	: public RotationInterface
{
public:
	RotationLeft();
	~RotationLeft();
	virtual void rotate() override;

private:

};

class RotationRight
	: public RotationInterface
{
public:
	RotationRight();
	~RotationRight();
	virtual void rotate() override;
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