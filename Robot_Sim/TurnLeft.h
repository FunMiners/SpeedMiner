#pragma once
#include "aState.h"
#include "Motor.h"
#include <iostream>
using namespace std;
class TurnLeft :
	public aState
{
public:
	TurnLeft();
	~TurnLeft();

	void Handle_Motor(Motor& rightMotor, Motor& leftMotor);
};

