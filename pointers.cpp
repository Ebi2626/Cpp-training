#include <iostream>
#include "pointers.h"

using namespace std;

int main() {
    int a = 5;

    cout << "Adres przed: " << &a << endl;
    cout << "Wartość przed: " << a << "\n" << endl;

    change(&a); // & give us address to var

    cout << "Adres po: " << &a << endl;
    cout << "Wartość po: " << a << endl;

    return 0;
}

void change(int *x) { 
    *x = -1; // * get us value stored under specific address 
    cout << "Adres w funkcji: " << x << endl;
    cout << "Nowa wartość w funkcji: " << *x << "\n" << endl;
}