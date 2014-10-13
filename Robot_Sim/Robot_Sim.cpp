// Robot_Sim.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "StateMachine.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	char wait;
	StateMachine machine;
	machine.Start();
	std::cin >> wait;
	return 0;	
}

