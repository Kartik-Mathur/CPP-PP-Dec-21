// Pattern1_1.cpp
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int row = 1; row <= 2 * n - 1 ; row++) {
		if (row <= n) {
			// Print row times star
			for (int i = 1; i <= row; ++i)
			{
				cout << "* ";
			}
		}
		else {
			for (int i = 1; i <= 2 * n - row; ++i)
			{
				cout << "* ";
			}
		}
		cout << endl;
	}

	return 0;
}
















