#include <iostream>

using namespace std;

int main() {

    /*
        Arrays has fixed size
        Collections can be dynamic form 
        Uninitialized array items has random values - current state of memory cell
        Var temperatures is potiner to the beginning of an array
    */

    int temparatures[5] = { 1, 2, 3, 4, 5 }; 

    cout << "Pointer to index of array beginning: " << temparatures << endl;

    /*
        sizeof return value in B so to know how many elements we have in array
        we nedd to divide result by size of one array element
    */
    for(int i = 0; i < sizeof(temparatures) / sizeof(int); i++){
        cout << "Current index: " << i << " value: " << temparatures[i] << endl;
    }

    /*
        We can declare multidimensional arrays as well
    */

    int multidimensionalTab[4][4] = {
        {1, 2, 3, 8},
        {4, 5, 6, 8},
        {7, 8, 9, 8},
        {7, 8, 9, 8}
    };

    for(int i = 0; i < sizeof(multidimensionalTab[i]) / sizeof(int) - 1; i++) {
        for(int j = 0; j < sizeof(multidimensionalTab[i]) / sizeof(int); j++) {
            cout << "multidimensionalTab[" << i << "][" << j << "]: " << multidimensionalTab[i][j] << endl; 
        }
    }


    return 0;
}