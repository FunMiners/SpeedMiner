#include "stdafx.h"
#include "TurnRight.h"


TurnRight::TurnRight()
{
}


TurnRight::~TurnRight()
{
}

void TurnRight::Handle_Motor(Motor& rightMotor, Motor& leftMotor){
	rightMotor.setValue(1);
	leftMotor.setValue(-1);
}