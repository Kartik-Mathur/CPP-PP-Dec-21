// ReadingWhiteSpaces.cpp
#include <iostream>
using namespace std;

int main() {

	char ch;
	// cin >> ch;
	// cin.get(); // It will help you to read whitespace characters
	int spaces = 0, digits = 0, alpha = 0, special = 0;
	ch = cin.get();
	while (ch != '$') {
		if (ch == ' ' || ch == '\t' || ch == '\n') {
			spaces++;
		}
		else if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' and ch <= 'Z') ) {
			alpha++;
		}
		else if (ch >= '0' and ch <= '9') {
			digits++;
		}
		else {
			special++;
		}

		ch = cin.get();
	}

	cout << "Alphabets  : " << alpha << endl;
	cout << "Digits     : " << digits << endl;
	cout << "WhiteSpace : " << spaces << endl;
	cout << "Special    : " << special << endl;


	return 0;
}
















