// Vector.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v;
	for (int i = 0; i < 5; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
		// cout << "data: " << i << " ";
		// v.push_back(i);
		// cout << "size: " << v.size() << " ";
		// cout << "cap: " << v.capacity() << endl;
	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	// for (int i = 0; i < 10; ++i)
	// {
	// 	cout << "data: " << i << " ";
	// 	v.push_back(i);
	// 	cout << "size: " << v.size() << " ";
	// 	cout << "cap: " << v.capacity() << endl;
	// }

	return 0;
}
















