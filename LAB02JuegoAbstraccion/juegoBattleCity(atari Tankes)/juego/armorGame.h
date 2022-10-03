#pragma once
#include<iostream>
#include<string>
using namespace std;
class armorGame
{
private:

	string color = "greeen";
	float weather = 15;
	int levelArmor = 0;

public:
	///Method set an get from all variable de class
	void setColorA();
	string getColorA();

	void setWeatherA();
	float getWeatherA();

	void setLevelArmor(int _levelArmor);
	int getLevelArmor();

	//Method function 
	void IncreaseArmorA(int gold);
	void ChangeColorA();
	void ChangeWeatherA();
};

