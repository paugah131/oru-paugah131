#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <clocale>
#include "Passning.h"
 
using namespace std;
 
int main()
{
            setlocale(LC_ALL, "swedish");

            Instring input;
			string      stringvalues = "125 320 512 750 333";
            /* istringstream iss (stringvalues);
            ostringstream oss; */
            int i = 0, tal = 0;
            string* str;

            cout << "Skriv hur många tal som skall skrivas! Avsluta med radslut (retur)" << endl;
            tal = input.GetAntal();
            cin.get();
            cout << "Antal tal som skall skrivas ut " << tal << endl;
            cout << "\nSedan skriv talen, avgränsa med mellanslag! Avsluta med radslut (retur)" << endl;
			str = input.Return_Str_ptr();
            cout << "\n";
            cout << "Talen skrivs ut här nedanför: " << endl;
            input.Passning(tal, str);
            cin.get();

            return 0;
}