#include <iostream>

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount {
    private:
        int state;
    
    public:
        BankAccount();
        BankAccount(int initialMoney);
        int getState();
        int withdraw(int moneyToWithdraw);
        void deposit(int moneyToDeposit);
};

#endif