#include "CSV_reader.h"
#include <iostream>


void CSV_reader::ReadCSV(char separator)
{
	while (getline(*GetFile(), line))
	{

		stringstream inputString(line);

		//StudentId, Last Name, FirstName, Age, Phone Number, GPA

		string Name;
		string Email;
		string Department;
		string Position;
		string Project;
		string Task;
		string Date;
		float Hours;
		string tempString;

		getline(inputString, Name, separator);
		getline(inputString, Email, separator);
		getline(inputString, Department, separator);
		getline(inputString, Position, separator);
		getline(inputString, Project, separator);
		getline(inputString, Task, separator);
		getline(inputString, Date, separator);
		getline(inputString, tempString);
		Hours = atof(tempString.c_str());

		UserData person(Name, Email, Department, Position, Project, Task, Date, Hours);
		persons.push_back(person);
		line = "";
	}

}

void CSV_reader::FileOpen( std::string filename)
{
	file.open(filename, std::fstream::in);
	if (!file.is_open())
	{
		cout << "Can't open the file" << endl;
	}
	else
	{
		cout << "File is opened!\n\n";
	}


}

void CSV_reader::FileClose()
{
	file.close();
	cout << "File is closed!\n\n";
}

void CSV_reader::displayPersons()
{
	for (auto person : this->persons)
	{
		person.display();
	}
}


