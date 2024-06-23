#include <iostream>

using namespace std;

// We can replace "typename" with "class"
template<typename T, typename R>
R sum(T a, R b) {
	return a + b;
}

int main() {

	cout << sum(5, 2) << endl;
	cout << sum(5.5, 2.25) << endl;
	cout << sum(5, 2.25) << endl;


	return 0;
}