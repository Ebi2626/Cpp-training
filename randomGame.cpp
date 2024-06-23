#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main () {

    int userMoves = 0, currentRandomNumber, response;

    srand(time(NULL)); // Seed randomized by time

    currentRandomNumber = rand() % 10 + 1; // Random number from 1 to 10

    // Loop to provide guessing numbers
    do {
        cout << "Guess number from 1 to 10: ";
        cin >> response;
        userMoves++;
        if(response < currentRandomNumber) {
            cout << "Given number is too low" << endl;
        } else if (response > currentRandomNumber) {
            cout << "Given number is too big" << endl;
        }
    } while (currentRandomNumber != response);

    cout << "Congratulations! You've guessed the number in " << userMoves << " trials." << endl << endl;

    return 0;
}