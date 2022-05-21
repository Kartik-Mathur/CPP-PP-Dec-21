// Pair.cpp
#include <iostream>
using namespace std;

int main() {

	auto i = 10;
	cout << i << endl;

	pair<int, int> p;
	p.first = 10;
	p.second = 200;

	cout << p.first << ", " << p.second << endl;

	pair<string, int> p1;
	p1.first = "Mango";
	p1.second = 100;
	cout << p1.first << ", " << p1.second << endl;

	pair<int, int> p2({20, 30});
	cout << p2.first << ", " << p2.second << endl;

	pair<string, int> p3 = make_pair("Pineapple", 40);
	cout << p3.first << ", " << p3.second << endl;




	return 0;
}
















