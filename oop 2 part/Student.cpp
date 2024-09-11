#include "Student.h"
#include<iostream>
#include<Windows.h>
using namespace std;

Student::Student()
{
	cout << endl << "construct by default" << endl;
	name = nullptr;
	email = nullptr;
	age = 0;
}
Student::Student(const char* Name, int Age)
{
	cout << endl <<"construct by 2 param" << endl;
	name = new char[strlen(Name) + 1];
	strcpy_s(name, strlen(Name) + 1, Name);

	email = nullptr;
	age = Age;
}
Student::Student(const char* Name, const char* Email, int Age)
{
	cout << endl << "construct by 3 param" << endl;
	name = new char[strlen(Name) + 1];
	strcpy_s(name, strlen(Name) + 1, Name);

	email = new char[strlen(Email) + 1];
	strcpy_s(email, strlen(Email) + 1, Email);
	age = Age;
}
void Student::Output()
{
	cout << "Name: " << name << endl;
	if(email!=nullptr) cout << "Email: " << email << endl;
	cout << "Age: " << age << endl << endl;
}
void  Student::InputName()
{
	char buff[20];
	cout << "Enter name -> ";
	cin >> buff;

	if (name != nullptr)
	{
		cout << "Delete " << name << endl;
		delete[] name;
	}

	name = new char[strlen(buff) + 1];
	strcpy_s(name, strlen(buff) + 1, buff);
}
void  Student::InputEmail()
{
	char buff1[20];
	cout << "Enter email -> ";
	cin >> buff1;

	if (email != nullptr)
	{
		cout << "Delete " << email << endl;
		delete[] email;
	}

	email = new char[strlen(buff1) + 1];
	strcpy_s(email, strlen(buff1) + 1, buff1);
}
void  Student::InputAge()
{
	cout << "Enter age -> ";
	cin >> age;
}
void  Student::Input()
{
	char buff[20];
	cout << "Enter name -> ";
	cin >> buff;

	if (name != nullptr) 
	{
		cout << "Delete " << name << endl;
		delete[] name;
	}

	name = new char[strlen(buff) + 1];
	strcpy_s(name, strlen(buff) + 1, buff);

	char buff1[20];
	cout << "Enter email -> ";
	cin >> buff1;

	if (email != nullptr)
	{
		cout << "Delete " << email << endl;
		delete[] email;
	}

	email = new char[strlen(buff1) + 1];
	strcpy_s(email, strlen(buff1) + 1, buff1);
	
	cout << "Enter age -> ";
	cin >> age;

}
Student::~Student()
{
	if (name != nullptr)
	{
		delete[] name;
	}
	if (email != nullptr)
	{
		delete[] email;
	}
	cout << "Destruct\n";
	Sleep(1000);

}