#pragma once
#include "IOObj.h"
#include "Listener.h"

class PosSensor : 
	public IOObj
{
private: 
	int value = 0;
public:
	PosSensor();
	int getValue();
	void setValue(int);
	~PosSensor();
};

