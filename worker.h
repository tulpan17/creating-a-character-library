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
	Worker(string Name, int Age, string Gender, string Craft, int Salary)
		:Person(Name, Age, Gender) {
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