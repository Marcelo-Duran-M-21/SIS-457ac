#include "controlTankGame.h"

void controlTankGame::setShootC(char _shoot)
{
	shootC = _shoot;
}

char controlTankGame::getShootC()
{
	return shootC;
}

void controlTankGame::ShootMissil(char missil)
{
	if (missil == 'k') {
		cout << "disparo de missil correct\n";


	}
	else {
		cout << "missil fail\n";
	}
}
