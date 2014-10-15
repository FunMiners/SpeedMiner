#pragma once
#include "MazeSim.h"
class WallPresence
{
	//!WallPresence Class
	/*!this class will be called by the sensors and return if there is a wall 
	at the location given by the sensor. 
	*/
private:
	//! Vector of the maze
	MazeSim maze;
public:
	//!Wallpresence will be called one time by sensor and then Mazefile will be loaded
	//!check that it's only loaded one time
	WallPresence();
	~WallPresence();
	//!given x and y return if there is a wall or not
	bool checkWall(const int x, const int y);
};

