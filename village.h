#ifndef village_h
#define village_h
#include <iostream>
#include "country.h"

using namespace std;

class Village :public Country{
protected:
	string Name_Village;
	double Population_Village;

public:
	Village(string Name_Village, double Population_Village, string Name_Country)
		:Country(Name_Country) {
		this->Name_Village = Name_Village;
		this->Population_Village = Population_Village;
	}
	Village() {
		Name_Village = string("The Village Hidden in the Leaves");
		Population_Village = 100000;
	}

	string getName_Village() {
		return Name_Village;
	}
	double getPopulation_Village() {
		return Population_Village;
	}

	void setName_Village(string Name_Village) {
		this->Name_Village = Name_Village;
	}
	void setPopulation_Village(double Population_Village) {
		this->Population_Village = Population_Village;
	}

	friend ostream& operator<<(ostream& out, const Village& village) {
		out << "Village Name: " << village.Name_Village << endl;
		out << "Population: " << village.Population_Village << endl;
		out << "Country: " << village.Name_Country << endl;
		return out;
	}
};

#endif