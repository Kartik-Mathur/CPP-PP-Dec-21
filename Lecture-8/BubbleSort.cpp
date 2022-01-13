// BubbleSort.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	cout << "Before Sorting: ";

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	for (int j = 0; j < n - 1; ++j)
	{
		for (int i = 0; i <= n - 2; ++i)
		{
			if (a[i] < a[i + 1]) {
				// 3rd way
				swap(a[i], a[i + 1]);
				// 2nd way swapping
				// a[i] = a[i + 1] + a[i];
				// a[i + 1] = a[i] - a[i + 1];
				// a[i] = a[i] - a[i + 1];
				// 1st way using temp
				// int temp = a[i];
				// a[i] = a[i + 1];
				// a[i + 1] = temp;
			}
		}
	}

	cout << "After Sorting: ";
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;


	return 0;
}
















