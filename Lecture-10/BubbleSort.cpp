// BubbleSort.cpp
#include <iostream>
using namespace std;

void printArray(int a[], int n) {
	for (int i = 0; i < n ; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void BubbleSort(int a[], int n) {
	for (int i = 0; i <= n - 2; ++i)
	{
		for (int j = 0; j <= n - 2 - i; ++j)
		{
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}

int main() {

	int a[] = {6, 5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	printArray(a, n);
	BubbleSort(a, n);
	printArray(a, n);


	return 0;
}
















