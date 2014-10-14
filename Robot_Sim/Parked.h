#pragma once
#include "aState.h"
#include "Forward.h"
#include "TurnRight.h"
#include <iostream>
using namespace std;
class Parked :
	public aState
{
public:
	Parked();
	~Parked();

	void Handle_State(bool isopen, bool isBlocked);

	void Set_Next_State(aState& state);
};

