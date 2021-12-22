// PrimePrint - 2.cpp
#include <iostream>
using namespace std;

int main() {
	int n, i, j;
	cin >> n;
	bool kyaPrimeHai;

	// To print all prime till n
	for (i = 2 ; i <= n ; i++) {
		// cout << i << " ";
		// Sirf jo i prime hai unhe print karna hai
		// Check karlo i prime hai ya nahi hai
		kyaPrimeHai = true;

		for (j = 2 ; j <= i - 1 ; j++) {
			if (i % j == 0) {
				kyaPrimeHai = false;
			}
		}
		if (kyaPrimeHai == true) {
			cout << i << " ";
		}
	}

	cout << endl;
	return 0;
}
















