#include "stdafx.h"
#include "WallSensor.h"


WallSensor::WallSensor()
{
}


WallSensor::~WallSensor()
{
}

int WallSensor::getValue(){
	return value;
}

void WallSensor::setValue(int _value){
	value = _value;
	notify();
}

void WallSensor::update(Event* _event){

}