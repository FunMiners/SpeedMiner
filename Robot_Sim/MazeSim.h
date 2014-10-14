#pragma once
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <string>
#include "CallException.h"


typedef std::vector<std::vector<int> > mazeType;

//This class will simulate a maze or read a maze from a text file
class MazeSim
{
private:
	mazeType data; //vector of int with data of maze 
public:
	MazeSim(std::istream& mazeFile);
	~MazeSim();	
	mazeType readFile(std::istream& mazeFile);
	mazeType getMaze();
	void printfunction(mazeType& printData);
};

