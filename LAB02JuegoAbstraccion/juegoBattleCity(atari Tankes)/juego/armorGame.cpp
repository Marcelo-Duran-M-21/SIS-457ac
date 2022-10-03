#include "armorGame.h"

void armorGame::setLevelArmor(int _levelArmor)
{
	levelArmor = _levelArmor;
}

int armorGame::getLevelArmor()
{
	return levelArmor;
}

void armorGame::IncreaseArmorA(int gold)
{
	
	if (gold >= 100) {

	}
	
	levelArmor += levelArmor;
	cout << "el nivel de armadura ahora es de \n" << levelArmor;

}
