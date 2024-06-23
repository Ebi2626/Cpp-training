#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	fstream File("test.txt", ios::app);
	string line;
	if(File.is_open()) {
		cout << "Wprowadź dane do pliku: " << endl;
		getline(cin, line);
		File << line << "\n";
		File.close();
	}

	File.open("test.txt");
	if(File.is_open()) {
		cout << "Zawartość pliku: " << endl << endl;
		while(getline(File, line)) {
			cout << line << endl;
		}
		cout << "\nKoniec zawartości pliku" << endl;
	}

	File.close();

	return 0;
}