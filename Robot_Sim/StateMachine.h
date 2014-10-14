#pragma once
#include "aState.h"
#include "TurnRight.h"
#include "Forward.h"
#include "TurnLeft.h"
#include "Motor.h"

class StateMachine
{

private:
	bool rightIsOpen;
	bool roadIsBlocked;
	bool leftIsOpen;
	Motor rightMotor;
	Motor leftMotor;
public:
	StateMachine();	
	~StateMachine();

	void onUpdate(bool rightSensor, bool frontSensor, bool leftSensor);

	void Set_Next_State();

};

