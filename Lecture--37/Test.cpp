#include <iostream>
using namespace std;

// a : "abc", i = 3
// b : "xyz", j = 3
int editDistance(char *a, char *b, int i, int j, int dp[100][100]) {
	// base case
	if (i == 0) {
		return dp[i][j] = j;
	}
	if (j == 0) {
		return dp[i][j] = i;
	}
	if (dp[i][j] != -1) {
		return dp[i][j];
	}
	// recursive case
	if (a[i - 1] != b[j - 1]) {
		int op1 = editDistance(a, b, i, j - 1, dp);
		int op2 = editDistance(a, b, i - 1, j - 1, dp);
		int op3 = editDistance(a, b, i - 1, j, dp);
		return dp[i][j] = min(op1, min(op2, op3)) + 1;
	}
	else {
		return dp[i][j] = editDistance(a, b, i - 1, j - 1, dp);
	}
}

int bottomUp(char *a, char *b) {
	int dp[100][100];
	for (int i = 0; i <= strlen(a); ++i)
	{
		dp[i][0] = i;
	}

	for (int i = 0; i <= strlen(b); ++i)
	{
		dp[0][i] = i;
	}

	for (int i = 1; i <= strlen(a); ++i)
	{
		for (int j = 1; j <= strlen(b); ++j)
		{
			if (a[i - 1] != b[j - 1]) {
				dp[i][j] = min(dp[i][j - 1],
				               min(dp[i - 1][j - 1],
				                   dp[i - 1][j])) + 1;
			}
			else {
				dp[i][j] = dp[i - 1][j - 1];
			}
		}

	}

	return dp[strlen(a)][strlen(b)];
}


int main() {

	char a[] = "abcd";
	char b[] = "def";
	int dp[100][100];
	memset(dp, -1, sizeof dp);
	cout << editDistance(a, b, strlen(a), strlen(b), dp) << endl;
	cout << bottomUp(a, b) << endl;
	return 0;
}
















