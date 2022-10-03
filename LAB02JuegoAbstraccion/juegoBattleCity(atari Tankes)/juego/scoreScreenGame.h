#pragma once
#include <iostream>
#include <string>
using namespace std;
class scoreScreenGame
{
protected:

	int enemyTank = 20;
	int  lives = 5;
	int scoreEnemyDead = 100;
	int levelGame = 0;
	bool exit = false;
public:
	//Method set and get of the variable
	void setEnemyTank(int _enemyTank);
	int getEnemyTank();

	void setLives();
	int getLives();

	void setscoreEnemyDead();
	int getScoreEnemyDead();

	void setLevelGame();
	int getLevelGame();

	void setExit();
	bool getExit();


	//method
	void reduceEnemyTankSc(int NumberEnemy);
	void eatLiveSc();
	void saveScoreLevel();
	void showScoreSc();


};



