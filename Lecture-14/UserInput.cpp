// UserInput.cpp
#include <iostream>
using namespace std;

int main() {

	int a[100][100];
	int row, col;

	cout << "Enter row and col: ";
	cin >> row >> col;

	int number = 1;

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			a[r][c] = number;
			number++;
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

	return 0;
}
















