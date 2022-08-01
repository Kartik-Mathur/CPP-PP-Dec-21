class Solution {
public:
	bool solve(string &s, string &p) {
		vector<vector<bool> > dp(s.length() + 1, vector<bool>(p.length() + 1, false));
		int n = s.length();
		int m = p.length();

		dp[0][0] = true;
		dp[0][1] = false;

		for (int i = 1; i < m; ++i)
		{
			if (p[i] == '*')
				dp[0][i + 1] = dp[0][i - 1];
		}

		for (int i = 1; i <= n; ++i)
		{
			dp[i][0] = false;
		}

		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= m; ++j)
			{
				if (s[i - 1] == p[j - 1] || p[j - 1] == '.') dp[i][j] = dp[i - 1][j - 1];
				else if (p[j - 1] == '*') {
					dp[i][j] = dp[i][j - 2];

					if ((s[i - 1] == p[j - 2] || p[j - 2] == '.') and !dp[i][j]) {
						dp[i][j] = dp[i - 1][j];
					}
				}
			}
		}
		return dp[n][m];
	}
	bool isMatch(string s, string p) {
		return solve(s, p);

	}
};