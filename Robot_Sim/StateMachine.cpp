#include "stdafx.h"
#include "StateMachine.h"


StateMachine::StateMachine()
{
}


StateMachine::~StateMachine()
{
}

//Onstart, we put the robot (actually the whole simulation) in the "parked state". From this state on all other states are called.
bool StateMachine::Start(){
	Parked parkState;
	isOpen = false;
	isBlocked = false;
	parkState.Handle_State(isOpen, isBlocked);

	return true;
}