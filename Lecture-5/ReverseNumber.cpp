// ReverseNumber.cpp
#include <iostream>
using namespace std;

int main() {
	int n, digit, sum;
	cin >> n; // Initialization

	sum = 0;

	for ( ; n > 0; n = n / 10 ) {
		// Work
		digit = n % 10;
		sum = sum * 10 + digit;
	}
	cout << sum << endl;
	cout << sum + 10 << endl;

	return 0;
}
















