// ArraySum.cpp
#include <iostream>
using namespace std;

int Sum(int *a, int n) {
	// base
	if (n == 0) {
		return 0;
	}

	// recursive case
	return a[n - 1] + Sum(a, n - 1);
}

int Sum1(int *a, int n, int i) {
	// base case
	if (i == n) {
		return 0;
	}
	// recursive case
	return a[i] + Sum1(a, n, i + 1);
}

int main() {

	int a[] = {1, 5, 6, 8, 10};
	int n = sizeof(a) / sizeof(int);

	cout << Sum(a, n) << endl;
	cout << Sum1(a, n, 0) << endl;

	return 0;
}
















