#ifndef clan_h
#define clan_h
#include <iostream>
#include "village.h"

using namespace std;

class Clan :public Village{
private:
	string Name_Clan;
	double Population_Clan;
public:
	Clan() {
		Name_Clan = string("Uzumaki Clan");
		Population_Clan = 12;
	}
	Clan(string Name_Clan, double Population_Clan, string Name_Village) :Village(Name_Village, Population_Village, Name_Country) {
		this->Name_Clan = Name_Clan;
		this->Population_Clan = Population_Clan;
	}
	string getName_Clan() {
		return Name_Clan;
	}
	double getPopulation_Clan() {
		return Population_Clan;
	}

	void setName_Clan(string Name_Clan) {
		this->Name_Clan = Name_Clan;
	}
	void setPopulation_Clan(double Population_Clan) {
		this->Population_Clan = Population_Clan;
	}
};

#endif

