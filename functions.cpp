#include <iostream>
#include "functions2.h"

using namespace std;

/*
    Functions must be declared with their return type
    Void - means nothing to return
*/


int main() {

    printSomething("Number is: " + to_string(add()));

    return 0;
}

void printSomething(string test) {
    cout << "Something: " << test << endl;
}

int add() {
    return 0;
}

int add(int a, int b, int c, int d, int e) {
    return a + b + c + d + e;
}

/*
    Function must be declared before their calls
*/