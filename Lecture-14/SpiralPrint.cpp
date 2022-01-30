// SpiralPrint.cpp
#include <iostream>
using namespace std;

void SpiralPrint(int a[][10], int row, int col) {

	int sr, er, sc, ec;
	sr = sc = 0;
	er = row - 1;
	ec = col - 1;

	while (sr <= er and sc <= ec) {
		// 1. Print sr from sc to ec
		for (int col = sc; col <= ec; ++col)
		{
			cout << a[sr][col] << ' ';
		}
		sr++;

		// 2. Print ec from sr to er
		for (int row = sr; row <= er; ++row)
		{
			cout << a[row][ec] << ' ';
		}
		ec--;

		// 3. Print er from ec to sc
		if (sr < er) {
			for (int col = ec; col >= sc; --col)
			{
				cout << a[er][col] << ' ';
			}

			er--;
		}

		// 4. Print sc from er to sr
		if (sc < ec) {
			for (int row = er; row >= sr; --row)
			{
				cout << a[row][sc] << ' ';
			}
			sc++;
		}
	}
	cout << endl;
}

int main() {

	int a[10][10];
	int row, col ;
	cin >> row >> col;

	int number = 1;
	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			a[r][c] = number++;
		}
	}

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			cout << a[r][c] << " ";
		}
		cout << endl;
	}

	SpiralPrint(a, row, col);

	return 0;
}
















