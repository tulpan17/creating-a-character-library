#include <iostream>
#include "country.h"
#include "village.h"
#include "clan.h"
#include "chakra.h"
#include "person.h"
#include "worker.h"
#include "ninja.h"

using namespace std;

int main() {
	//An example of class outputs with standard values. The output with operator overload is used everywhere <<
	/*
	Country country;
	cout << country << endl;
	Village village;
	cout << village << endl;
	Clan clan;
	cout << clan << endl;
	Chakra chakra;
	cout << chakra << endl;
	Person person;
	cout << person << endl;
	Worker worker;
	cout << worker << endl;
	Ninja ninja;
	cout << ninja << endl;
	*/
	Country Your_country;
	Village Your_village;
	Clan Your_clan;
	Chakra Your_chakra;
	Person Your_person;
	Worker Your_worker;
	Ninja Your_ninja;

	string choice;
	cout << "Do you want to create a character?" << endl << "Yes or No" << endl;
	cin >> choice;
	if (choice == "No" || choice == "no") {
		cout << "Ok. Bye. >:(";
	}
	else
	{
		cout << "Well done! Let's get started." << endl << "P.S. Write a number (Please)" << endl << "First, select a country from the list (Be careful, the village and the choice of the clan depends on it):" << endl;
		cout << "1. Fire Country (Village of the Hidden Leaf)" << endl << "2. Whirlpool Country (Hidden Whirlpool Village)" << endl << "3. Wind Country (Hidden Sand Village)" << endl << "4. Water Country (Village of the Hidden Mist)" << endl;
		cin >> choice;
		if (choice == "1")
		{
			Your_country.setName_Country("Fire Country"); 
			Your_village.setName_Village("Village of the Hidden Leaf"); 
			Your_village.setPopulation_Village(100000); 
			cout << "Great, his country is now: " << Your_country.getName_Country() << " and his village is now: " << Your_village.getName_Village() << " where " << Your_village.getPopulation_Village() << " people live." << endl;
			cout << "Now you have to choose a clan:" << endl;
			cout << "1. Aburame Clan" << endl << "2. Hyuga Clan" << endl << "3. Nara Clan" << endl << "4. Senju Clan" << endl << "5. Uchiha Clan" << endl << "6. Yamanaka Clan" << endl;
			cin >> choice;
			if (choice == "1")
			{
				Your_clan.setName_Clan("Aburame Clan");
				Your_clan.setPopulation_Clan(101);
				cout << "Great, his clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
			if (choice == "2")
			{
				Your_clan.setName_Clan("Hyuga Clan");
				Your_clan.setPopulation_Clan(112);
				cout << "Great, his clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
			if (choice == "3")
			{
				Your_clan.setName_Clan("Nara Clan");
				Your_clan.setPopulation_Clan(95);
				cout << "Great, his clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
			if (choice == "4")
			{
				Your_clan.setName_Clan("Senju Clan");
				Your_clan.setPopulation_Clan(45);
				cout << "Great, his clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
			if (choice == "5")
			{
				Your_clan.setName_Clan("Uchiha Clan");
				Your_clan.setPopulation_Clan(2);
				cout << "Great, his clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
			if (choice == "6")
			{
				Your_clan.setName_Clan("Yamanaka Clan");
				Your_clan.setPopulation_Clan(131);
				cout << "Great, his clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
		}
		else if (choice == "2")
		{
			Your_country.setName_Country("Whirlpool Country");
			Your_village.setName_Village("Hidden Whirlpool Village");
			Your_village.setPopulation_Village(1000);
			cout << "Great, his country is now: " << Your_country.getName_Country() << " and his village is now: " << Your_village.getName_Village() << " where " << Your_village.getPopulation_Village() << " people live." << endl;
			cout << "Now you have to choose a clan:" << endl;
			cout << "1. Uzumaki Clan" << endl;
			cin >> choice;
			if (choice == "1")
			{
				Your_clan.setName_Clan("Uzumaki Clan");
				Your_clan.setPopulation_Clan(14);
				cout << "Great, his clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
		}
		else if (choice == "3")
		{
			Your_country.setName_Country("Wind Country");
			Your_village.setName_Village("Hidden Sand Village");
			Your_village.setPopulation_Village(19000);
			cout << "Great, his country is now: " << Your_country.getName_Country() << " and his village is now: " << Your_village.getName_Village() << " where " << Your_village.getPopulation_Village() << " people live." << endl;
			cout << "Now you have to choose a clan:" << endl;
			cout << "1. Kazekage Clan" << endl << "2. Shirogane Clan" << endl << "3. Hoki Clan" << endl;
			cin >> choice;
			if (choice == "1")
			{
				Your_clan.setName_Clan("Kazekage Clan");
				Your_clan.setPopulation_Clan(23);
				cout << "Great, his clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
			if (choice == "2")
			{
				Your_clan.setName_Clan("Shirogane Clan");
				Your_clan.setPopulation_Clan(56);
				cout << "Great, his clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
			if (choice == "3")
			{
				Your_clan.setName_Clan("Hoki Clan");
				Your_clan.setPopulation_Clan(46);
				cout << "Great, his clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
		}
		else if (choice == "4")
		{
			Your_country.setName_Country("Water Country");
			Your_village.setName_Village("Village of the Hidden Mist");
			Your_village.setPopulation_Village(11000);
			cout << "Great, his country is now: " << Your_country.getName_Country() << " and his village is now: " << Your_village.getName_Village() << " where " << Your_village.getPopulation_Village() << " people live." << endl;
			cout << "Now you have to choose a clan:" << endl;
			cout << "1. Karatachi Clan" << endl << "2. Hozuki Clan" << endl << "3. Yuki Clan" << endl;
			cin >> choice;
			if (choice == "1")
			{
				Your_clan.setName_Clan("Karatachi Clan");
				Your_clan.setPopulation_Clan(104);
				cout << "Great, his clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
			if (choice == "2")
			{
				Your_clan.setName_Clan("Hozuki Clan");
				Your_clan.setPopulation_Clan(94);
				cout << "Great, his clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
			if (choice == "3")
			{
				Your_clan.setName_Clan("Yuki Clan");
				Your_clan.setPopulation_Clan(115);
				cout << "Great, his clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
		}
		cout << "Now it's time to choose the chakra element that belongs to your character!" << endl;
		cout << "1. Water" << endl << "2. Fire" << endl << "3. Lightning" << endl << "4. Wind" << endl << "5. Earth" << endl;
		cin >> choice;
		if (choice == "1")
		{
			Your_chakra.setElement_Chakra("Water");
			cout << "Chakra element is " << Your_chakra.getElement_Chakra() << endl;
		}
		else if (choice == "2")
		{
			Your_chakra.setElement_Chakra("Fire"); 
			cout << "Chakra element is " << Your_chakra.getElement_Chakra() << endl;
		}
		else if (choice == "3")
		{
			Your_chakra.setElement_Chakra("Lightning");
			cout << "Chakra element is " << Your_chakra.getElement_Chakra() << endl;
		}
		else if (choice == "4")
		{
			Your_chakra.setElement_Chakra("Wind");
			cout << "Chakra element is " << Your_chakra.getElement_Chakra() << endl;
		}
		else if (choice == "5")
		{
			Your_chakra.setElement_Chakra("Earth");
			cout << "Chakra element is " << Your_chakra.getElement_Chakra() << endl;
		}
		cout << "Very nice! Choose your character's gender:" << endl;
		cout << "1. Man" << endl << "2. Woman" << endl;
		cin >> choice;
		if (choice == "1")
		{
			Your_person.setGender("Man");
			cout << "Gender: " << Your_person.getGender() << endl;
		}
		else if (choice == "2")
		{
			Your_person.setGender("Woman");
			cout << "Gender: " << Your_person.getGender() << endl;
		}
		cout << "Ok. Give him a name." << endl;
		cin >> choice;
		Your_person.setName(choice);
		cout << "Name: " << Your_person.getName() << endl;
		cout << "Interesting. How old is he?" << endl;
		unsigned age;
		cin >> age;
		Your_person.setAge(age);
		cout << "Age: " << Your_person.getAge() << endl; 
		cout << "It's time to determine the life path of your character." << endl;
		cout << "1. Ninja" << endl << "2. Worker" << endl;
		cin >> choice;
		if (choice == "1")
		{
			cout << "Good! His life will be full of adventures and battles." << endl;
			cout << "What rank will he have when he appears?" << endl;
			cout << "1. Academy student" << endl << "2. Genin" << endl << "3. Chunin" << endl << "4. Goinin" << endl << "5. Kage" << endl;
			cin >> choice;
			if (choice == "1")
			{
				Your_ninja.setRank("Academy student");
				cout << "His rank is now " << Your_ninja.getRank() << endl;
			}
			if (choice == "2")
			{
				Your_ninja.setRank("Genin");
				cout << "His rank is now " << Your_ninja.getRank() << endl; 
			}
			if (choice == "3")
			{
				Your_ninja.setRank("Chunin");
				cout << "His rank is now " << Your_ninja.getRank() << endl; 
			}
			if (choice == "4")
			{
				Your_ninja.setRank("Goinin");
				cout << "His rank is now " << Your_ninja.getRank() << endl;
			}
			if (choice == "5")
			{
				Your_ninja.setRank("Kage");
				cout << "His rank is now " << Your_ninja.getRank() << endl;
			}
			cout << "What weapon do you prefer?" << endl;
			cin >> choice;
			Your_ninja.setWeapon(choice);
			cout << "Type weapon: " << Your_ninja.getWeapon() << endl;
			cout << "Cool! Choose what fighting technique he will study:" << endl;
			cout << "1. Ninjutsu" << endl << "2. Genjutsu" << endl << "3. Taijutsu" << endl;
			cin >> choice;
			if (choice == "1")
			{
				Your_ninja.setFstyle("Ninjutsu");
				cout << "Basic fighting style of " << Your_ninja.getFstyle() << endl;
			}
			if (choice == "2")
			{
				Your_ninja.setFstyle("Genjutsu");
				cout << "Basic fighting style of " << Your_ninja.getFstyle() << endl;
			}
			if (choice == "3")
			{
				Your_ninja.setFstyle("Taijutsu");
				cout << "Basic fighting style of " << Your_ninja.getFstyle() << endl;
			}
			cout << "Great, your character is ready! Here is its full characteristic:" << endl;
			cout << "Name: " << Your_person.getName() << endl;
			cout << "Age: " << Your_person.getAge() << endl;
			cout << "Gender: " << Your_person.getGender() << endl; 
			cout << "Country: " << Your_country.getName_Country() << endl;
			cout << "Village: " << Your_village.getName_Village() << " Population: " << Your_village.getPopulation_Village() << endl;
			cout << "Clan: " << Your_clan.getName_Clan() << " Population: " << Your_clan.getPopulation_Clan() << endl;
			cout << "Element chakra: " << Your_chakra.getElement_Chakra() << endl;
			cout << "Rank: " << Your_ninja.getRank() << endl;
			cout << "Type weapon: " << Your_ninja.getWeapon() << endl; 
			cout << "Fighting style: " << Your_ninja.getFstyle() << endl;
		}
		if (choice == "2")
		{
			cout << "Goood! The life of an ordinary worker is unpredictable, but everything is in your hands." << endl;
			cout << "Choose one of the proposed professions (this will determine your starting salary):" << endl;
			cout << "1. Builder" << endl << "2. Trader" << endl << "3. Fisherman" << endl << "4. Blacksmith" << endl << "5. Miner" << endl << "6. Tailor" << endl << "7. Cook" << endl << "8. Shoemaker" << endl << "9. Jeweler" << endl;
			cin >> choice;
			if (choice == "1")
			{
				Your_worker.setCraft("Builder");
				Your_worker.setSalary(2000);
				cout << "He is a " << Your_worker.getCraft() << " and currently earns $" << Your_worker.getSalary() << endl;
			}
			if (choice == "2")
			{
				Your_worker.setCraft("Trader");
				Your_worker.setSalary(8000);
				cout << "He is a " << Your_worker.getCraft() << " and currently earns $" << Your_worker.getSalary() << endl;
			}
			if (choice == "3")
			{
				Your_worker.setCraft("Fisherman");
				Your_worker.setSalary(2000);
				cout << "He is a " << Your_worker.getCraft() << " and currently earns $" << Your_worker.getSalary() << endl;
			}
			if (choice == "4")
			{
				Your_worker.setCraft("Blacksmith");
				Your_worker.setSalary(6000);
				cout << "He is a " << Your_worker.getCraft() << " and currently earns $" << Your_worker.getSalary() << endl;
			}
			if (choice == "5")
			{
				Your_worker.setCraft("Miner");
				Your_worker.setSalary(9000);
				cout << "He is a " << Your_worker.getCraft() << " and currently earns $" << Your_worker.getSalary() << endl;
			}
			if (choice == "6")
			{
				Your_worker.setCraft("Tailor");
				Your_worker.setSalary(3000);
				cout << "He is a " << Your_worker.getCraft() << " and currently earns $" << Your_worker.getSalary() << endl;
			}
			if (choice == "7")
			{
				Your_worker.setCraft("Cook");
				Your_worker.setSalary(3000);
				cout << "He is a " << Your_worker.getCraft() << " and currently earns $" << Your_worker.getSalary() << endl;
			}
			if (choice == "8")
			{
				Your_worker.setCraft("Shoemaker");
				Your_worker.setSalary(4000);
				cout << "He is a " << Your_worker.getCraft() << " and currently earns $" << Your_worker.getSalary() << endl;
			}
			if (choice == "9")
			{
				Your_worker.setCraft("Jeweler");
				Your_worker.setSalary(10000);
				cout << "He is a " << Your_worker.getCraft() << " and currently earns $" << Your_worker.getSalary() << endl;
			}
			cout << "Great, your character is ready! Here is its full characteristic:" << endl; 
			cout << "Name: " << Your_person.getName() << endl; 
			cout << "Age: " << Your_person.getAge() << endl; 
			cout << "Gender: " << Your_person.getGender() << endl; 
			cout << "Country: " << Your_country.getName_Country() << endl; 
			cout << "Village: " << Your_village.getName_Village() << " Population: " << Your_village.getPopulation_Village() << endl; 
			cout << "Clan: " << Your_clan.getName_Clan() << " Population: " << Your_clan.getPopulation_Clan() << endl; 
			cout << "Element chakra: " << Your_chakra.getElement_Chakra() << endl; 
			cout << "Craft " << Your_worker.getCraft() << endl;
			cout << "Salary: $" << Your_worker.getSalary() << endl;
		}
	}
	return 0;
}