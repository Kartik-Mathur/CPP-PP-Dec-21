// Pattern1.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int row = 1; row <= n ; row++) {
		// Print row times star
		for (int i = 1; i <= row; ++i)
		{
			cout << "* ";
		}

		cout << endl;
	}

	for (int row = n - 1 ; row >= 1 ; row--) {
		// Print row times star
		for (int i = 1; i <= row; ++i)
		{
			cout << "* ";
		}

		cout << endl;
	}


	return 0;
}
















