#include <iostream>

using namespace std;

class Animal {
	private: 
		string noiseString;
		void saySomthing(string toSay) {
			cout << toSay << endl;
		}

	protected:
		void makeNoise() {
			this->saySomthing(this->noiseString);
		}
		void sayHello() {
			this->makeNoise();
		}
	public:
		Animal(string noise) {
			this->noiseString = noise;
		}
};

class Cat: private Animal {
	public:
	Cat(string noiseString = "Mrau!"): Animal(noiseString) {
	}
	void sayHello() {
		Animal::sayHello();
	}
};


int main() {

	Cat mruczek;
	cout << "Mruczek robi: ";
	mruczek.sayHello();
	cout << endl;

	return 0;
}