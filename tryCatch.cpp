#include <iostream>

using namespace std;

class ProgrammerException {
	public:
		string message;
		ProgrammerException(string msg) {
			message = msg;
		}
};


class Animal {
	public:
		int age;
		Animal(int age) {
			if(age > 500) {
				throw ProgrammerException("Too old");
			}
			if(age < 0) {
				throw ProgrammerException("Age cannot be lower than 0");
			}
			this->age = age;
		}
};

int main() {

	try {
		Animal tooOld(501);
		Animal tooYoung(-500);
		Animal goodAnimal(10);
	} catch(ProgrammerException e) {
		cout << e.message << endl;
	}

	return 0;
}