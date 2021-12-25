// PrimeNumber.cpp
#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;

	for (i = 2;  i <= n - 1; i++) {
		if (n % i == 0) {
			cout << "Not Prime" << endl;
			break;
		}
	}

	if (i == n) {
		cout << "Prime" << endl;
	}

	// Tasks
	cout << "Sum of 10 + 20 is: " << 10 + 20 << endl;

	return 0;
}
















