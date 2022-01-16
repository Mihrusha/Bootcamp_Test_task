#include "CSV_reader.h"
#include <iostream>


void CSV_reader::ReadCSV(char separator)
{
	while (getline(*GetFile(), line))
	{

		stringstream inputString(line);

		string Name;
		string Email;
		string Department;
		string Position;
		string Project;
		string Task;
		string Date;
		float Hours;
		string tempString;
		bool flag= false;
		getline(inputString, tempString, separator);
		if (tempString != "Ivan")
		{
			flag = true;
			Name = tempString;
		}
		else
		{
			flag = false;
			cout << "Use write name";
			break;
		}
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



int CSV_reader::SumHouars()
{
	
	int sum = 0;
	string temp;
	vector<int>num;
	for (int i = 0; i < persons.size(); i++)
	 {
		
			num.push_back(persons[i].Hours);
			cout << num[i];
		     	
	 }

	for (int j = 0; j < num.size(); j++)
	{
		sum += num[j];
	}
	cout << sum << endl;
	return sum;
}
	

void CSV_reader::displayPersons()
{
	cout << "Name" << " " << "Date" << " " << "Hours" << endl;
	persons.erase(persons.begin());
	for (auto person : this->persons)
	{

		person.display();
	}
}




