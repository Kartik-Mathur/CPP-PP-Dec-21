// MaximumSumSubArray.cpp
#include <iostream>
#include <climits>
using namespace std;

int main() {
	int a[] = {1, 2, 4, -3, 6, -10};
	int n = sizeof(a) / sizeof(int);

	int max_sum = INT_MIN;

	for (int i = 0 ; i < n ; i++) {
		for (int j = i; j < n; ++j)
		{
			int sum = 0;
			for (int k = i ; k <= j ; k++) {
				cout << a[k] << " ";
				sum += a[k];
			}

			cout << " Sum is: " << sum << endl;
			if (max_sum < sum) {
				max_sum = sum;
			}
		}
	}

	cout << "Maximum Sum Subarray is : " << max_sum << endl;

	return 0;
}
















