// BubbleSort.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, 3, 2, 1};
	int n = 5;

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
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
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
















