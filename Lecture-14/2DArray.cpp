// 2DArray.cpp
#include <iostream>
using namespace std;

int main() {

	int a[][500] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
		{10, 11, 12}
	};

	int row = 4, col = 3;

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
















