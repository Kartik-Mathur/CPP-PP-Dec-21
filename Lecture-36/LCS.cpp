// LCS.cpp
#include <iostream>
using namespace std;

// int lcs(char a[], char b[], int i, int j) {
// 	if (a[i] == '\0' || b[j] == '\0') {
// 		return 0;
// 	}

// 	if (a[i] == b[j]) {
// 		return 1 + lcs(a, b, i + 1, j + 1);
// 	}
// 	else {
// 		return max(lcs(a, b, i, j + 1), lcs(a, b, i + 1, j));
// 	}
// }

int lcs(char a[], char b[], int i, int j, int dp[][100]) {
	if (a[i] == '\0' || b[j] == '\0') {
		return dp[i][j] = 0;
	}
	if (dp[i][j] != -1) {
		return dp[i][j];
	}
	if (a[i] == b[j]) {
		return dp[i][j] = 1 + lcs(a, b, i + 1, j + 1, dp);
	}
	else {
		return dp[i][j] = max(lcs(a, b, i, j + 1, dp), lcs(a, b, i + 1, j, dp));
	}
}

int bottomUp(char a[], char b[]) {
	int dp[100][100] = {0};

	for (int i = 1; i <= strlen(a); ++i)
	{
		for (int j = 1; j <= strlen(b); ++j)
		{
			if (a[i - 1] == b[j - 1]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}

	for (int i = 0; i <= strlen(a); ++i)
	{
		for (int j = 0; j <= strlen(b); ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	int k = dp[strlen(a)][strlen(b)];
	char ans[100];
	ans[k] = '\0';
	k--;

	int i = strlen(a);
	int j = strlen(b);

	while (k >= 0) {
		if (a[i - 1] == b[j - 1]) {
			ans[k] = a[i - 1];
			k--;
			i--; j--;
		}
		else {
			if (dp[i - 1][j] > dp[i][j - 1]) {
				i--;
			}
			else {
				j--;
			}
		}
	}
	cout << ans << endl;

	return dp[strlen(a)][strlen(b)];
}

int main() {

	char a[] = "cabcdef", b[] = "abcdef";
	int dp[100][100];
	memset(dp, -1, sizeof dp);
	cout << lcs(a, b, 0, 0, dp) << endl;
	cout << bottomUp(a, b) << endl;

	// int k = bottomUp(a, b);


	return 0;
}
















