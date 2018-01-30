// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string name;
	cout << "What's your name?" << endl;
	cin >> name;
	cout << "Hey there ," << name << "!\n" << endl;
	сin.get();
}
