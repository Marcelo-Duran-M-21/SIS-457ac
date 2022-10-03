// juego.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include "armorGame.h"
#include "tankGame.h"
#include "armorGame.h"
#include "KingBirdGame.h"
#include "controlTankGame.h"
#include "itensTankGame.h"
#include "proyectileTankGame.h"
#include "scoreScreenGame.h"
#include "stageGame.h"
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    tankGame  tankPanzer =  tankGame();
    tankPanzer.setColorT("black\n");
    tankPanzer.showColorTank();

    tankPanzer.setLevelArmor(1);
    tankPanzer.IncreaseArmorA(100);

    kingBirdGame bird1 = kingBirdGame();
    bird1.setChangePositionB(12.3, 2.5);
    bird1.showNewPositionKingBird();

    controlTankGame shoot1 = controlTankGame();
    shoot1.ShootMissil('k');

    itensTankGame bomba = itensTankGame();
    bomba.changeWeatherI(10.9);

    projectileTankGame missilIron = projectileTankGame();
    missilIron.ScopeProyectile(true);
    
    scoreScreenGame score1 = scoreScreenGame();
    score1.reduceEnemyTankSc(10);

    stageGame stag1 = stageGame();
    stag1.createMessage();

    return 0;

}

