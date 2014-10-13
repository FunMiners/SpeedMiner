#pragma once
#include "aState.h"
#include <iostream>

using namespace std;
class Forward :
	public aState
{
public:
	Forward();
	~Forward();

	void Handle_State(bool isOpen, bool isBlocked);
	void Set_Next_State(aState& state);
};

