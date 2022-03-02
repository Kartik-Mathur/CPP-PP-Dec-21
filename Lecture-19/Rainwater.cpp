// RainWaterharvesting.cpp
#include <iostream>
using namespace std;

int main() {

	int height[] = {1, 2, 1, 4, 3, 1, 3, 5};
	int n = sizeof(height) / sizeof(int);

	int left[1000], right[1000];

	int mx = 0;
	for (int i = 0; i < n; ++i)
	{
		left[i] = mx;
		mx = max(mx, height[i]);
	}
	mx = 0;
	for (int i = n - 1; i >= 0; --i)
	{
		right[i] = mx;
		mx = max(mx, height[i]);
	}

	int ans = 0;
	for (int i = 0 ; i < n ; i++) {
		int x = min(left[i], right[i]) - height[i];
		if (x > 0) {
			ans += x;
		}
	}
	cout << "Total Water: " << ans << endl;
	return 0;
}













