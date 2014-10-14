#pragma once
#include "aState.h"
#include "Motor.h"
#include <iostream>
using namespace std;
class TurnRight :
	public aState
{
public:
	TurnRight();
	~TurnRight();

	void Handle_Motor(Motor& rightMotor, Motor& leftMotor);
};

