// MergeTwoSortedArrays.cpp
#include <iostream>
using namespace std;

void MergeTwoSortedArrays(int a[], int b[], int m, int n) {
	int i = m - 1;
	int j = n - 1;
	int k = m + n - 1;
	while (i >= 0 && j >= 0) {
		if (a[i] < b[j]) {
			a[k] = b[j];
			k--;
			j--;
		}
		else {
			a[k] = a[i];
			k--;
			i--;
		}
	}

	while (j >= 0) {
		a[k] = b[j];
		k--;
		j--;
	}
}

void printArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {

	int a[7] = {4, 6, 8};
	int m = 3;
	int b[4] = {1, 2, 5, 9};
	int n = 4;

	MergeTwoSortedArrays(a, b, m, n);

	int x[7] = {1, 2, 3};
	int xm = 3;
	int y[4] = {4, 5, 6, 7};
	int yn = 4;

	MergeTwoSortedArrays(x, y, xm, yn);

	printArray(a, m + n);
	printArray(x, xm + yn);


	return 0;
}
















