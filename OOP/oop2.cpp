#include "BankAccount.h"
#include "Person.h"

int main() {

    Person frank("Frank", "Underwood", 33);

    frank.introduceYourself();
    frank.introduceYourBankAccount();

    frank.giveMeSomeMoney(500);
    frank.giveMeSomeMoney(500);

    frank.reciveSomeMoney(-1000);
    frank.reciveSomeMoney(1000);
    frank.giveMeSomeMoney(500);

    return 0;
}