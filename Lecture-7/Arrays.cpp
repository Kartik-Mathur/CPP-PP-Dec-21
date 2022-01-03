#include <iostream>
using namespace std;

int main() {

	// Initialization of the array
	// 1st way of initialization
	// int a[6] = {1, 2, 3, 4, 5, 6};

	// 2nd way of initialization
	// Only during intialization we can skip mentioning the size of the array
	// This is only and only possible during initialization
	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	// 3rd way of initialization
	// int a[5] = {1, 2};
	// 0th index: 1, 1st index: 2 rest all will be 0

	// for (int i = 0; i < 5; i++)
	// {
	// 	a[i] = i + 1;
	// }

	// Print the values
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;
	return 0;
}
















