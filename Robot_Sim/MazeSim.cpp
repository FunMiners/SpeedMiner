#include "stdafx.h"
#include "MazeSim.h"

using namespace std;


MazeSim::MazeSim()
{
	data = readFile();
}


MazeSim::~MazeSim()
{
}

//void printfunction(const std::vector<std::vector<int> > printData){
//	//for (auto a : printData){
//
//	//}
//}
std::vector<std::vector<int> > MazeSim::readFile(){
		
	ifstream infile("MazeFile.txt");
	string completeText;
	std::vector<std::vector<int> > tempData;

	while (getline(infile, completeText))
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
			//cout << numb << "," ;
		}
		//cout << endl;

		tempData.push_back(lineData);
	}
	try{
		if (!infile.eof())
		{
			throw CallException("No file could be loaded");
		}
	}
	catch (std::runtime_error& e){
		std::cerr << "An error occured: " << e.what() << endl;
	}
	//printf(tempData);
	return tempData;
}

std::vector<std::vector<int> > MazeSim::getMaze(){
	return data;
}