// Robot_Sim.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "StateMachine.h"
#include "MazeSim.h"
#include "WallPresence.h"


int main()
{
	char wait;
	StateMachine machine;
	machine.Set_Next_State();
	//MazeSim mazesim;
	WallPresence wallpr;
	std::cin >> wait;
	std::cin.get();
	return 0;
}

