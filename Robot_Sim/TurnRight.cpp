#include "stdafx.h"
#include "TurnRight.h"


TurnRight::TurnRight()
{
}


TurnRight::~TurnRight()
{
}

void TurnRight::Handle_Motor(const Motor& rightMotor, const Motor& leftMotor){
	std::cout << "Turning right" << endl;
	//rightMotor.drive(-1)
	//leftMotor.drive(1)
}