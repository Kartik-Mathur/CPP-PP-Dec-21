// CheckPrime.cpp
#include <iostream>
using namespace std;

int main() {

	int n, i;
	// cin >> n;
	bool KyaPrimeHai = true;

	int no;

	no = 17;
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
		cout << no << endl;
	}
	else {
		cout << "Not Prime" << endl;
	}

	return 0;
}
















