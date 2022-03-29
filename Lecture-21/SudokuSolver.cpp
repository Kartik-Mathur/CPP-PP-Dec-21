#include <iostream>
#include <cmath>
using namespace std;

bool isSafeToPut(int mat[][9], int i, int j, int no, int n) {
	// Check karo row and column mei
	for (int r = 0; r < n; ++r)
	{
		if (mat[r][j] == no) {
			return false;
		}
	}

	for (int c = 0; c < n; ++c)
	{
		if (mat[i][c] == no) {
			return false;
		}
	}

	// Check karo box ke andar
	n = sqrt(n); // n ko update kar diya, now n is sqrt(n)
	int si = (i / n) * n;
	int sj = (j / n) * n;

	for (int r = si; r < si + n; ++r)
	{
		for (int c = sj; c < sj + n; ++c)
		{
			if (mat[r][c] == no) {
				return false;
			}
		}
	}
	return true;
}


bool SudokuSolver(int mat[][9], int i, int j, int n) {
	// base case
	if (i == n) {
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		return true;

	}
	// recursive case
	if (j == n) {
		return SudokuSolver(mat, i + 1, 0, n);
	}
	if (mat[i][j] != 0) {
		return SudokuSolver(mat, i, j + 1, n);
	}
	// For empty cell
	for (int no = 1; no <= n; ++no)
	{
		if (isSafeToPut(mat, i, j, no, n)) {
			mat[i][j] = no;
			bool kyaBaakiHuaSolve = SudokuSolver(mat, i, j + 1, n);
			if (kyaBaakiHuaSolve == true) {
				return true;
			}

			mat[i][j] = 0;// Backtracking
		}
	}

	return false;
}

int main() {

	int mat[9][9] =
	{	{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
	};

	SudokuSolver(mat, 0, 0, 9);

	return 0;
}
















