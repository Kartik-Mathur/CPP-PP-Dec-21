// DMA.cpp
#include <iostream>
using namespace std;

int main() {

	int *a = new int;
	*a = 10;

	cout << *a << endl;

	float *f = new float;
	*f = 10.11;
	// cin >> (*f);
	cout << *f << endl;

	delete a;
	delete f;
	a = NULL;
	f = NULL;
	// cout << *a << endl;

	return 0;
}
















