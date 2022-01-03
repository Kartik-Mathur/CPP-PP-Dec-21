// LargestofN.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 20, 5, 7, 8, 10};
	int n = sizeof(a) / sizeof(int);

	int mx = INT_MIN;

	for (int i = 0; i < n ; ++i)
	{
		if (a[i] > mx) {
			mx = a[i];
		}
	}

	cout << "Largest is: " << mx << endl;


	return 0;
}
















