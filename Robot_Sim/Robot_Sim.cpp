// Robot_Sim.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "StateMachine.h"
#include "MazeSim.h"


int main()
{
	char wait;
	StateMachine machine;
	machine.Start();
	MazeSim mazesim;
	std::cin >> wait;
	std::cin.get();
	return 0;
}

