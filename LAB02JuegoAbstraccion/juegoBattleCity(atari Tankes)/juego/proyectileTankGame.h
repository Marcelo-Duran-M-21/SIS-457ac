#pragma once
#include <iostream>
#include <string>
using namespace std;
class projectileTankGame {
protected:
	string colorP = "red";
	string formP = "delgado y rectangular ";
	float sizeP = 5.1;
	float weigth = 30;
	float speed = 3;
	float damage = 15;
	float scope = 10;

public:

	//Method set and get of change color of Projectile
	void setChangeColorP();
	string getChangeColorP();

	//Method set and get of change form of Projectile
	void setChangeFormP();
	string getChangeFormP();

	//Method set and get of change size of Projectile
	void setChangeSizeP();
	float getChangeSizeP();

	//Method set and get of change weigth of Projectile
	void setChangeWeigthP();
	float getChangeWeightP();

	//Method set and get of change speed of Projectile
	void setChangeSpeedP();
	float getChangeSpeedP();

	//Method set and get of change Damage of Projectile
	void setChangeDamageP();
	float getChangeDamageP();

	void setScopeP(float _scope);
	float getScope();

	float ScopeProyectile(float met);




};

