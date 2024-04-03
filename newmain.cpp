#include <iostream>
#include "country.h"
#include "village.h"
#include "clan.h"
#include "chakra.h"
#include "person.h"
#include "worker.h"
#include "ninja.h"


int main() {
	Country country;
	cout << country.getName_Country() << endl;

	Village village;
	cout << village.getName_Village() << " " << village.getPopulation_Village() << " " << village.getName_Country() << endl;

	Clan clan;
	cout << clan.getName_Clan() << " " << clan.getPopulation_Clan() << " " << clan.getName_Village() << " " << clan.getName_Country() << endl;

	Chakra chakra;
	cout << chakra.getElement_Chakra() << endl;

	Person person;
	cout << person.getName() << " " << person.getAge() << " " << person.getGender() << " " << person.getElement_Chakra() << " " << person.getName_Clan() << " " << person.getName_Village() << " " << person.getName_Country() << endl;

	Worker worker;
	cout << worker.getName() << " " << worker.getAge() << " " << worker.getGender() << " " << worker.getCraft() << " " << worker.getSalary() << " " << worker.getName_Village() << " " << worker.getName_Country() << endl; 

	Ninja ninja;
	cout << ninja.getName() << " " << ninja.getAge() << " " << ninja.getGender() << " " << ninja.getRank() << " " << ninja.getWeapon() << " " << ninja.getFstyle() << " " << ninja.getName_Village() << " " << ninja.getName_Country() << endl;

	return 0;
}