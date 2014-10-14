#include "stdafx.h"
#include "Forward.h"


Forward::Forward()
{
}


Forward::~Forward()
{
}

void Forward::Handle_Motor(Motor& rightMotor, Motor& leftMotorr){
	std::cout << "Going forward" << endl;
	//leftMotor.drive(1);
	//rightMotor.drive(1);
}