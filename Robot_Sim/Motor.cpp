#include "stdafx.h"
#include "Motor.h"


Motor::Motor()
{
}


Motor::~Motor()
{
}

int Motor::getValue(){
	return value;
}

void Motor::setValue(int _value){
	value = _value;
	notify();
}