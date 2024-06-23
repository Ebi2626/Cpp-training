#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main() {

    unsigned int a = 5, b = 6;

    /*
        5 = 0000 0101 -> Real int is 8B => 0000 0000 (x7) 0000 0101
        6 = 0000 0110
    */

    /*
        Negation ~
        5 = 0000 0101 // all 0 change into 1, all 1 change into 0
        X = 1111 1010 // Result is MAX-INT - 5
    */

    cout << "Negation: " << (~a) << endl;

    /*
        Bitwise AND &
        5 = 0000 0101
        6 = 0000 0110
        -------------
        X = 0000 0100 = 4
    */

    cout << "And: " << a << " + " << b << " = " << (a & b) << endl;

    /*
        Bitwise OR |
        5 = 0000 0101
        6 = 0000 0110
        -------------
        X = 0000 0111 = 7
    */

    cout << "Or: " << a << " + " << b << " = " << (a | b) << endl;

    /*
        Bitwise XOR ^ - for two 1 it gives 0, it gives 1 only for different bits
        5 = 0000 0101
        6 = 0000 0110
        -------------
        X = 0000 0011 = 3
    */

    cout << "Xor: " << a << " + " << b << " = " << (a ^ b) << endl;

    /*
        Bitwise move right >> - all numbers are moving X positions right, first number from left is always 0
        5 = 0000 0101
        -------------
        X = 0000 0010 = 2
    */

    cout << "Bitwise move right: " << a << " >> 1 = " << (a >> 1) << endl;

    /*
        Bitwise move left << - all numbers are moving X positions left, first number from left is always 0
        5 = 0000 0101
        -------------
        X = 0000 1010 = 10
    */

    cout << "Bitwise move left: " << a << " << 1 = " << (a << 1) << endl;

    return 0;
}