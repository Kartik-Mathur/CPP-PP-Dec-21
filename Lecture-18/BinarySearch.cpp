#include <iostream>
using namespace std;

int BinarySearch(int *a, int s, int e, int key) {
	// base case
	if (s > e) {
		return -1;
	}
	// recursive case
	int mid = (s + e) / 2;
	if (a[mid] == key) {
		return mid;
	}
	else if (a[mid] > key) {
		int ChotaAns = BinarySearch(a, s, mid - 1, key);
		return ChotaAns;
	}
	else {
		return BinarySearch(a, mid + 1, e, key);
	}
}

int main() {

	int a[] = {1, 2, 4, 6, 7, 9, 10};
	int n = sizeof(a) / sizeof(int);

	cout << BinarySearch(a, 0, n - 1, 10) << endl;

	return 0;
}


