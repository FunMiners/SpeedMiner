#include "stdafx.h"
#include "Forward.h"


Forward::Forward()
{
}


Forward::~Forward()
{
}

void Forward::Handle_Motor(Motor& rightMotor, Motor& leftMotor){
	rightMotor.setValue(1);
	leftMotor.setValue(1);
}