#include "KingBirdGame.h"

void kingBirdGame::setChangePositionB(float positX, float positY)
{
	positionXB = positX;
	positionYB = positY;
}

float kingBirdGame::setChnagePositionB()
{
	return positionXB,positionYB;
}

void kingBirdGame::showNewPositionKingBird()
{
	cout << "la nueva position del rey king es:\n" << "/t" << positionXB << "-    ....\t" << positionYB<<endl;

}
