#ifndef country_h
#define country_h
#include <iostream>

using namespace std;

class Country {
protected:
	string Name_Country;
public:
	Country(string Name_Country) {
		this->Name_Country = Name_Country;
	}
	Country() {
		Name_Country = string("Country of Fire");
	}

	string getName_Country() {
		return Name_Country;
	}

	void setName_Country(string Name_Country) {
		this->Name_Country = Name_Country;
	}
};


#endif