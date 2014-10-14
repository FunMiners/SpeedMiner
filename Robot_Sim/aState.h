#pragma once
#include "Motor.h"
class aState
{

public:
	aState();
	virtual ~aState();

	virtual void Handle_Motor(Motor& rightMotor, Motor& leftMotor) = 0; // Give a motor a  value (1, 0 or -1) 1 means forward, 0 means off, -1 means backward
};

