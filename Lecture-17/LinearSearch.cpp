// LinearSearch.cpp
#include <iostream>
using namespace std;

int LinearSearch(int *a, int n, int key, int i) {
	// base case
	if (i == n) {
		return -1;
	}
	// recursive case
	if (a[i] == key) {
		return i;
	}
	else {
		return LinearSearch(a, n, key, i + 1);
	}
}

int LinearSearch1(int *a, int n, int key) {
	// base case
	if (n == 0) {
		return -1;
	}
	// recursive case
	if (a[n - 1] == key) {
		return n - 1;
	}
	return LinearSearch1(a, n - 1, key);
}

int LinearSearch2(int *a, int n, int key) {
	// base case
	if (n == 0) {
		return -1;
	}
	// recursive case
	if (a[0] == key) {
		return 0;
	}
	int chotaIndex = LinearSearch2(a + 1, n - 1, key);
	if (chotaIndex != -1) {
		return chotaIndex + 1;
	}
	else {
		return chotaIndex;
	}

}

int main() {

	int a[] = {1, 4, 5, 2, 6};
	int n = sizeof(a) / sizeof(int);
	int key;
	cin >> key;
	cout << LinearSearch(a, n, key, 0) << endl;
	cout << LinearSearch1(a, n, key) << endl;
	cout << LinearSearch2(a, n, key) << endl;

	return 0;
}
















