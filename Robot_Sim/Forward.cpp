#include "stdafx.h"
#include "Forward.h"


Forward::Forward()
{
	std::cout << "Forward constructor called" << endl;
}


Forward::~Forward()
{
}

void Forward::Handle_State(bool isOpen, bool isBlocked){
}

void Forward::Set_Next_State(aState& state){
}