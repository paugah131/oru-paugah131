#include <clocale>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include "Passning.h"

using namespace std;

Instring::Instring(void)
{
	x_no = 0;
	row_ptr = new (string);
}

Instring::Instring(int x)
{
	this->x_no = x;
}

Instring::Instring(string* str)
{
	this->row_ptr = str;
}

int Instring::GetAntal()
{
	int antal;

	cin >> antal;
	x_no = antal;
	return this->x_no;
}

string* Instring::Return_Str_ptr()
{
	string* teckn = this->row_ptr;

	getline(cin, *teckn);
	this->row_ptr = teckn;
	return row_ptr;
}

int Instring::Passning(int argc, string *argv[])
{
	int x = 0, i = 0;
	do
	{
		cout << *argv[i] << endl;
		x++;
	} while (x < argc);
	return 0;
}

Instring::~Instring(void)
{
	delete row_ptr;
}