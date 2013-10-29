#include <iostream>
#include <clocale>
#include "Paul_Gabrielsson.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "swedish");

	cout << "Förtestprogram för klassen Car" << "\n\n";
	paul();
	cin.get();
	cin.get();

	return 0;
}
