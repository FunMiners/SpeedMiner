#include "stdafx.h"
#include "Forward.h"


Forward::Forward()
{
}


Forward::~Forward()
{
}

void Forward::Handle_Motor(const Motor& rightMotor, const Motor& leftMotorr){
	std::cout << "Going forward" << endl;
	//leftMotor.drive(1);
	//rightMotor.drive(1);
}