// LinearSearch.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 3, 5, 2, 4};
	int n = sizeof(a) / sizeof(int);

	int indx = -1;
	int key = 1;

	for (int i = 0; i < n ; ++i)
	{
		if (a[i] == key) {
			indx = i;
			break;
		}
	}

	if (indx == -1) {
		cout << "Key Not Found" << endl;
	}
	else {
		cout << "Key found at index: " << indx << endl;
	}

	return 0;
}
















