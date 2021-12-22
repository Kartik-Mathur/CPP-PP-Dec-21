// CheckPrime.cpp
#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n; // Isko check krna hai prime hai ya nhi hai

	for (i = 2 ; i <= n - 1 ; i++) {
		// Work
		if (n % i == 0) {
			cout << "Not Prime" << endl;
			return 0; // Agar pata chal gaya prime nhi hai
			// toh program ko end krdo
		}
	}
	// Yaha par tabhi aaega jab i ki value n ke equal ho jaegi
	cout << "Prime" << endl;

	return 0;
}
















