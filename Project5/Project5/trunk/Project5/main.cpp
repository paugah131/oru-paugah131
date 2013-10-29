#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <clocale>
#include <stdlib.h>
#include "MultiMedia.h"
using namespace std;

int main()
{
	setlocale (LC_ALL, "swedish");
	MultiMedia mediadata;
	string t, n;
	int y;
	char c;
	cout << "Program f�r f�rteckning och listning av multimedieprylar" << '\n';
	cout << "________________________________________________________" << '\n' << '\n' << endl;
	mediadata.WriteMMDataToFile();
	/* while (true) */
	/* { */
		/* mediadata.ReadMMDataToConsole(); */
	/* } */
	cout << '\n' << "Listning av multimedieprylar m.h.a. datamedlemmar i klassen MultiMedia:" << endl;
	mediadata.WriteMMDataToConsole();
	cout << "\nListning fr�n fil av multimedieprylar:" << endl;
	mediadata.WriteMMFileDataToConsole();
	cout << '\n' << "Listning av multimedieprylar fr�n detta main-program:" << '\n';
	mediadata.GetMMDataFromInside(t = "TV", n = "Bang&Olufsen", y = 1973);
	cout << '\n' << "Listning av multimedieprylar fr�n detta main-program, alt. funktion:" << '\n';
	mediadata.MMDataFromConsole((string) "TV", (string) "Bang&Olufsen", 1973);
	cout << '\n' << "Spara multimediaf�rteckningen? 'Y' eller 'y' f�r spara, allt annat raderar filen" << endl;
	c = getchar();
	cin.clear();
	if ( !((c == 'Y') || (c == 'y')) )
	mediadata.DeleteMMDataFile();
	cin.get();

	return 0;
}