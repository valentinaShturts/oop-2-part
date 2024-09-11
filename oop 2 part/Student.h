#pragma once
class Student
{
	char* name;
	char* email;
	int age;
public:
	////  prototype 
	Student();
	Student(const char*, int); // construct by 2 param
	Student(const char*, const char*, int); // construct by 3 param
	void Output();
	void InputName();
	void InputEmail();
	void InputAge();
	void Input();
	~Student();

};

