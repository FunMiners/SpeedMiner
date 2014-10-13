#pragma once
class aState
{

public:
	aState();
	~aState();
	virtual void Handle_State(bool isOpen, bool isBlocked) = 0;

	virtual void Set_Next_State(aState& state)=0;
};

