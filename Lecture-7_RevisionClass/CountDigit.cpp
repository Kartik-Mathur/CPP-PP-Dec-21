// CountDigit.cpp
#include <iostream>
using namespace std;

int main() {
	int n, digit;

	cin >> n;
	cin >> digit;

	int cnt = 0;

	while (n > 0) {
		if ( (n % 10) == digit) {
			cnt++;
		}

		n = n / 10;
	}

	cout << cnt << endl;


	return 0;
}
















