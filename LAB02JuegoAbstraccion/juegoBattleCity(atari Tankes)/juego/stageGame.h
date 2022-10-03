#pragma once
#pragma once
#include<iostream>
using namespace std;

class stageGame
{
protected:

	string color = "grey";
	float limitX, limitY = (25, 40);
	string form = "rectangle";
	float size = 100;
	string message = "Welcome to battle city 100.2 game";

public:
	void setChangecolorS();
	string getChangeColorS();

	void setChangeFormS();
	string getChangeFormS();

	void restartGameS();

	void setChangeLimitS();
	float getChangeLimitS();


	void createMessage();


};



