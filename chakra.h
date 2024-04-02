#ifndef chakra_h
#define chakra_h
#include <iostream>

using namespace std;

class Chakra {
private:
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
};

#endif // !chakra_h

