// PrintAllPrimes.cpp
// CheckPrime.cpp
#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;
	int no;
	// no = 70;
	bool KyaPrimeHai;
	for (no = 2; no <= n; ++no)
	{
		// Check if the number is prime then print it
		// else ignore or skip it
		KyaPrimeHai = true;
		for (i = 2; i <= no - 1; ++i)
		{
			if (no % i == 0) {
				// cout << "Not Prime" << endl;
				// return 0;
				KyaPrimeHai = false;
			}
		}
		if (KyaPrimeHai == true)
		{
			// cout << "Prime" << endl;
			cout << no << " ";
		}
	}

	cout << endl;

	return 0;
}
















