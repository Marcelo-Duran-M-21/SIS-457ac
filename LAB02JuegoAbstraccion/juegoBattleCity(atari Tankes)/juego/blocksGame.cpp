#include "blocksGame.h"

void blocksGame::setResistenceB(float _resistencia)
{
	resistence = _resistencia;
}

float blocksGame::getResistenceB()
{
	return resistence;
}

float blocksGame::ChangeResistence(float r)
{
	if (r >0 ) {
		resistence += 0.5;
	}
	else {
		cout << "no sirve el itens";
	}
	return resistence;
}
