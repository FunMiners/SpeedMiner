#pragma once
#include "Listener.h"
#include "aState.h"
#include "TurnRight.h"
#include "Forward.h"
#include "TurnLeft.h"
#include "Motor.h"

class StateMachine : public Listener
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

	void update(Event* _event);

	void Set_Next_State();

};

