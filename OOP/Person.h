#include <iostream>
#include "BankAccount.h"

using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person {
	private:
    	string name;
    	string lastName;
    	int age;
    	BankAccount account;

    public: 
		Person(string name, string lastName, int age);
		Person(string name, string lastName, int age, int initialMoney);
		void introduceYourself();
		void introduceYourBankAccount();
		int giveMeSomeMoney(int money);
		void reciveSomeMoney(int money);
};

#endif