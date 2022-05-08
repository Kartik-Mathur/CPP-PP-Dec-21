#include <iostream>
using namespace std;

int fibo(int n) {
	if (n == 0 || n == 1) {
		return n;
	}

	return fibo(n - 1) + fibo(n - 2);
}

// Return karne se pehle yaad karna h
// Calculate karne se pehle check karna h
int topDown(int n, int *dp) {
	if (n == 0 || n == 1) {
		dp[n] = n;
		return n;
	}
	if (dp[n] != -1) {
		return dp[n];
	}

	dp[n] = topDown(n - 1, dp) + topDown(n - 2, dp);
	return dp[n];
}

int bottomUp(int n) {
	// Initialization
	int *dp = new int[n + 1];
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	// for (int i = 0; i <= n; ++i)
	// {
	// 	cout << dp[i] << " ";
	// }
	// cout << endl;
	return dp[n];
}

int main() {

	int n;
	cin >> n;
	int *dp = new int[n + 1];
	for (int i = 0; i <= n; ++i)
	{
		dp[i] = -1;
	}
	cout << topDown(n, dp) << endl;
	// for (int i = 0; i <= n; ++i)
	// {
	// 	cout << dp[i] << " ";
	// }
	// cout << endl;
	cout << bottomUp(n) << endl;
	cout << fibo(n) << endl;

	return 0;
}
















