#ifndef clan_h
#define clan_h
#include <iostream>
#include "village.h"

using namespace std;

class Clan :public Village{
protected:
	string Name_Clan;
	double Population_Clan;
public:
	Clan() {
		Name_Clan = string("Uzumaki Clan");
		Population_Clan = 12;
	}
	Clan(string Name_Clan, double Population_Clan, string Name_Village, double Population_Village, string Name_Country) :Village(Name_Village, Population_Village, Name_Country) {
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

	friend ostream& operator<<(ostream& out, const Clan& clan) {
		out << "Clan Name: " << clan.Name_Clan << endl;
		out << "Clan Population: " << clan.Population_Clan << endl;
		out << static_cast<Village>(clan);
		return out;
	}
};

#endif

