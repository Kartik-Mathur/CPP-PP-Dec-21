// PatternDiamond.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	n = (n + 1) / 2;

	for (int row = 1; row <= n; ++row)
	{
		for (int spaces = 1; spaces <= n - row ; spaces++) {
			cout << ' ';
		}

		for (int stars = 1; stars <= 2 * row - 1 ; stars++) {
			cout << '*';
		}

		cout << endl;
	}

	for (int row = n - 1 ; row >= 1; row--) {
		for (int spaces = 1; spaces <= n - row ; spaces++) {
			cout << ' ';
		}

		for (int stars = 1; stars <= 2 * row - 1 ; stars++) {
			cout << '*';
		}

		cout << endl;
	}

	return 0;
}
















