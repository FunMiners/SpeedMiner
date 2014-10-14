#pragma once

#include "Listener.h"

#ifndef MOVEMENTINTEGRATOR_H
#define MOVEMENTINTEGRATOR_H


class MovementIntegrator : public Listener
{
public:
	MovementIntegrator(){}
	virtual ~MovementIntegrator(){}
	void update(Event* _event);
};

#endif