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
		cout << "Well done! Let's get started." << endl << "P.S. Write a number (Please)" << endl << "First, select a country from the list (Be careful, the village and the choice of the clan depends on it)." << endl;
		cout << "1. Fire Country (Village of the Hidden Leaf)" << endl << "2. Whirlpool Country (Hidden Whirlpool Village)" << endl << "3. Wind Country (Hidden Sand Village)" << endl << "4. Water Country (Village of the Hidden Mist)" << endl;
		cin >> choice;
		if (choice == "1")
		{
			Your_country.setName_Country("Fire Country");
			Your_village.setName_Village("Village of the Hidden Leaf");
			Your_village.setPopulation_Village(100000);
			cout << "Great, your country is now: " << Your_country.getName_Country() << " and your village is now: " << Your_village.getName_Village() << " where " << Your_village.getPopulation_Village() << " people live." << endl;
			cout << "Now you have to choose a clan:" << endl;
			cout << "1. Aburame Clan" << endl << "2. Hyuga Clan" << endl << "3. Nara Clan" << endl << "4. Senju Clan" << endl << "5. Uchiha Clan" << endl << "6. Yamanaka Clan" << endl;
			cin >> choice;
			if (choice == "1")
			{
				Clan Your_clan("Aburame Clan", 101, "Village of the Hidden Leaf", 100000, "Fire Country");
				cout << "Great, your clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
			if (choice == "2")
			{
				Clan Your_clan("Hyuga Clan", 112, "Village of the Hidden Leaf", 100000, "Fire Country");
				cout << "Great, your clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
			if (choice == "3")
			{
				Clan Your_clan("Nara Clan", 95, "Village of the Hidden Leaf", 100000, "Fire Country");
				cout << "Great, your clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
			if (choice == "4")
			{
				Clan Your_clan("Senju Clan", 45, "Village of the Hidden Leaf", 100000, "Fire Country");
				cout << "Great, your clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
			if (choice == "5")
			{
				Clan Your_clan("Uchiha Clan", 2, "Village of the Hidden Leaf", 100000, "Fire Country");
				cout << "Great, your clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
			if (choice == "6")
			{
				Clan Your_clan("Yamanaka Clan", 131, "Village of the Hidden Leaf", 100000, "Fire Country");
				cout << "Great, your clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
		}
		else if (choice == "2")
		{
			Country Your_country("Whirlpool Country");
			Village Your_village("Hidden Whirlpool Village", 1000, "Whirlpool Country");
			cout << "Great, your country is now: " << Your_country.getName_Country() << " and your village is now: " << Your_village.getName_Village() << " where " << Your_village.getPopulation_Village() << " people live." << endl;
			cout << "Now you have to choose a clan:" << endl;
			cout << "1. Uzumaki Clan" << endl;
			cin >> choice;
			if (choice == "1")
			{
				Clan Your_clan("Uzumaki Clan", 14, "Hidden Whirlpool Village", 1000, "Whirlpool Country");
				cout << "Great, your clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
		}
		else if (choice == "3")
		{
			Country Your_country("Wind Country");
			Village Your_village("Hidden Sand Village", 19000, "Wind Country");
			cout << "Great, your country is now: " << Your_country.getName_Country() << " and your village is now: " << Your_village.getName_Village() << " where " << Your_village.getPopulation_Village() << " people live." << endl;
			cout << "Now you have to choose a clan:" << endl;
			cout << "1. Kazekage Clan" << endl << "2. Shirogane Clan" << endl << "3. Hoki Clan" << endl;
			cin >> choice;
			if (choice == "1")
			{
				Clan Your_clan("Kazekage Clan", 23, "Hidden Sand Village", 19000, "Wind Country");
				cout << "Great, your clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
			if (choice == "2")
			{
				Clan Your_clan("Shirogane Clan", 56, "Hidden Sand Village", 19000, "Wind Country");
				cout << "Great, your clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
			if (choice == "3")
			{
				Clan Your_clan("Hoki Clan", 46, "Hidden Sand Village", 19000, "Wind Country");
				cout << "Great, your clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
		}
		else if (choice == "4")
		{
			Country Your_country("Water Country");
			Village Your_village("Village of the Hidden Mist", 11000, "Water Country");
			cout << "Great, your country is now: " << Your_country.getName_Country() << " and your village is now: " << Your_village.getName_Village() << " where " << Your_village.getPopulation_Village() << " people live." << endl;
			cout << "Now you have to choose a clan:" << endl;
			cout << "1. Karatachi Clan" << endl << "2. Hozuki Clan" << endl << "3. Yuki Clan" << endl;
			cin >> choice;
			if (choice == "1")
			{
				Clan Your_clan("Karatachi Clan", 104, "Village of the Hidden Mist", 11000, "Water Country");
				cout << "Great, your clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
			if (choice == "2")
			{
				Clan Your_clan("Hozuki Clan", 94, "Village of the Hidden Mist", 11000, "Water Country");
				cout << "Great, your clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
			if (choice == "3")
			{
				Clan Your_clan("Yuki Clan", 115, "Village of the Hidden Mist", 11000, "Water Country");
				cout << "Great, your clan is now: " << Your_clan.getName_Clan() << " where " << Your_clan.getPopulation_Clan() << " people live." << endl;
			}
		}
		cout << "Now it's time to choose an element of your chakra!" << endl;
		cout << "1. Water" << endl << "2. Fire" << endl << "3. Lightning" << endl << "4. Wind" << endl << "5. Earth" << endl;
		cin >> choice;
		if (choice == "1")
		{
			Your_chakra.setElement_Chakra("Water");
			cout << "Your chakra element is " << Your_chakra << endl;
		}
		else if (choice == "2")
		{
			Your_chakra.setElement_Chakra("Fire");
			cout << "Your chakra element is " << Your_chakra.getElement_Chakra() << endl;
		}
		else if (choice == "3")
		{
			Your_chakra.setElement_Chakra("Lightning");
			cout << "Your chakra element is " << Your_chakra.getElement_Chakra() << endl;
		}
		else if (choice == "4")
		{
			Your_chakra.setElement_Chakra("Wind");
			cout << "Your chakra element is " << Your_chakra.getElement_Chakra() << endl;
		}
		else if (choice == "5")
		{
			Your_chakra.setElement_Chakra("Earth");
			cout << "Your chakra element is " << Your_chakra.getElement_Chakra() << endl;
		}
		cout << Your_chakra << endl;
	}

	return 0;
}