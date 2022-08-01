class Solution {
public:
	bool isPallindrome(string &s, int start, int end) {
		while (start < end)
			if (s[start++] != s[end--])
				return false;
		return true;
	}
	int solve(string &s, int start, int end, vector<vector<int> > &dp) {
		// base case
		if (start >= end) {
			return dp[start][end] = 0;
		}
		if (isPallindrome(s, start, end)) {
			return dp[start][end] = 0;
		}
		if (dp[start][end] != -1) return dp[start][end];
		// recursive case
		int ans = INT_MAX;
		for (int i = start; i < end; ++i)
		{
			if (isPallindrome(s, start, i)) {
				int choteKeCount = solve(s, i + 1, end, dp);
				int totalCount = 1 + choteKeCount;
				ans = min(ans, totalCount);
			}
		}
		return dp[start][end] = ans;
	}

	int minCut(string &s) {
		int n = s.length();

		vector<vector<int> > dp(n, vector<int>(n, -1));

		return solve(s, 0, n - 1, dp);
	}
};