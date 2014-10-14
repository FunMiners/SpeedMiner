#pragma once
#include "MazeSim.h"
class WallPresence
{
private:
	MazeSim maze;
public:
	WallPresence();
	~WallPresence();
	//given x and y return if there is a wall or not
	bool checkWall(const int x, const int y);
};

