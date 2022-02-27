#include <iostream>
using namespace std;

void printIncreasing(int n, int i) {
	// base case
	if (i == n + 1) {
		return;
	}

	// recursive case
	printIncreasing(n, i + 1);
	cout << i << " ";
}

int main() {

	int n;
	cin >> n;

	printIncreasing(n, 1);


	return 0;
}
















