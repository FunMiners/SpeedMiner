#pragma once
#include "IOObj.h"
#include "Event.h"

class Motor : 
	public IOObj, public Event
{
private:
	int value = 0;
public:
	Motor();
	void setValue(int);
	int getValue();
	~Motor();
};

