#pragma once
#include "armorGame.h"
#include<string>
using namespace std;
class tankGame:public armorGame
{

	protected:

		string colorT = "green";
		float speed = 2;
		string form = "rectangular";
		armorGame armorTank;
		float posiccionXT = 2.5, posiccionYT = 1.5;
		float lifeStart = 100;
		float size = 2 * 2;


	public:
		//method from change color tank we use method set and get 

		void setColorT(string _color);
		string getColorT();

		//method set and get from change acelerate tank
		void setSpeedT();
		float getSpeedT();


		//Method of access form 
		void setFormT();
		string getForm();

		//method set and get  from change position tank
		void setPositionXYT();
		float getPositionXYT();

		//method set and get  from increase life of the  tank
		void setLifeStart();
		float getLifeStard();

		//method set and get  from change position tank
		void setSize();
		void getSize();


		void showColorTank();

		//method increase armor of the Tank;
		armorGame setIncreaseArmorT();

		//method acelerate tank
		void AcelerateTank();


};

