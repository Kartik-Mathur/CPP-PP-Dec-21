// DMA - Array.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int *arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	delete []arr;
	arr = NULL;

	return 0;
}
















