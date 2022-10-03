#include "tankGame.h"
#include<iostream>

void tankGame::setColorT(string _color)
{
	colorT = _color;
}

string tankGame::getColorT()
{
	return colorT;
}

void tankGame::showColorTank()
{
	cout << "el color nuevo del tanque es \n"<<colorT;
}
