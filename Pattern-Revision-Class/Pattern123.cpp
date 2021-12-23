// Pattern123.cpp
#include <iostream>
using namespace std;

int main() {

	int n, row, i, no;
	cin >> n;

	row = 1;
	no = 1;

	while (row <= n) {
		// Work
		i = 1;
		while (i <= row) {
			cout << no << " ";

			no++;
			i++;
		}

		cout << '\n';
		row++;
	}

	return 0;
}
















