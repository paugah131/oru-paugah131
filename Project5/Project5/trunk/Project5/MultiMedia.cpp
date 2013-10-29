#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <cstdarg>
#include <cwchar>
#include <iosfwd>
#include <clocale>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <malloc.h>
#include "MultiMedia.h"
using namespace std;

fstream regfile;
string t, n;
int y;

MultiMedia::MultiMedia(void)
{
	mm_type = "";
	mm_name = "";
	year_acq = 0;
}

/* MultiMedia::MultiMedia(multidata) */
MultiMedia::MultiMedia(string t, string n, int y)
{
	this->mm_type=t;
	this->mm_name=n;
	this->year_acq=y;
}

void MultiMedia::WriteMMDataToFile()
{
	cout << "Ange typ av multimedia, tillverkare med evt. modell- och serienummer, " << endl;
	cout << "anskaffningsår, retur efter varje data" << '\n' << "Avsluta med Ctrl-Z + <return>\n" << endl;
	regfile.open ("~Multimediareg.txt", iostream::app);
	while ( (cin >> t) && (cin >> n) && (cin >> y) )
	{
		this->mm_type = t;
		this->mm_name = n;
		this->year_acq=y;
		regfile << t << ' ' << n << ' ' << to_string(y) << endl;
	}
	regfile.clear();
	regfile.close();
	cin.clear();
}

void MultiMedia::ReadMMDataToConsole()
{
	cout << "Ange typ av multimedia: ";
	GetTypeData();
	cout << "Ange tillverkare och ev. typbeteckning: ";
	GetNameData();
	cout << "Ange inköpsår: ";
	cin >> year_acq;
}

void MultiMedia::WriteMMDataToConsole()
{
	cout << "Multimediatyp: " << this->mm_type << endl;
	cout << "Tillverkare/Typ/Titel: " << this->mm_name << endl;
	cout << "Anskaffningsår: " << this->year_acq << endl;
}

void MultiMedia::WriteMMFileDataToConsole()
{
	char c;
	bool Is=false;
	int entry=0, n=0, i=0;
	int Size=0;
	string registrydata;
	char* str;
	fopen_s(&pFile, "~Multimediareg.txt", "r+");
	if (pFile==NULL) perror ("Error opening file");
	fseek (pFile, 0, SEEK_END);
	Size=ftell (pFile);
	rewind (pFile);
	do {
		c=fgetc (pFile);
		if (c == 'ÿ')
		{
			regfile.putback (c);
			regfile.putback (c);
		}
		else if (c == ' ')
		{
			n++;
			regfile.putback (c);
			c = '\n';
			registrydata.push_back('\n');
			/* fputc ('\n', pFile); */
		}
		else
		{
			registrydata.push_back(c);
			/* fputc (c, pFile); */
		}
		regfile.put (c);
		i++;
		if ((c == '\n') && !Is)
			entry++;
	} while (feof (pFile)== false);
	rewind (pFile);
	fclose (pFile);
	str = (char *) &registrydata;
	fputs (str, pFile);
	cout << "Registry data contents are: \n" << endl;
	cout << registrydata << endl;
	printf ("Container is composed of %i characters: \n", i);
	cout << "Number of MultiMedia entries in array: " << (entry/3) << " entries" << '\n';
	cout << "Length of file contents is: " << Size << " bytes\n";
	regfile.open ( "~Multimediareg.txt", ios::out );
	regfile << registrydata;
	/* cout.write->rdbuf( &regfile ); */
	regfile.clear();
	regfile.close();
} 

void MultiMedia::GetMMDataFromInside(string& type, string& name, int& year)
{
	cout << "Multimediatyp: " << type << endl;
	cout << "Tillverkare/Typ/Titel: " << name << endl;
	cout << "Anskaffningsår: " << year << endl;
}

void MultiMedia::MMDataFromConsole(string& type, string& name, int year)
{
	cout << "Multimediatyp: " << type << endl;
	cout << "Tillverkare/Typ/Titel: " << name << endl;
	cout << "Anskaffningsår: " << year << endl;
}

/* void PutMMDataToConsole(string t, string n, int y) { mm_type=t, mm_name=n, year_acq=y; } */
/* { */
/* 	cout << "Multimediatyp: " << t << endl; */
/* 	cout << "Tillverkare/Typ/Titel: " << n << endl */
/* 	cout << "Anskaffningsår: " << y << endl */
/* } */

void MultiMedia::DeleteMMDataFile()
{
	remove ("~Multimediareg.txt");
}

string MultiMedia::GetTypeData()
{
	string type;

	getline(std::cin, type);
	mm_type = type;
	return mm_type;
}

string MultiMedia::GetNameData()
{
	string name;

	getline(std::cin, name);
	mm_name = name;
	return mm_name;
}

int MultiMedia::GetAcqData()
{
	std::cin >> year_acq;
	return year_acq;
}