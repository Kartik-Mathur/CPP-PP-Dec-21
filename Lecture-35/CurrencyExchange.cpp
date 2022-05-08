// CurrencyExchange.cpp
#include <iostream>
using namespace std;

int coins(int amt, int *deno, int n) {
	// base case
	if (amt == 0) {
		return 0;
	}
	// recursive case
	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if (amt >= deno[i]) {
			int choti_amt = amt - deno[i];
			int smaller_ans = coins(choti_amt, deno, n);
			if (smaller_ans != INT_MAX) {
				ans = min(smaller_ans + 1, ans);
			}
		}
	}
	return ans;
}

int topDown(int amt, int* deno, int n, int *dp) {
	// base case
	if (amt == 0) {
		return dp[amt] = 0;
	}
	if (dp[amt] != -1) {
		return dp[amt];
	}
	// recursive case
	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if (amt >= deno[i]) {
			int choti_amt = amt - deno[i];
			int smaller_ans = topDown(choti_amt, deno, n, dp);
			if (smaller_ans != INT_MAX) {
				ans = min(smaller_ans + 1, ans);
			}
		}
	}
	return dp[amt] = ans;
}

int bottomUp(int amt, int *deno, int n) {
	int *dp = new int[amt + 1];
	dp[0] = 0;
	for (int rupay = 1; rupay <= amt; ++rupay)
	{
		int ans = INT_MAX;
		for (int i = 0; i < n; ++i)
		{
			if (rupay >= deno[i]) {
				int kam_rupay = rupay - deno[i];
				int smaller_ans = dp[kam_rupay];
				if (smaller_ans != INT_MAX) {
					ans = min(ans, smaller_ans + 1);
				}
			}
		}
		dp[rupay] = ans;
	}
	for (int i = 0; i <= amt; ++i)
	{
		cout << dp[i] << " ";
	}
	cout << endl;

	return dp[amt];
}

int main() {

	int deno[] = {1, 2, 5};
	int n = sizeof(deno) / sizeof(int);
	int amt ;
	cin >> amt;
	int dp[100000];
	memset(dp, -1, sizeof dp);
	cout << bottomUp(amt, deno, n) << endl;
	cout << topDown(amt, deno, n, dp) << endl;
	cout << coins(amt, deno, n) << endl;

	return 0;
}
















