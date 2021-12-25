// ReverseANumber.cpp
#include <iostream>
using namespace std;

int main() {
	int n, digit;
	cin >> n; // Initialization

	for ( ; n > 0; n = n / 10 ) {
		// Work
		digit = n % 10;
		cout << digit;
	}

	// while (n > 0) { // Condition Check

	// 	// Work
	// 	digit = n % 10;
	// 	cout << digit;

	// 	n = n / 10; // Updation
	// }

	cout << endl;

	return 0;
}
















