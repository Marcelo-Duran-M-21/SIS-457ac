#include "scoreScreenGame.h"

void scoreScreenGame::setEnemyTank(int _enemyTank)
{
	enemyTank = _enemyTank;
}

int scoreScreenGame::getEnemyTank()
{
	return enemyTank;
}

void scoreScreenGame::reduceEnemyTankSc(int NumberEnemy)
{
	bool deleteEnemy;
	int i = 0;
	if (NumberEnemy > 0) {
		
		while (i<=NumberEnemy) {
			cout << "destruyo a los enemigos\n";
			cin >> deleteEnemy;
			
			if (deleteEnemy == true)
			{
				NumberEnemy--;
				cout << "numero actual de enemigos\n" << NumberEnemy << endl;
		}
			i++;
		};
	}
}
