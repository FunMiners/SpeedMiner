#pragma once

#include "Event.h"

#ifndef ORIENTATION_ENUM
#define ORIENTATION_ENUM

//! Enum for the Orientation
/*!
	Will probably be used by more than just the MovementIntegrator class. Therefore the enum has been
	places outside the class but inside it's own #ifndef defintion so it isn't defined twice (if defined)
	elsewhere like in the position sensor.
*/
enum Orientation{ North, East, South, West };

#endif

#ifndef MOVEMENTINTEGRATOR_H
#define MOVEMENTINTEGRATOR_H

//! Movement Integrator class
/*!
	The Movement Integrator class handles the simulated position of the 
	robot throughout the maze. It "listens" to events fired by the motors (Left / Right) 
	and updates the position and direction accordingly.
*/
class MovementIntegrator : public Listener
{
private:
	//! Current orienatation of the Robot
	Orientation _orientation;
	
	//! X and Y position variables of the Robot
	int x, y;

	//! boolean that is true when left engine has updated their "movement"
	bool leftHasUpdate;

	//! boolean that is true when right engine has updated their "movement"
	bool rightHasUpdate;

	//! Variable that holds the "Event/IOObj" of the left motor
	Event *leftMotor;

	//! Variable that holds the "Event/IOObj" of the right motor
	Event *rightMotor;

public:
	//! Constructor with member initialization list
	MovementIntegrator(Event *_leftMotor, Event *_rightMotor) : 
		_orientation( Orientation::North ), x(0), y(0), leftHasUpdate( false ), rightHasUpdate( false ), leftMotor(_leftMotor), rightMotor(_rightMotor)
	{
		leftMotor->attach(this);
		rightMotor->attach(this);
	}

	//! Destructor 
	virtual ~MovementIntegrator(){

		rightMotor->detach(this);
		delete rightMotor;

		leftMotor->detach(this);
		delete leftMotor;
	}

	//! Update the current variables with the given event
	void update(Event* _event);
};

#endif