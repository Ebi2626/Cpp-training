#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(string name, string lastName, int age) {
  this->account = BankAccount();
  this->name = name;
  this->lastName = lastName;
  this->age = age;
}

Person::Person(string name, string lastName, int age, int initialMoney) {
  this->account = BankAccount(initialMoney);
  this->name = name;
  this->lastName = lastName;
  this->age = age;
}

void Person::introduceYourself() {
  cout << "Hello my name is: " << this->name << " " << this->lastName
       << ", I'm " << this->age << endl;
}

void Person::introduceYourBankAccount() {
  cout << "My account state is: " << this->account.getState() << endl;
}

int Person::giveMeSomeMoney(int money) {
  int moneyInHand = this->account.withdraw(money);
  if (moneyInHand != 0) {
    cout << "Sure here you have: " << moneyInHand << "$" << endl;
  } else {
    cout << "Sorry, I don't have such money" << endl;
  }
  return moneyInHand;
}

void Person::reciveSomeMoney(int money) {
  if (money <= 0) {
    cout << "Nice try, you cannot give me amount of money below or equal to 0"
         << endl;
  } else {
    this->account.deposit(money);
  }
}