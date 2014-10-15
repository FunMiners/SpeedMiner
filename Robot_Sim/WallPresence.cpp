#include "stdafx.h"
#include "WallPresence.h"
#include <iostream>

WallPresence::WallPresence() : maze(std::ifstream("MazeFile.txt"))
{
	//checkWall(2, 14);//starting point of maze is 2,14
}


WallPresence::~WallPresence()
{
	
}
bool WallPresence::checkWall(const int x, const int y){
	if (maze.getMaze().at(y).at(x) == 0)
		return true;	
	else
		return false;
	
}
