// Coins - i.cpp
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
#define ll long long

double solve(ll head, ll n, vector<double> &p, vector<vector<double> > &dp) {
	// base case
	if (head == 0) return dp[head][n] = 1;
	if (n == 0) return dp[head][n] = 0;
	if (dp[head][n] > -0.9) return dp[head][n];

	// recursive case
	return dp[head][n] = p[n - 1] * solve(head - 1, n - 1, p, dp) + (1 - p[n - 1]) * solve(head, n - 1, p, dp);
}

int main() {

	ll n;
	cin >> n;

	vector<double> p(n);
	vector<vector<double> > dp(n + 1, vector<double>(n + 1, -1));
	for (int i = 0; i < n; ++i)
	{
		cin >> p[i];
	}

	cout << setprecision(10) << solve((n + 1) / 2, n, p, dp) << endl;

	return 0;
}
















