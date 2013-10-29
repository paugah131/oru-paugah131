#include <ctime>
#include <clocale>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>
#include <string>
#include "Dice.h"
using namespace std;

Dice::Dice(void)
{
	value = 0;
	srand (time (0));
}

Dice::Dice(int v)
{
	this->value = v;
}

void Dice::Throw_Dice()
{
	value = rand() % 6 + 1;
}

/* int Dice::Read_Value()
{
	return this->value;
} */

void Dice::Draw_Dice()
{
    system("CLS");

	/* initscr(); Initialize the screen */

    /* printf("OK! H�r kommer resultatet av t�rningskastet!\n\n"); */

    /* refresh(); Because curses stores your window data in a structure; you need to refresh() when you want
                * to see what you've done */

    /* endwin(); Destroy the curses window */
}

void Dice::Display_Dice()
{
	cout << "Resultatet �r: " << this->value;
}

Dice::~Dice(void)
{
}
