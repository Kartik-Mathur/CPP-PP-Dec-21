// RatInMaze.cpp
#include <iostream>
using namespace std;

bool RatInMaze(char maze[][5], int n, int m, int i, int j, int sol[][10]) {
	// base case
	if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1;
		// Print the solution matrix
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}

	// recursive case
	// 1st step
	sol[i][j] = 1;

	// 2nd step
	// Right se raasta check karo
	if (j + 1 < m and maze[i][j + 1] != 'X') {
		bool KyaRightSeBaatBani = RatInMaze(maze, n, m, i, j + 1, sol);
		if (KyaRightSeBaatBani == true) {
			return true;
		}
	}

	// 3rd step, Check neeche se raasta hai ya nhi
	if (i + 1 < n and maze[i + 1][j] != 'X') {
		bool kyaNeecheSeBaatBani = RatInMaze(maze, n, m, i + 1, j, sol);
		if (kyaNeecheSeBaatBani == true) {
			return true;
		}
	}
	sol[i][j] = 0;
	return false;
}


int main() {
	int sol[10][10] = {0};
	char maze[][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00"
	};

	RatInMaze(maze, 4, 4, 0, 0, sol);

	return 0;
}
















