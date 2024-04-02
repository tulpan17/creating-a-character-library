#ifndef person_h
#define person_h
#include <iostream>
#include "clan.h"
#include "chakra.h"

using namespace std;

class Person :public Chakra, public Clan{
private:
	string Name;
	int Age;
	string Gender;
public:
	Person() {
		Name = string("Naruto");
		Age = 16;
		Gender = string("Male");
	}
	Person(string Name, int Age, string Gender, string Element_Chakra, string Name_Clan, double Population_Clan) :Chakra(Element_Chakra), Clan(Name_Clan, Population_Clan, Name_Village){
		this->Name = Name;
		this->Age = Age;
		this->Gender = Gender;
	}

	string getName() {
		return Name;
	}
	int getAge() {
		return Age;
	}
	string getGender() {
		return Gender;
	}

	void setName(string Name) {
		this->Name = Name;
	}
	void setAge(int Age) {
		this->Age = Age;
	}
	void setGender(string Gender) {
		this->Gender = Gender;
	}
};

#endif // !person_h
