#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	// v.pop_back();
	// v.push_back(6);

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << ' ';
	}
	cout << '\n';
	cout << "Size: " << v.size() << endl;
	cout << "capacity: " << v.capacity() << endl;

	return 0;
}
















