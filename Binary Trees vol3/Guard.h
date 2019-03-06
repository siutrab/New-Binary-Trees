#pragma once
class GuardInterface
{
public:


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