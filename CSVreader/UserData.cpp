#include <string>
#include <iostream>
#include <vector>
using namespace std;


struct UserData
{

	UserData(
		string name,
		string email,
		string department,
		string position,
		string project,
		string task,
		string date,
		float hours
	) {
		Name = name;
		Email = email;
		Department = department;
		Position = position;
		Project = project;
		Task = task;
		Date = date;
		Hours = hours;
	}

	void display() 
	{
		cout << "   Name: " << Name << endl;
		cout << "   Email: " << Email << endl;
		cout << "   Department: " << Department << endl;
		cout << "   Position: " << Position << endl;
		cout << "   Project: " << Project << endl;
		cout << "   Task: " << Task << endl;
		cout << "   Date: " << Date << endl;
		cout << "   Hours: " << Hours << endl;
		cout << endl;
	}

	string Name;
	string Email;
	string Department;
	string Position;
	string Project;
	string Task;
	string Date;
	float Hours;
};
