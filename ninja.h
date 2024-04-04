#ifndef ninja_h
#define ninja_h
#include <iostream>
#include "person.h"

class Ninja : public Person {
private:
	string Rank;
	string Weapon;
	string Fighting_style;
public:
	Ninja() {
		Rank = string("Genin");
		Weapon = string("Kunai");
		Fighting_style = string("Ninjutsu");
	}
	Ninja(string Rank, string Weapon, string Fighting_style, string Name, int Age, string Gender, string Element_Chakra, string Name_Clan, string Name_Village)
		:Person(Name, Age, Gender, Element_Chakra, Name_Clan, Population_Clan, Name_Village, Population_Village, Name_Country) {
		this->Rank = Rank;
		this->Weapon = Weapon;
		this->Fighting_style = Fighting_style;
	}

	string getRank(){
		return Rank;
	}
	string getWeapon(){
		return Weapon;
	}
	string getFstyle(){
		return Fighting_style;
	}

	void setRank(string Rank) {
		this->Rank = Rank;
	}
	void setWeapon(string Weapon) {
		this->Weapon = Weapon;
	}
	void setFstyle(string Fighting_style) {
		this->Fighting_style = Fighting_style;
	}
};
#endif 