#include <iostream>
#include <string>

using namespace std;

/*
* This code written by Jason Harris - ToadNamedDuck
* for the purpose of learning basic input/output in C++.
*/
int main() {
	string name = "";
	string response = "";
	bool respectful = false;
	cout << "Please type your name, so that I may greet you." << endl;
	getline(cin, name);//Do not use cin >> name, because this has unexpected effects in the buffer, especially around whitespace. Using getline from string library is great for this.
	cout << "Hello, " << name << ". I greet you, for now." << endl;
	cout << name << ", press the Enter key, and gracefully leave my presence." << endl;
	getline(cin, response);
	while (!respectful) {
		if (response.empty()) {
			cout << "Very well, take care, friend " << name << ".";
			respectful = true;
		}
		else {
			cout << "Do not tempt fate, " << name << "." << endl;
			getline(cin, response);
		}
	}
}