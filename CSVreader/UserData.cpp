#include <string>
#include <iostream>
#include <vector>
#include <numeric>
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

		cout << Name<<" ";
		/*cout << Email << endl;
		cout << Department << endl;
		cout << Position << endl;
		cout <<  Project << endl;
		cout << Task << endl;*/
		if(strstr(Date.c_str(), "-01"))
		{
			Date = "January";
		}
		if (strstr(Date.c_str(), "-02"))
		{
			Date = "February";
		}
	
		if (strstr(Date.c_str(), "-03"))
		{
			Date = "March";
		}
		if (strstr(Date.c_str(), "-04"))
		{
			Date = "April";
		}
		if (strstr(Date.c_str(), "-05"))
		{
			Date = "May";
		}
		if (strstr(Date.c_str(), "-06"))
		{
			Date = "June";
		}
		if (strstr(Date.c_str(), "-07"))
		{
			Date = "July";
		}
		if (strstr(Date.c_str(), "-08"))
		{
			Date = "August";
		}
		if (strstr(Date.c_str(), "-09"))
		{
			Date = "September";
		}
		if (strstr(Date.c_str(), "-10"))
		{
			Date = "October";
		}
		if (strstr(Date.c_str(), "-11"))
		{
			Date = "November";
		}
		if (strstr(Date.c_str(), "-12"))
		{
			Date = "December";
		}
		
		cout << Date << " ";

		

		cout << Hours << " ";
		
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
