// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;

void exit() {
	char exit;
	cout << " \nchcesz wyjsc z programu? (y/n) \n";
	cin >> exit;

	switch (exit)
	{
	case 'y':
		cin.get();
		break;
	case 'n':
		cout << "i tak wyjdziesz...";
		cin.get();
		break;
	default:
		break;
	}
}


int main()
{
	const int ArSize = 16;
	double factorials[ArSize];
	factorials[1] = factorials[0] = 1.0;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i*factorials[i - 1];
	for (int i = 0; i < ArSize; i++)
		cout << i << "! = " << factorials[i] << endl;

	exit();
}

