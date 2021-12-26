// Pattern123.cpp
#include <iostream>
using namespace std;

int main() {

	int n, no, i, row;
	cin >> n;
	char ch;

	for (row = 1; row <= n ; row++) {
		// work
		// no = 1;
		ch = 'A';
		// Print numbers n-row+1 times
		for (i = 1; i <= n - row + 1 ; i++) {
			cout << ch << " ";
			ch++;
		}

		cout << '\n';
	}

	return 0;
}
















