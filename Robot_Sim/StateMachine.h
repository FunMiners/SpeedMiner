#pragma once
#include "aState.h"
#include "Parked.h"
class StateMachine
{

private:
	bool startBit;
	bool isOpen;
	bool isBlocked;
public:
	StateMachine();
	~StateMachine();

	bool Start();
};

