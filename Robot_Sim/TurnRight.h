#pragma once
#include "aState.h"
#include <iostream>
using namespace std;
class TurnRight :
	public aState
{
public:
	TurnRight();
	~TurnRight();

	void Handle_State(bool isOpen, bool isBlocked);

	void Set_Next_State(aState& state);
};

