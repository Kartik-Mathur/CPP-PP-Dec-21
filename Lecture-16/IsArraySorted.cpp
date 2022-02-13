// IsArraySorted.cpp
#include <iostream>
using namespace std;

bool IsArraySorted(int *a, int n) {
	// 1. Base case
	if (n == 0 || n == 1) {
		return true;
	}
	// 2. Recurrence relation
	bool isChotaSorted = IsArraySorted(a + 1, n - 1);
	if (a[0] <= a[1] && isChotaSorted == true) {
		// poora array sorted hai
		return true;
	}
	else {
		return false;
	}
}

bool CheckSorted(int *a, int n, int i) {
	// base case
	if (i == n - 1) {
		return true;
	}

	// recurrence relation
	if (a[i] <= a[i + 1] && CheckSorted(a, n, i + 1) == true) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	int a[] = {1, 5, 6, 8, 10, 0};
	int n = sizeof(a) / sizeof(int);

	if (IsArraySorted(a, n)) {
		cout << "Sorted hai" << endl;
	}
	else {
		cout << "Sorted nhi hai" << endl;
	}

	if (CheckSorted(a, n, 0)) {
		cout << "Sorted hai" << endl;
	}
	else {
		cout << "Sorted nhi hai" << endl;
	}


	return 0;
}
















