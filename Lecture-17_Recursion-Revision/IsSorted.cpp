// IsSorted.cpp
#include <iostream>
using namespace std;

bool IsSorted(int *a, int n) {
	// base case
	if (n <= 1) {
		return true;
	}
	// recursive case
	bool ChotaArraySorted = IsSorted(a + 1, n - 1);
	if (ChotaArraySorted == true && a[0] <= a[1]) {
		return true;
	}
	else {
		return false;
	}
}


int main() {

	int a[] = {1, 3, 4, 5, 8, 10, 0};
	int n = sizeof(a) / sizeof(int);

	if (IsSorted(a, n)) {
		cout << "Sorted" << endl;
	}
	else {
		cout << "Not Sorted" << endl;
	}
	return 0;
}
















