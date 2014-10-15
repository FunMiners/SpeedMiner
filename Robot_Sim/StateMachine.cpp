#include "stdafx.h"
#include "StateMachine.h"


StateMachine::StateMachine() 
	:rightIsOpen(rightSensor->getValue()), roadIsBlocked(frontSensor->getValue()), leftIsOpen(leftSensor->getValue())//constructor with	member initialization
{
}


StateMachine::~StateMachine()//Desctructor
{
}

void StateMachine::update(Event* _event){
	// The following values must be casted out of the event given to this function. 
	/*rightIsOpen=rightSensor;	
	roadIsBlocked=frontSensor;
	leftIsOpen=leftSensor*/
}

void StateMachine::Set_Next_State(){//Priority is to always go right if possible. States are called in this order
	if (rightIsOpen){
		TurnRight t_right;
		t_right.Handle_Motor(rightMotor, leftMotor);
	}
	else if (!roadIsBlocked){
		Forward forward;
		forward.Handle_Motor(rightMotor, leftMotor);
	}
	else if (leftIsOpen){
		TurnLeft t_left;
		t_left.Handle_Motor(rightMotor, leftMotor);
	}
	else if (!rightIsOpen && roadIsBlocked && !leftIsOpen){//Turn right if there is no other possible way to go.
		TurnRight t_right;
		t_right.Handle_Motor(rightMotor, leftMotor);
	}
	//note: implement a statement to turn motors off?
}