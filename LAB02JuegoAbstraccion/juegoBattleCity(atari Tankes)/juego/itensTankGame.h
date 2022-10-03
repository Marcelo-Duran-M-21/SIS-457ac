#pragma once
#include <iostream>
#include <string>
using namespace std;
class itensTankGame
{
protected:
	float positionXI, positionYI = (1, 2.7);
	float weatherI = 10;
	string form = "cuadrado";
	bool disappear = false;
public:

	//Method set and get from change position of itens of game;
	void setPositionXYI();
	float getPositionXYI();

	//Method set and get from change weather of itens of game;

	void setChangeWeatherI(float _weather);
	float getchangeWeatherI();

	//Method set and get from change form of the iten of game ;
	void setChangeFormI();
	string getChangeFormI();

	//Method set and get from change dissappear the iten of game;

	void changeWeatherI(float weat);
};

