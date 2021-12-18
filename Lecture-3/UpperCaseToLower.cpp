// UpperCaseToLower.cpp
#include <iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch;

	char c = (ch ^ 32);
	cout << c << endl;
	// int lower_case_ascii_number, upper_case_ascii_number;

	// int ascii_number = ch;
	// cout << "Ascii Number: " << ascii_number << endl;

	// if (ascii_number >= 65 and ascii_number <= 90) {
	// 	// Upper case character ka ascii_number
	// 	lower_case_ascii_number = ascii_number + 32;
	// 	ch = lower_case_ascii_number;
	// 	cout << ch << endl;
	// }
	// else {
	// 	// Lower case character ka ascii_number
	// 	upper_case_ascii_number = ascii_number - 32;
	// 	ch = upper_case_ascii_number;
	// 	cout << ch << endl;
	// }

	return 0;
}
















