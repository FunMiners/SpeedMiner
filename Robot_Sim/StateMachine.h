#pragma once
#include "Listener.h"
#include "aState.h"
#include "TurnRight.h"
#include "Forward.h"
#include "TurnLeft.h"
#include "Motor.h"
#include "WallSensor.h"

class StateMachine : public Listener
{

private:
	//Variable that holds the value of the right-wallsensor of the robot
	int rightIsOpen;
	//Variable that holds the valeu of the front-wallsensor of the robot
	int roadIsBlocked;
	//Variable that holds the value of the left-wallsensor of the robot
	int leftIsOpen;
	//Instance of class motor
	Motor rightMotor, leftMotor;
	//Instance of class Wallsensor.
	WallSensor* rightSensor;
	WallSensor* frontSensor;
	WallSensor* leftSensor;
public:
	//Default constructor
	StateMachine();
	//Custom constructor, not yet efficiently used
	StateMachine(Event* rightMotor, Event* leftMotor);	
	//Destructor
	virtual ~StateMachine();
	//Overloaded update function
	void update(Event* _event);
	//Function that will set the next state for the statemachine after evaluating some statements
	void Set_Next_State();

};

