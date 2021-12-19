// PrintAllPrimes.cpp
// CheckPrime.cpp
#include <iostream>
using namespace std;

int main() {

	int i;

	int no = 70;
	// Check if the number is prime then print it
	// else ignore or skip it
	bool KyaPrimeHai = true;
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

	cout << endl;

	return 0;
}
















