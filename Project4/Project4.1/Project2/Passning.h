#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <new>

using namespace std;

class Instring
{
	private:	int x_no;
				string* row_ptr;
	public:
				Instring(void);
				Instring(int x);
				Instring(string* str);
				int Instring::GetAntal();
				string* Instring::Return_Str_ptr();
				int Instring::Passning(int argc, string argv[]);
				~Instring(void);
};