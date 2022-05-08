// MinCost.cpp
#include <iostream>
using namespace std;

int main() {

	int cost[][4] = {
		{1, 1, 2, 4},
		{6, 1, 3, 5},
		{2, 1, 1, 8},
		{3, 10, 1, 1}
	};

	int dp[100][100] = {0};
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (i == 0 and j == 0) {
				dp[i][j] = cost[i][j];
			}
			else if (i == 0) {
				dp[i][j] = cost[i][j] + dp[i][j - 1];
			}
			else if (j == 0) {
				dp[i][j] = cost[i][j] + dp[i - 1][j];
			}
			else {
				int op1 = dp[i - 1][j];
				int op2 = dp[i][j - 1];
				dp[i][j] = cost[i][j] + min(op1, op2);
			}

		}
	}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}





