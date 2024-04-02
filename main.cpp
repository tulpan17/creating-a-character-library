#include <iostream>
#include "country.h"
#include "village.h"
#include "clan.h"
#include "chakra.h"
#include "person.h"


int main() {
	Country country;
	//Fire.setName_Country("country of Fire");
	cout << country.getName_Country() << endl;

	Village village;
	cout << village.getName_Village() << " " << village.getPopulation_Village() << " " << village.getName_Country() << endl;
	
	Clan clan;
	cout << clan.getName_Clan() << " " << clan.getPopulation_Clan() << " " << clan.getName_Village() << " " << clan.getName_Country() << endl;

	Chakra chakra;
	cout << chakra.getElement_Chakra() << endl;

	Person person;
	cout << person.getName() << " " << person.getAge() << " " << person.getGender() << " " << person.getElement_Chakra() << " " << person.getName_Clan() << " " << person.getName_Village() << " " << person.getName_Country() << endl;

	return 0;
}