// Inverse.cpp
#include <iostream>
using namespace std;

void Inverse(int *a, int *b, int idx, int n) {
	// base case
	if (idx == n) {
		return;
	}

	// recursive case
	int val = a[idx];
	b[val] = idx;
	Inverse(a, b, idx + 1, n);
}

int main() {

	int a[] = {1, 4, 3, 2, 0};
	int n = sizeof(a) / sizeof(int);

	int b[100];
	Inverse(a, b, 0, n);

	for (int i = 0; i < n; ++i)
	{
		cout << b[i] << " ";
	}

	cout << endl;

	return 0;
}
















