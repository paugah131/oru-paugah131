#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <clocale>
#include <stdlib.h>
#include "MultiMedia.h"
using namespace std;
 
int main()
{
	setlocale (LC_ALL, "swedish");
	MultiMedia  mediadata;
	string t, n;
	int y;
	char c;

	cout << "Program f�r f�rteckning och listning av multimedieprylar" << '\n' << endl;
	mediadata.WriteMMDataToFile();
	cout << '\n' << "Listning av multimedieprylar m.h.a. datamedlemmar i klassen MultiMedia:" << endl;
	mediadata.ReadMMDataToConsole();
	/* while (true)
	{ */
	mediadata.WriteMMDataToConsole();
	/* } */
	cout << "Listning fr�n fil av multimedieprylar:" << endl;
	mediadata.WriteMMFileDataToConsole();
	cout << '\n' << "Listning av multimedieprylar fr�n detta main-program:" << '\n';
	/* mediadata.MMDataFromConsole((string &) "TV", (string &) "Nokia", 2011); */
	mediadata.GetMMDataFromInside(t = "TV", n = "Nokia", y = 2011);
	cout << '\n' << "Spara multimediaf�rteckningen? 'Y' eller 'y' f�r spara, allt annat raderar f�rteckningen" << endl;
	c = getchar();
	if ( !((c == 'Y') || (c == 'y')) )
		mediadata.DeleteMMDataFile();
	cin.get();

	return 0;
}