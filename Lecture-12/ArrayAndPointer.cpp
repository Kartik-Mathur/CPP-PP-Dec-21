// LengthOfString.cpp
#include <iostream>
using namespace std;

void printArray(int *a, int n) {
	for (int i = 0; i < n; ++i)
	{
		// cout << *(a + i) << ' ';
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {

	int a[] = {1, 2, 3, 4};
	int n = sizeof(a) / sizeof(int);

	// a[i] == *(a+i);

	printArray(a, n);


	return 0;
}
















