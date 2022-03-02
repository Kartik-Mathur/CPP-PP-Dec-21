// MergeSort.cpp
#include <iostream>
using namespace std;

void merge(int *a, int *b, int *c, int s, int e) {
	int mid = (s + e) / 2;
	int i = s;
	int j = mid + 1;
	int k = s;

	while (i <= mid and j <= e) {
		if (b[i] < c[j]) {
			a[k++] = b[i++];
		}
		else {
			a[k++] = c[j++];
		}
	}

	while (i <= mid) {
		a[k++] = b[i++];
	}
	while (j <= e) {
		a[k++] = c[j++];
	}
}

void MergeSort(int *a, int s, int e) {
	// base case
	if (s >= e) {
		return;
	}

	// recursive case
	// 1. Divide
	int b[1000], c[1000];
	int mid = (s + e) / 2;
	// Start se lekar mid tak saare elements in b[]
	for (int i = s; i <= mid; ++i)
	{
		b[i] = a[i];
	}

	// mid+1 se lekar end tak saare elements in c[]
	for (int i = mid + 1; i <= e ; ++i)
	{
		c[i] = a[i];
	}
	// 2. Sort
	MergeSort(b, s, mid);
	MergeSort(c, mid + 1, e);

	// 3. Merge
	merge(a, b, c, s, e);
}

int main() {


	int a[] = {8, 7, 6, 5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	MergeSort(a, 0, n - 1);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















