#include "Student.h"
#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	Student obj0;
	obj0.Input();
	obj0.Output();

	Student obj1("Oleg", 21);
	obj1.InputName();
	obj1.InputEmail();
	obj1.InputAge();
	obj1.Output();

	Student mas[2]{ {"Alena", "alena@g.c",20 }, {"Maksim","masik@g.c", 22} };
	for (int i = 0; i < 2; i++)
	{
		mas[i].Output();
	}



	system("pause");
}