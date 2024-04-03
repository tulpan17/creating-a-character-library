#ifndef worker_h
#define worker_h
#include <iostream>
#include "person.h"

using namespace std;

class Worker :public Person {
private:
	string Craft;
	int Salary;
public:
	Worker() {
		Craft = string ("Kunai");
		Salary = 10000;
	}
	Worker(string Craft, int Salary, string Name, int Age, string Gender, string Element_Chakra, string Name_Clan, double Population_Clan)
		:Person(Name, Age, Gender, Element_Chakra, Name_Clan, Population_Clan){
		this->Craft = Craft;
		this->Salary = Salary;
	}

	string getCraft() {
		return Craft;
	}
	int getSalary() {
		return Salary;
	}

	void setCraft(string Craft) {
		this->Craft = Craft; 
	}
	void setSalary(int Salary) {
		this->Salary = Salary;
	}
};
#endif