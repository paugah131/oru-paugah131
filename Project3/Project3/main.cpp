#include <clocale>
#include <float.h>
#include "Byt.h"

int main()
{
	setlocale(LC_ALL, "swedish");
	char ch='\n';
	float no1, no2;
	string string1, string2;
	Byt Byten;

	do
	{
		cout << "Skriv in tv� flyttal! Avsluta varje tal med retur" << endl;
		cin >> no1;
		/* system("CLS"); */
		cin >> no2;
		Byten.SWAP (no1, no2);
		cout << "Talen i ombytt ordning: " << no1 << ", " << no2 << endl;
		cin.get();
		
		cout << "Skriv in tv� flyttal till! Avsluta varje tal med retur" << endl;
		cin >> no1;
		cin >> no2;
		Byten.SWAP (&no1, &no2);
		cout << "Talen i ombytt ordning: " << no1 << ", " << no2 << endl;
		cin.get();

		cout << "Skriv in tv� str�ngar! Avsluta varje str�ng med radslut (retur)" << endl;
		cin >> string1;
		cin >> string2;
		Byten.SWAP (string1, string2);
		cout << "Str�ngarna i ombytt f�ljd: " << string1 << " " << string2 << endl;

		cin.get();
		cin.get();

	} while ( ch != '\n' );

	return 0;
}