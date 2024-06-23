#include <iostream>
#include "BankAccount.h"

using namespace std;

BankAccount::BankAccount() { this->state = 1000; }

BankAccount::BankAccount(int initialMoney) { this->state = initialMoney; }

int BankAccount::getState() { return this->state; }

int BankAccount::withdraw(int moneyToWithdraw) {
  if (this->state >= moneyToWithdraw) {
    this->state -= moneyToWithdraw;
    return moneyToWithdraw;
  } else {
    return 0;
  }
}
void BankAccount::deposit(int moneyToDeposit) {
    cout << "Thanks, you gave me " << moneyToDeposit << "$" << endl;
    this->state += moneyToDeposit;
    cout << "Now I have " << this->getState() << "$" << endl;
}