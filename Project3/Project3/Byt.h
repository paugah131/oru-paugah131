#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <float.h>

using namespace std;

class Byt
{
private:
	float x_no, y_no;
	string x_str, y_str;
public:
	Byt(void);
	Byt(float x, float y);
	Byt(string x, string y);
	void Byt::SWAP(float *ptr_x, float *ptr_y);
	void Byt::SWAP (float &x, float &y);
	void Byt::SWAP (string &x, string &y);
	~Byt(void){};
	/*  void Byt::SWAP (string *str_x, string *str_y); */

};