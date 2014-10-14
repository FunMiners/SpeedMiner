#include "stdafx.h"
#include "WallPresence.h"


WallPresence::WallPresence()
{
	maze = MazeSim();
}


WallPresence::~WallPresence()
{
}
bool WallPresence::checkWall(const int x, const int y){
	if (maze.getMaze().at(x).at(y) == 0)
		return true;	
	else
		return false;
	
}
