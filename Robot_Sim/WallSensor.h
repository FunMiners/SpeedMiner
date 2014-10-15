#pragma once
#include "IOObj.h"
#include "Event.h"
#include "Listener.h"

class WallSensor :
	public IOObj, public Event, public Listener
{
private:
	int value = 0;
public:
	WallSensor();
	int getValue();
	void setValue(int);
	void update(Event*);
	~WallSensor();
};

