#include <clocale>
#include <cstdlib>
#include <stdio.h>
#include <sstream>
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

int Instring::Passning(int argc, string argv[])
{
	string   stringvalues;

	if (argc > 0)
	{
		*this->row_ptr = *argv;
		stringvalues = *this->row_ptr;
		istringstream iss (stringvalues);
		for (int n=0; n < argc; n++)
		{
			int val;
			iss >> val;
			cout << val << '\n';
		}
	}
	return 0;
}

Instring::~Instring(void)
{
	delete row_ptr;
}