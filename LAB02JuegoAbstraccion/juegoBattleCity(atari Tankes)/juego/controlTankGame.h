#pragma once
#include <iostream>
#include <string>
using namespace std;
class controlTankGame
{
protected:

	//direction of tank we use number the positions en ASCII
	char upC, downC, rightC, leftC = ('w', 's', 'a', 'd');
	char useItenC = 'r';
	char shootC = 'k';

public:
	//Method set and get from shoot with keyboard of the tank control
	void setShootC(char _shoot);
	char getShootC();


	//Method set and get from move with keyboard of the tank control 
	void setMoveTank();
	string getMovetank();

	void ShootMissil(char missil);

};

