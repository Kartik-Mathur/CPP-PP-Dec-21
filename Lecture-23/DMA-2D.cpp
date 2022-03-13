// DMA - 2D.cpp
#include <iostream>
using namespace std;
int ** create2D(int r, int c) {
	int **a = new int*[r];

	for (int i = 0; i < r; ++i)
	{
		a[i] = new int[c];
	}
	int number = 1;
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			a[i][j] = number++;
		}
	}
	return a;
}

int main() {

	int **a = NULL;
	// int r = 10, c = 10;
	int r, c;
	cin >> r >> c;
	a = create2D(r, c);
	// a = new int*[r];
	// // for (int i = 0; i < r; ++i)
	// // {
	// // 	a[i] = NULL;
	// // }
	// for (int i = 0; i < r; ++i)
	// {
	// 	a[i] = new int[c];
	// }
	// int number = 1;
	// for (int i = 0; i < r; ++i)
	// {
	// 	for (int j = 0; j < c; ++j)
	// 	{
	// 		a[i][j] = number++;
	// 	}
	// }
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}


	// Deletion
	for (int i = 0; i < r; ++i)
	{
		delete []a[i];
	}
	delete[]a;
	a = NULL;

	return 0;
}
















