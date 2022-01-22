// AddressOf.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3};
	int x = 10;
	float f = 1.11;

	cout << "address of a: " << a << endl; // 0th Index ka address
	cout << "address of a[0]: " << &a[0] << endl; //0th Index ka address
	cout << "address of x: " << &x << endl; // address of bucket x
	cout << "address of f: " << (&f) << endl; // address of bucket f

	return 0;
}
















