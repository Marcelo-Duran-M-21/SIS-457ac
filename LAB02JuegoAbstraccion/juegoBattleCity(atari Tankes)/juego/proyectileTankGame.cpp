#include "proyectileTankGame.h"

void projectileTankGame::setScopeP(float _scope)
{
	scope = _scope;
}

float projectileTankGame::getScope()
{
	return scope;
}

float projectileTankGame::ScopeProyectile(float met)
{
	bool eatIten;

	if (eatIten = true) {
		scope += 10;
		cout << "El nuevo alcanse del missil es de :\n" << "\t" << scope << endl;
	}
	else {
		cout << "missil de corto alcanse\n";
	}
	return scope;
}
