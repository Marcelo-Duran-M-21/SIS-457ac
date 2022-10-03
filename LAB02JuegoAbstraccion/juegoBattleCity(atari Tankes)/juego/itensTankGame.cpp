#include "itensTankGame.h"

void itensTankGame::setChangeWeatherI(float _weather)
{
	weatherI = _weather;
}

float itensTankGame::getchangeWeatherI()
{

	return weatherI;
}

void itensTankGame::changeWeatherI(float weat)
{
	int i = 0;
	cout << "el tiempo es "<<weat<<endl;
		while (i<=weat) {
			cout << "el tiempo es \n"<<weat<<endl ;
			i++;
			weat -= 0.2;
		}
}
