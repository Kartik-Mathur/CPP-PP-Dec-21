// PatternStar.cpp
#include <iostream>
using namespace std;

int main() {

	int n, row, i;
	cin >> n;
	for (row = 1; row <= n; row++) {
		// 1. To print row times star
		for (i = 1; i <= row ; i++) {
			cout << "*";
		}
		// 2. Print n-row+1 times star
		cout << ' ';
		for (i = 1 ; i <= n - row + 1 ; i++) {
			cout << '*';
		}
		// 3. Print n-row+1 times star
		cout << " ";
		for (i = 1 ; i <= n - row + 1 ; i++) {
			cout << '*';
		}
		// 4. Print n-row+1 times star
		cout << ' ';
		for (i = 1; i <= row ; i++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
















