#pragma once

#pragma once
#include <iostream>
#include <string>
	using namespace std;
	class blocksGame
	{
	protected:
		string color = "orange";
		string form = "cuadrado";
		float resistence = 0.8;
		string material = "ladrillo";
		float positionX, positionY;
	public:
		void setColorB();
		string getColorB();

		void setFormB();
		string getFormB();

		void setResistenceB( float _resistencia);
		float getResistenceB();

		void setMaterial();
		string getMaterial();

		void modifyFormB();
		void modifyMoveB();
		void modifyColorB();
		void modifyMaterialB();
		float ChangeResistence(float r);
		//void modifyMoveB();





	};


