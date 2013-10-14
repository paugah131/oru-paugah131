#include "MultiMedia.h"
using namespace std;
 
ofstream regfile("Multimediareg.txt", ios::app);
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
	cout << "Ange typ av multimedia, tillverkare med evt. typbeteckning och anskaffningsår, retur efter varje data"
		 << "Avsluta med Ctrl-Z + <return>" << endl;
	/* getline(cin, t);
	this->mm_type = t;
	getline(cin, n);
	this->mm_name = n;
	cin >> y;
	this->year_acq=y; */
	while ((cin >> t) && (cin >> n) && (cin >> y))
	{
 		this->mm_type = t;
		this->mm_name = n;
		this->year_acq=y;
		regfile << t << ' ' << n << ' ' << to_string(y) << endl;
	}
	regfile.close();
	cin.clear();
	/* MultiMedia::mm_type=GetTypeData();
	cout << "Ange tillverkare och ev. typbeteckning: ";
	GetNameData();
	cout << "Ange anskaffningsår: ";
	cin >> year_acq; */
}

void MultiMedia::GetMMDataFromInside(string& type, string& name, int& year)
{
	cout << "Multimediatyp: " << type << endl;
	cout << "Tillverkare/Typ/Titel: " << name << endl;
	cout << "Anskaffningsår: " << year << endl;
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
	cout << '\n' << '\n';
}
 
void MultiMedia::WriteMMFileDataToConsole()
{
	char c='\0';
	int i=0;
	char str[]= {'\0'};
	ifstream regfile("Multimediareg.txt", ios::in);

	cout << regfile.rdbuf();
	while (regfile.get(c))
	{
		c=str[i];
		if (isspace(c)) c='\n';
		putchar (c);
		i++;
	}
}

void MultiMedia::DeleteMMDataFile()
{
	remove ("Multimediareg.txt");
}

string MultiMedia::GetTypeData()
{
	string type;

	getline(cin, type);
	mm_type = type;
	return mm_type;
}
 
string MultiMedia::GetNameData()
{
	string name;

	getline(cin, name);
	mm_name = name;
	return mm_name;
}
 
int MultiMedia::GetAcqData()
{
	cin >> year_acq;
	return year_acq;
}