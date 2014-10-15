#include "stdafx.h"
#include "TurnLeft.h"


TurnLeft::TurnLeft()
{
}


TurnLeft::~TurnLeft()
{
}

void TurnLeft::Handle_Motor(Motor& rightMotor, Motor& leftMotor){
	std::cout << "Turning left" << endl;
	rightMotor.setValue(-1);
	leftMotor.setValue(1);
}