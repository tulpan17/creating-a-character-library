#ifndef country_h
#define country_h
#include <iostream>

using namespace std;

class Country {
protected:
	string Name_Country;
public:
	Country() {
		Name_Country = string("Country of Fire");
	}
	Country(string Name_Country) {
			this->Name_Country = Name_Country;
		}

	string getName_Country() {
		return Name_Country;
	}

	void setName_Country(string Name_Country) {
		this->Name_Country = Name_Country;
	}

	friend ostream& operator<<(ostream& out, const Country& country) {
		out << "Country Name: " << country.Name_Country << endl;
		return out;
	}
};


#endif