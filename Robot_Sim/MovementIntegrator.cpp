#include "stdafx.h"
#include "MovementIntegrator.h"

void MovementIntegrator::update(Event* _event)
{
	if (_event == leftMotor)
	{
		leftHasUpdate = true;
	}
	else if (_event == rightMotor)
	{
		rightHasUpdate = true;
	}

	if (leftHasUpdate && rightHasUpdate)
	{
		leftHasUpdate = rightHasUpdate = false;

		Motor* _leftMotor = dynamic_cast<Motor*>(leftMotor);
		Motor* _rightMotor = dynamic_cast<Motor*>(rightMotor);

		int _leftMovement = _leftMotor->getValue();
		int _rightMovement = _rightMotor->getValue();

		// update direction
		updateDirection(_leftMovement, _rightMovement);

		// update coördinates (if necessary)
		updatePosition(_leftMovement, _rightMovement);
	}
}

void MovementIntegrator::updateDirection(const int _leftMovement, const int _rightMovement)
{
	if ((_leftMovement == 1 && _rightMovement == 1) || (_leftMovement == -1 && _rightMovement == -1)) return;

	int _currentOrientation = static_cast<int>(_orientation);

	if (_leftMovement == 1 && _rightMovement == -1)
	{
		_currentOrientation += 1;
		if (_currentOrientation > 3) _currentOrientation = 0;
	}
	else if (_leftMovement == -1 && _rightMovement == 1)
	{
		_currentOrientation -= 1;
		if (_currentOrientation < 0) _currentOrientation = 3;
	}

	_orientation = static_cast<Orientation>(_currentOrientation);
	//! Notify we have new information
	notify();
	return;
}

void MovementIntegrator::updatePosition(const int _leftMovement, const int _rightMovement)
{
	if ((_leftMovement == 1 && _rightMovement == -1) || (_leftMovement == -1 && _rightMovement == 1)) return;

	int movement = 0;
	if (_leftMovement == _rightMovement) movement = _leftMovement;

	switch (_orientation)
	{
		case Orientation::North:
			x -= movement;
			break;

		case Orientation::South:
			x += movement;
			break;

		case Orientation::East:
			y += movement;
			break;

		case Orientation::West:
			y -= movement;
			break;
	}

	//! Notify we have new information
	notify();
}

Orientation MovementIntegrator::getDirection()
{
	return _orientation;
}

Position MovementIntegrator::getPosition()
{
	return std::make_tuple(x, y);
}