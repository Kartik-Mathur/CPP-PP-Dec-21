// PairSum.cpp
#include <iostream>
using namespace std;

void PairSum(int arr[], int n, int X) {

	for (int i = 0; i <= n - 2; ++i)
	{
		int a = arr[i];
		int b = X - a;
		for (int j = i + 1; j < n; ++j)
		{
			if (arr[j] == b) {
				cout << "(" << a << "," << b << ")" << endl;
			}
		}
	}
}

int main() {

	int arr[] = {1, 3, 2, 4};
	int n = sizeof(arr) / sizeof(int);
	int X = 5;

	PairSum(arr, n, X);
	return 0;
}
















