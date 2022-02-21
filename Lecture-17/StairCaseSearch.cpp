// StairCaseSearch.cpp
#include <iostream>
using namespace std;

int main() {

	int a[100][100];
	int number = 1;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = number++;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	int key;
	cin >> key;

	int i = 0, j = m - 1;
	while ( i < n and j >= 0) {
		if (a[i][j] == key) {
			cout << "Element found:" << i << "," << j << endl;
			break;
		}
		else if (a[i][j] < key) {
			i++;
		}
		else {
			j--;
		}
	}

	if (i == n || j < 0) {
		cout << "Element not found" << endl;
	}

	return 0;
}
















