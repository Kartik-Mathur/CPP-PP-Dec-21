// HollowDiamond.cpp
#include <iostream>
using namespace std;

int main() {

	int n;

	cin >> n;

	for (int row = 1; row <= n; ++row)
	{
		if (row == 1 || row == n) {
			// Print n times star
			for (int i = 0; i < n; ++i)
			{
				cout << '*' << '\t';
			}
			cout << endl;
		}
		else if (row <= (n + 1) / 2) {
			for (int stars = 1 ; stars <= (n + 3) / 2 - row ; stars++) {
				cout << "*\t";
			}

			for (int i = 1; i <= 2 * row - 3; ++i)
			{
				cout << "\t";
			}

			for (int stars = 1 ; stars <= (n + 3) / 2 - row ; stars++) {
				cout << "*\t";
			}
			cout << endl;
		}
		else {
			int row_d = n - row + 1;
			for (int stars = 1 ; stars <= (n + 3) / 2 - row_d ; stars++) {
				cout << "*\t";
			}

			for (int i = 1; i <= 2 * row_d - 3; ++i)
			{
				cout << "\t";
			}

			for (int stars = 1 ; stars <= (n + 3) / 2 - row_d ; stars++) {
				cout << "*\t";
			}
			cout << endl;

		}
	}


	return 0;
}
















