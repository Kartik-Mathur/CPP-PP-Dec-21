// List.cpp
#include <iostream>
#include <list>
using namespace std;

int main() {

	// list<pair<int, int> > l;

	// l.push_back({10, 20});
	// l.push_back({12, 40});
	// l.push_back({11, 20});
	// l.push_back({5, 2});
	// for (list<pair<int, int> >::iterator it = l.begin(); it != l.end(); it++) {
	// for (auto it = l.begin(); it != l.end(); it++) {
	// 	cout << it->first << ", " << it->second << endl;
	// }
	// for (auto p : l) {
	// 	cout << p.first << "," << p.second << "-->";
	// }
	// cout << "NULL\n";

	list<int> l;
	l.push_back(10);
	l.push_back(12);
	l.push_back(33);
	l.push_back(14);
	l.sort();

	for (auto it = l.begin(); it != l.end() ; ++it)
	{
		cout << *it << "-->";
	} cout << "NULL\n";

	for (auto p : l) {
		cout << p << "-->";
	}
	cout << "NULL\n";

	return 0;
}
















