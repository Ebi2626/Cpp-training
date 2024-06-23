#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	fstream File("test.txt", ios::app);
	string line;
	if(File.is_open()) {
		cout << "Provide data to file: " << endl;
		getline(cin, line);
		File << line << "\n";
		File.close();
	}

	File.open("test.txt");
	if(File.is_open()) {
		cout << "File content: " << endl << endl;
		while(getline(File, line)) {
			cout << line << endl;
		}
		cout << "\nEnd of file content" << endl;
	}

	File.close();

	return 0;
}