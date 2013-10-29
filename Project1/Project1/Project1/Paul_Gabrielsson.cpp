#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <cstdarg>
#include <clocale>
#include "Paul_Gabrielsson.h"
using namespace std;

int paul()
{
	setlocale(LC_ALL, "swedish");
	string name;

	cout << "What is your name?" << '\n' << '\n';
	cin >> name;
	cout << "\nMy name is ";
	cout << name << '\n';
	cin.clear();

	return 0;
}
