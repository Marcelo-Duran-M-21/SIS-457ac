#pragma once
#include <iostream>
#include <string>
using namespace std;

class kingBirdGame
{
protected:


	string colorB = "green";
	string formB = "triangular";
	float sizeB = 2;
	float positionXB, positionYB = (2.5, 1.2);
	float levelOfLifeB = 90;
	bool protectionB = true;


public:
	//Method set and get from change color of  king Bird
	void setChangeColorB();
	string getChangeColorB();

	//Method set ang get from  change position of king bird
	void setChangePositionB(float positX,float positY);
	float setChnagePositionB();

	//Method set ang get from  change level of life  of king bird
	void setChangeLevelOfLifeB();
	float getChangeLevelOfLifeB();

	//Method set ang get from  change protection  of king bird
	void setChangeProtectionB();

	void showNewPositionKingBird();








};

