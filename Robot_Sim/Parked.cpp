#include "stdafx.h"
#include "Parked.h"


Parked::Parked()
{
	std::cout << "Parked constructor called" << endl;
}


Parked::~Parked()
{
}

void Parked::Handle_State(bool isOpen, bool isBlocked){
	if (!isOpen && !isBlocked){
		Forward forward;
		Set_Next_State(forward);
	}
	else if (isOpen && !isBlocked){
		TurnRight t_right;
		Set_Next_State(t_right);
	}
}

void Parked::Set_Next_State(aState& state){
}