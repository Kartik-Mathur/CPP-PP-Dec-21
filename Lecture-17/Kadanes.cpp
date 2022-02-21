// Kadanes.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {2, 4, 6, -15, 12, 4, -11, 4, 6, -10, 12};
	int n = sizeof(a) / sizeof(int);

	int ans = INT_MIN;
	int sum = 0, start = 0, end;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
		ans = max(ans, sum);
		if (sum < 0) {
			sum = 0;
		}
	}

	cout << "Maximum sum is " << sum << endl;

	return 0;
}
















