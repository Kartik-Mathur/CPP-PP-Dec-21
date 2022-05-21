#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	unordered_map<string, int> h;
	// Insertion Ways
	// 1st Way
	h["Mango"] = 100;

	// 2nd Way
	pair<string, int> p;
	p.first = "Pineapple";
	p.second = 150;
	h.insert(p); // push function takes input of a pair
	// 3rd way
	h.insert(make_pair("Guava", 50));
	// 4th way
	h.insert({"Apple", 120});

	// 2. Searching
	if (h.count("Pineapple") == 0) { // 0 means key is not present
		cout << "Not Present" << endl;
	}
	else { // 1 means key is present
		cout << "Present" << endl;
	}








	return 0;
}
















