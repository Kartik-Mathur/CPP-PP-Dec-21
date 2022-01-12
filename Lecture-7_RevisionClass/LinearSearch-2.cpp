// LinearSearch - 2.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 3, 5, 2, 4};
	int n = sizeof(a) / sizeof(int);

	int indx = -1;
	int key = 40, i;

	for (i = 0; i < n ; ++i)
	{
		if (a[i] == key) {
			break;
		}
		else {
			cout << "Key Not found" << endl;
		}
	}

	if (i == n) {
		cout << "Not found" << endl;
	}
	else {
		cout << "Key found at index: " << i << endl;
	}


	return 0;
}
















