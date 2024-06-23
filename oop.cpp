#include <iostream>

using namespace std;


class BankAccount {
    private:
        int state = 1000;
    
    public: 
        int getState() {
            return this->state;
        }

        int withdraw(int x) {
            if(this->state >= x) {
                this->state -= x;
                return x;
            } else {
                return 0;
            }
        }

        void deposit(int money) {
            cout << "Thanks, you gave me " << money << "$" << endl;
            this->state += money;
            cout << "Now I have " << this->getState() << "$" << endl;
        }
};

class Person {
    string name;
    string lastName;
    int age;
    BankAccount account;

    public: Person(string name, string lastName, int age) {
        this->name = name;
        this->lastName = lastName;
        this->age = age;
    }

    public: void introduceYourself() {
        cout << "Hello my name is: " << this->name << " " << this->lastName << ", I'm " << this->age << endl;  
    }

    public: void introduceYourBankAccount() {
        cout << "My account state is: " << this->account.getState() << endl;
    }

    public: int giveMeSomeMoney(int money) {
        int moneyInHand = this->account.withdraw(money);
        if(moneyInHand != 0) {
            cout << "Sure here you have: " << moneyInHand << "$" << endl;
        } else {
            cout << "Sorry, I don't have such money" << endl;
        }
        return moneyInHand;
    }

    public: void reciveSomeMoney(int money) {
        if(money <= 0) {
            cout << "Nice try, you cannot give me amount of money below or equal to 0" << endl;   
        } else {
            this->account.deposit(money);
        }
    }
};


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