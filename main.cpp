#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> msg {"Hello", "World"};

    for (const string &word : msg) {
        cout << word << " ";
    }
    return 0;
}