// Pattern123 - 2.cpp
#include <iostream>
using namespace std;

int main() {

	int n, row, i, no;
	cin >> n;
	cout << "Printing Pattern: " << endl;
	no = 1;
	for (row = 1; row <= n ; row++) {
		// Work
		for (i = 1 ; i <= row ; i++) {
			cout << no * 2 << " ";
			no++;
		}

		cout << endl;
	}

	return 0;
}

















