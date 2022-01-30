// Search2D.cpp
#include <iostream>
using namespace std;

int main() {

	int a[100][100];
	int row, col;
	row = 3;
	col = 3;
	int key = 60;

	int number = 1;

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			a[r][c] = number;
			number++;
		}
	}

	int flag = -1;
	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			if (a[r][c] == key) {
				cout << "Key Found at row: " << r << " and col: " << c << endl;
				flag = 1;
				break;
			}
		}

		if (flag == 1) {
			// Iska matlab key mill chuki hai aur loop chalane ki need nhi hai
			break;
		}
	}

	int r, c;

	for (r = 0; r < row; ++r)
	{
		for (c = 0; c < col; ++c)
		{
			if (a[r][c] == key) {
				cout << "Key Mill gai at row: " << r << " and col: " << c << endl;
				break;
			}
		}

	}




	return 0;
}
















