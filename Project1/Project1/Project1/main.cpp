#include <iostream>
#include <clocale>
#include "Paul_Gabrielsson.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "swedish");

	int ret_value = 0;
	cout << "Förtestprogram för klassen Car" << "\n\n";
	ret_value = paul();
	cin.get();
	cin.get();

	return 0;
}
