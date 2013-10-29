#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <random>

using namespace std;

class Dice
{
private:
	int value;
public:
	Dice(void);
	Dice (int v);

	void Draw_Dice();
	void Display_Dice();
	void Throw_Dice();

	int Read_Value();
	~Dice(void);
};

