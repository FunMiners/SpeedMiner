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

//void printf(std::vector<std::vector<int> > printData){
//	for (auto a : printData){
//
//	}
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
			cout << numb << "," ;
		}
		cout << endl;

		tempData.push_back(lineData);
	}
	if (!infile.eof())
	{
		cerr << "File not found!\n";
	}
	//printf(tempData);
	return tempData;
}