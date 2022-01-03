// LinearSearch.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 4, 5, 8};
	int n = sizeof(a) / sizeof(int);
	int key  = 1;
	int indx = -1;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] == key) {
			indx = i;
			break;
		}
	}

	if (indx != -1) {
		cout << key << " found at index: " << indx << endl;
	}
	else {
		cout << "Key not found" << endl;
	}

	return 0;
}
















