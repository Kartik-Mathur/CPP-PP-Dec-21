// Check7.cpp
#include <iostream>
using namespace std;

bool Check7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return false;
	}
	// recursive case
	if (a[i] == 7) {
		return true;
	}
	return Check7(a, n, i + 1);
}

int first7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return -1;
	}

	// recursive case
	if (a[i] == 7) {
		return i;
	}
	return first7(a, n, i + 1);
}

int last7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return -1;
	}
	// recursive case
	if (a[i] == 7) {
		int chotaAns = i;
		int Aage7 = last7(a, n, i + 1);
		if (Aage7 != -1) {
			return Aage7;
		}
		return chotaAns;
	}
	else {
		return last7(a, n, i + 1);
	}
}

int main() {

	int a[] = {1, 2, 5, 4, 6, 7, 8, 7, 7, 7};
	int n = sizeof(a) / sizeof(int);

	if (Check7(a, n, 0)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	cout << first7(a, n, 0) << endl;
	cout << last7(a, n, 0) << endl;

	return 0;
}
















