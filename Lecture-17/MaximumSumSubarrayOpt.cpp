// MaximumSumSubarrayOpt.cpp
#include <iostream>
#include <climits>
using namespace std;

int main() {

	int a[] = {2, 4, -5, 6, 3, -10};
	int n = sizeof(a) / sizeof(int);

	int csum[1000] = {0};
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
		csum[i + 1] = sum;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n + 1; ++i)
	{
		cout << csum[i] << " ";
	}
	cout << endl;

	// Optimised Algorithm
	int start, end;
	int mx_sum = INT_MIN;

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			// cout << "Sum of index: " << i << ", " << j << " : ";
			int sum = csum[j + 1] - csum[i];
			if (sum > mx_sum) {
				mx_sum = sum;
				start = i;
				end = j;
			}
			// cout << ": " << sum << endl;
		}
	}

	cout << "Maximum sum: " << mx_sum << endl;
	for (int i = start; i <= end ; ++i)
	{
		cout << a[i] << " ";
	} cout << endl;

	return 0;
}
















