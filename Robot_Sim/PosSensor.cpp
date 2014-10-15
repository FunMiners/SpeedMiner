#include "stdafx.h"
#include "PosSensor.h"


PosSensor::PosSensor()
{
}


PosSensor::~PosSensor()
{
}

int PosSensor::getValue(){
	return value;
}

void PosSensor::setValue(int _value){
	value = _value;
}