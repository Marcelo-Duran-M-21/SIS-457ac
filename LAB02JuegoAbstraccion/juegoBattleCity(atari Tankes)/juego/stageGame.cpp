#include "stageGame.h"

void stageGame::createMessage()
{
	string newMess;
	cout << "Cual es el mensaje nuevo a poner\n";
	cin >> newMess;
	message = newMess;
	cout << "El nuevo message para el display es \n" << message << endl;
}
