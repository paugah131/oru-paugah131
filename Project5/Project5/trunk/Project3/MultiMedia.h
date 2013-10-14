#pragma once

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <new>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
using namespace std;

class MultiMedia
{
	private:
		string mm_type;
		string mm_name;
		int year_acq;
		/* struct multidata { multidata (string t, string n, int y); }; */
	public:
		MultiMedia(void);
		MultiMedia(string t, string n, int y);
		/* MultiMedia (multidata); */

		void WriteMMDataToFile();
		void GetMMDataFromInside(string& type, string& name, int& year);
		void ReadMMDataToConsole();
		void WriteMMDataToConsole();
		void WriteMMFileDataToConsole();
		void DeleteMMDataFile();
		/* void GetMMData(string& type, string& name, int& year); */
		string GetTypeData();
		string GetNameData();
		int GetAcqData();
		void PutMMDataToConsole(string t, string n) { mm_type=t, mm_name=n; }
		~MultiMedia(void) {};
};