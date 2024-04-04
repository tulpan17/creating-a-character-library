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
		Craft = string ("Builder");
		Salary = 10000;
	}
	Worker(string Craft, int Salary, string Name, int Age, string Gender, string Element_Chakra, string Name_Clan, string Name_Village)
		:Person(Name, Age, Gender, Element_Chakra, Name_Clan, Population_Clan, Name_Village, Population_Village, Name_Country) {
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

	friend ostream& operator<<(ostream& out, const Worker& worker) {
		out << static_cast<Person>(worker);
		out << "Craft: " << worker.Craft << endl;
		out << "Salary: $" << worker.Salary << endl;
		return out;
	}
};
#endif