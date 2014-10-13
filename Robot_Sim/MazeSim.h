#pragma once
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <string>
//This class will simulate a maze
class MazeSim
{
private:
	std::vector<std::vector<int> > data ; //vector of int with data of maze 
public:
	MazeSim();
	~MazeSim();
	std::vector<std::vector<int> > readFile();
	/*void printf(std::vector<std::vector<int> > printData);*/
};

