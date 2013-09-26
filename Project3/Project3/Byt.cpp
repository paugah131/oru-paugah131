#include <clocale>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include <float.h>
#include "Byt.h"

using namespace std;

Byt::Byt(void)
{
	x_no = 0, y_no = 0;
	x_str = " ", y_str = " ";
}

Byt::Byt(float x, float y)
{
	this->x_no = x;
	this->y_no =y;
}

Byt::Byt(string x, string y)
{
	this->x_str = x;
	this->y_str =y;
}
void Byt::SWAP(float *ptr_x, float *ptr_y)
{
	float sw=0;

	sw = *ptr_x;
	*ptr_x = *ptr_y;
	*ptr_y = sw;
}

void Byt::SWAP(float &x, float &y)
{
	float sw=0;

	sw = x;
	x = y;
	y = sw;
}

void Byt::SWAP(string &x, string &y)
{
	 string str ="0";

	 str =  x;
	 x = y;
	 y = str;
}

/* void Byt::SWAP (string *str_x, string *str_y)
{
	 string str ="0";

	 str =  *str_x;
	 *str_x = *str_y;
	 *str_y = str;
} */