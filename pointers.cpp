#include <iostream>
#include "pointers.h"

using namespace std;

int main() {
    int a = 5;

    cout << "Address before: " << &a << endl;
    cout << "Wartość before: " << a << "\n" << endl;

    change(&a); // & give us address to var

    cout << "Address after: " << &a << endl;
    cout << "Value after: " << a << endl;

    return 0;
}

void change(int *x) { 
    *x = -1; // * get us value stored under specific address 
    cout << "Address in function: " << x << endl;
    cout << "New value in function: " << *x << "\n" << endl;
}