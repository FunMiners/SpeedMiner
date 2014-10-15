#pragma once
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <string>
#include "CallException.h"


typedef std::vector<std::vector<int> > mazeType;

//! MazeSim class
/*!
This class will read a simulated maze from a text file. The road which gives the solution to the maze is declared with a '2'
The walls are declared by '0'and other roads which will not let your find the end point are declared with a'1'
*/

class MazeSim
{
private:
	//!vector of int with data of the maze 
	//!starting point of the maze is (2,14) and the y-axis starts at the top and 
	//!the y value increases when you go more downwards
	mazeType data; 
public:
	//!std istream with the location of mazefile
	MazeSim(std::istream& mazeFile);
	~MazeSim();	
	//!get the mazefile from the istream and load it into 'MazeType data'
	mazeType readFile(std::istream& mazeFile);
	//!return data of the maze
	mazeType getMaze();
	//!print the vector of data
	void printfunction(mazeType& printData);
};

