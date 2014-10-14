// Robot_Sim.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "StateMachine.h"
#include "MazeSim.h"


int main()
{
	char wait;
	StateMachine machine;
	machine.Set_Next_State();
	std::cin.get();
	return 0;
}

