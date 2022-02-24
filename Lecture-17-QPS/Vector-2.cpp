// Vector - 2.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v;

	v.reserve(10); // It will set the capacity of the vector
	// v.resize() // It will set the initial size of the vector
	// cout << v.capacity() << endl;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		v[i] = i + 1;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}

	return 0;
}
















