#include <conio.h>
#include <iostream>
#include <string>
#include <clocale>
#include "Dice.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "swedish");
	Dice dots;
	while(_getch() == '\r')
	{
		dots.Draw_Dice();
		dots.Throw_Dice();
		dots.Display_Dice();
	}
	return 0;
}