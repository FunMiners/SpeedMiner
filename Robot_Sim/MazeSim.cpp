#include "stdafx.h"
#include "MazeSim.h"

using namespace std;


MazeSim::MazeSim(istream& mazeFile)
{
	data = readFile(mazeFile);
}
MazeSim::~MazeSim()
{
	//!delete the vector with the mazeData
	data.clear();
}
void MazeSim::printfunction(mazeType& printData){ 
	for (auto &yValues : printData){
		for (auto &xValues : yValues){
			cout << xValues << ", ";
		}
		cout << endl;
	}
}
mazeType MazeSim::readFile(istream& mazeFile){
		
	string completeText;
	mazeType tempData;

	while (getline(mazeFile, completeText))
	{		
		istringstream line(completeText);//every data from the text
		vector <int> lineData; //data of one line in the file
		int numb;//int to convert string to int

		while (line)
		{
			string chara; //one character of the line
			if (!getline(line, chara, ',')) break;
			istringstream(chara) >> numb; //string to int
			lineData.push_back(numb);
		}
		tempData.push_back(lineData);
	}
	try{
		if (!mazeFile.eof())
		{
			throw CallException("No file could be loaded");
		}
	}
	catch (std::runtime_error& e){
		std::cerr << "An error occured: " << e.what() << endl;
	}
	//printfunction(tempData);
	return tempData;
}
mazeType MazeSim::getMaze(){
	return data;
}