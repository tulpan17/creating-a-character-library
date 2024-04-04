#ifndef chakra_h
#define chakra_h
#include <iostream>

using namespace std;

class Chakra {
protected:
	string Element_Chakra;
public:
	Chakra() {
		Element_Chakra = string("Fire");
	}
	Chakra(string Element_Chakra) {
		this->Element_Chakra = Element_Chakra;
	}

	string getElement_Chakra() {
		return Element_Chakra;
	}

	void setElement_Chakra(string Element_Chakra) {
		this->Element_Chakra = Element_Chakra;
	}

	friend ostream& operator<<(ostream& out, const Chakra& chakra) {
		out << "Element Chakra: " << chakra.Element_Chakra << endl;
		return out;
	}
};

#endif 

