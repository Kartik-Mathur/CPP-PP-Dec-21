// CheckPrimeUsingFlag.cpp
// CheckPrime.cpp
#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n; // Isko check krna hai prime hai ya nhi hai
	bool kyaPrimeHai = true;

	for (i = 2 ; i <= n - 1 ; i++) {
		// Work
		if (n % i == 0) {
			// cout << "Not Prime" << endl;
			kyaPrimeHai = false;
			// Pata chala prime nhi hai toh kyaPrimeHai ko false krdo set
		}
	}
	// Yaha par tabhi aaega jab i ki value n ke equal ho jaegi
	if (kyaPrimeHai == true) {
		// cout << "Prime" << endl;
		cout << n << endl;
	}


	return 0;
}
















