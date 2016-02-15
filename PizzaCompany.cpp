// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;

void exit() {
	char exit;
	cout << " \nDo you want to exit the program? (y/n) \n";
	cin >> exit;

	switch (exit)
	{
	case 'y':
		cin.get();
		break;
	case 'n':
		cout << "I will exit anyway...";
		cin.get();
		break;
	default:
		break;
	}
}


struct MyStruct
{
	char company[20];
	double size;
	double weight;
};



int main()
{
	MyStruct *ptr = new MyStruct[3];
	for (size_t i = 0; i < 3; i++)
	{
		cout << "Give the name of company: ";
		cin.getline(ptr->company, 20);
		cout << "\nsize of pizza: ";
		cin >> ptr->size;
		cout << "\nand weight: ";
		cin >> ptr->weight;
		cout << "\n Your pizza is: " << ptr->company << ", size: " << ptr->size << " and weight " << ptr->weight << endl;
		cin.get();
	}
	exit();
}

