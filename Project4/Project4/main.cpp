#include <iostream>
#include <string>
#include <cstdlib>
#include <clocale>
#include "Passning.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "swedish");

	Instring input;
	int i = 0;
	string* argv[1];

	cout << "Skriv hur m�nga teckenrader som skall skrivas! Avsluta med radslut (retur)" << endl;
	i = input.GetAntal();
	cin.get();
	cout << "Raden skall skrivas ut " << i << " g�nger" << endl;
	cout << "\nSedan skriv raden, anv�nd godtyckliga tecken! Avsluta teckenstr�ngen med radslut (retur)" << endl;
	argv[0] = input.Return_Str_ptr();
	cout << "\n";
	cout << "Raderna skrivs ut h�r nedanf�r: " << endl;
	input.Passning(i, *argv);
	cin.get();

	return 0;
}