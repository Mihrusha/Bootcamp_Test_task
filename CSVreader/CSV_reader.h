#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include "UserData.cpp"
using namespace std;

class CSV_reader
{
	
private: std::fstream file;
	   string line = "";
	   vector<UserData> persons;
public:
	CSV_reader() {};
	~CSV_reader() {};

	void ReadCSV(char separator);
	void FileOpen(std::string filename);
	void FileClose();
	fstream *GetFile() 
	{
		
		return &file;
	}

	void displayPersons();
};
