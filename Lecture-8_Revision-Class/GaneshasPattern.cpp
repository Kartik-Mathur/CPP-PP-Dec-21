// GaneshasPattern.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	// I
	// 1. Single Star
	cout << '*';
	// 2. Print (n-3)/2 spaces
	for (int i = 1; i <= (n - 3) / 2 ; ++i)
	{
		cout << ' ';
	}
	// 3. Print (n+1)/2 stars
	for (int i = 1; i <= (n + 1) / 2 ; ++i)
	{
		cout << '*';
	}
	cout << endl;

	// II
	for (int row = 1; row <= (n - 3) / 2 ; row++) {
		// 1. Single '*'
		cout << '*';
		// 2. (n-3)/2 spaces
		for (int i = 1; i <= (n - 3) / 2 ; ++i)
		{
			cout << ' ';
		}
		// 3. Single '*'
		cout << '*';
		cout << endl;
	}

	// III
	// 1. Print N times star
	for (int i = 1; i <= n; ++i)
	{
		cout << '*';
	}
	cout << endl;

	// IV
	for (int row = 1; row <= (n - 3) / 2; row++) {
		// 1. n/2 spaces
		for (int i = 0; i < n / 2; ++i)
		{
			cout << " ";
		}
		// 2. single '*'
		cout << '*';
		// 3. (n-3)/2 spaces
		for (int i = 1; i <= (n - 3) / 2 ; ++i)
		{
			cout << ' ';
		}

		// 4. single '*'
		cout << '*';
		cout << endl;
	}

	// V
	// 1. (n + 1) / 2 '*'
	for (int i = 1; i <= (n + 1) / 2 ; ++i)
	{
		cout << '*';
	}
	// 2. (n-3)/2 spaces
	for (int i = 1; i <= (n - 3) / 2 ; ++i)
	{
		cout << ' ';
	}
	cout << '*';
	cout << endl;

	return 0;
}
















