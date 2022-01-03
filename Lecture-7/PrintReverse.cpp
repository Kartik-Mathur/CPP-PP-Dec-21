// PrintReverse.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	for (int i = n - 1 ; i >= 0 ; i--)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}
















