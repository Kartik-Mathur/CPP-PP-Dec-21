// BinarySearch.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 3, 5, 6, 9};
	int n = sizeof(a) / sizeof(int);

	int s = 0;
	int e = n - 1;
	int key = 100;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] == key) {
			cout << key << " found at : " << mid << endl;
			break;
		}
		else if (key > a[mid]) {
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}

	if (s > e) {
		cout << key << " not found " << endl;
	}




	return 0;
}
















