#include "stdafx.h"
#include "TurnLeft.h"


TurnLeft::TurnLeft()
{
}


TurnLeft::~TurnLeft()
{
}

void TurnLeft::Handle_Motor(const Motor& rightMotor, const Motor& leftMotor){
	std::cout << "Turning left" << endl;
	//rightMotor.drive(-1)
	//leftMotor.drive(1)
}