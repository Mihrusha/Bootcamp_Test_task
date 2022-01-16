#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include "UserData.cpp"
using namespace std;

class CSV_reader
{
	
private: std::fstream file;
	   string line = "";
  
public:
	vector<UserData> persons;
	CSV_reader() {};
	~CSV_reader() {};

	void ReadCSV(char separator);
	void FileOpen(std::string filename);
	void FileClose();
	fstream *GetFile() 
	{
		
		return &file;
	}

	int SumHouars();
	void displayPersons();

	void DeleteDublicates();


};
