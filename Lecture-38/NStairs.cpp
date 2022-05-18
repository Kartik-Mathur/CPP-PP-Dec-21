// NStairs.cpp
#include <iostream>
using namespace std;

int NStairs(int n, int k, int *dp) {
	// base case
	if (n == 0) {
		return dp[n] = 1;
	}
	if (n < 0) {
		return 0;
	}
	if (dp[n] != -1) {
		return dp[n];
	}
	// recursive case
	int ans = 0;
	for (int i = 1; i <= k; ++i)
	{
		ans += NStairs(n - i, k, dp);
	}
	return dp[n] = ans;
}

int bottomUp(int n, int k) {
	int dp[100];
	dp[0] = 1;
	for (int i = 1; i <= n; ++i)
	{
		int ans = 0, j = i - 1;
		for (int x = 0; x < k; ++x)
		{
			if (j >= 0) {
				ans += dp[j--];
			}
		}
		dp[i] = ans;
	}
	for (int i = 0; i <= n; ++i)
	{
		cout << dp[i] << " ";
	}
	cout << endl;
	return dp[n];
}

// dp[n] = 2*dp[n-1] - dp[n-k-1];
// k = 3
// dp[n] = 2 * dp[n-1] - dp[n-4];

int NStairsOpt(int n, int k) {
	int dp[100];
	dp[0] = dp[1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		dp[i] = 2 * dp[i - 1] - ( ((i - k - 1) >= 0) ? dp[i - 1 - k] : 0);
	}

	for (int i = 0; i <= n; ++i)
	{
		cout << dp[i] << " ";
	} cout << '\n';
	return dp[n];
}

int main() {

	int n = 5;
	// cin >> n;
	int dp[10000];
	memset(dp, -1, sizeof dp);
	cout << NStairs(n, 3, dp) << endl;
	cout << bottomUp(n, 3) << endl;
	cout << NStairsOpt(n, 3) << endl;

	return 0;
}
















