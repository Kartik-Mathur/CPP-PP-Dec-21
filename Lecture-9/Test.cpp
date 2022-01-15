// BubbleSort.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 1, 2 , 3, 4};
	int n = sizeof(a) / sizeof(int);

	cout << "Before Sorting: ";

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n - 1; ++i)
	{
		int counter = 0;
		for (int j = 0; j <= n - 2 - i; ++j)
		{
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				counter++;
			}
		}

		if (counter == 0) {
			break;
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
















