#pragma once

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cwchar>
#include <new>
#include <stdio.h>
#include <wctype.h>
#include <ctype.h>
#include <conio.h>
using namespace std;

class MultiMedia
{
private:
		string mm_type;
		string mm_name;
		int year_acq;
		struct multidata { multidata (string t, string n, int y); };
	public:
		MultiMedia(void);
		MultiMedia(string t, string n, int y);
		MultiMedia (multidata);
		FILE* pFile;
		void WriteMMDataToFile();
		void ReadMMDataToConsole();
		void WriteMMDataToConsole();
		void WriteMMFileDataToConsole();
		void GetMMDataFromInside(string& type, string& name, int& year);
		void MMDataFromConsole(string& type, string& name, int year);
		void DeleteMMDataFile();
		/* void GetMMData(string& type, string& name, int& year); */
		string GetTypeData();
		string GetNameData();
		int GetAcqData();
		void PutMMDataToConsole(string t, string n, int y) { mm_type=t, mm_name=n, year_acq=y; }
		~MultiMedia(void) {}
};