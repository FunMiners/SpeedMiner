#pragma once
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <string>
#include "CallException.h"

//This class will simulate a maze or read a maze from a text file
class MazeSim
{
private:
	std::vector<std::vector<int> > data ; //vector of int with data of maze 
public:
	MazeSim();
	~MazeSim();
	std::vector<std::vector<int> > readFile();
	std::vector<std::vector<int> > getMaze();
	/*void printfunction(const std::vector<std::vector<int> > printData);*/
};

