#include <iostream>
#include <vector>
#include <algorithm> //sort function ke liye
using namespace std;

int main() {

	vector<int> v;

	for (int i = 1; i <= 5; ++i)
	{
		v.push_back(i);
		// cout << "Size after inserting: " << i << ", "  << v.size() << endl;
		// cout << "Capacity after inserting: " << i << ", "  << v.capacity() << endl;

	}
	// v.push_back(1);
	// v.push_back(2);
	// v.push_back(3);
	// v.push_back(4);
	// v.push_back(5);
	// v.pop_back();
	// v.push_back(6);
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << ' ';
	}
	cout << '\n';

	sort(v.rbegin(), v.rend());

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << ' ';
	}
	cout << '\n';
	cout << "Size: " << v.size() << endl;
	cout << "capacity: " << v.capacity() << endl;

	return 0;
}
















