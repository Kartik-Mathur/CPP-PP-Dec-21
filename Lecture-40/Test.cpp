#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main() {
	// map<string, int> h;
	unodered_map<string, int> h;

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


	// print: for each loop
	for (pair<string, int> p : h) {
		cout << p.first << "," << p.second << endl;
	}

	for (auto p : h) {
		cout << p.first << "," << p.second << endl;
	}
	h.insert({"Kiwi", 200});
	h.insert({"Mango", 200});
	// Print the map along with hashtable
	// for (int i = 0; i < h.bucket_count(); ++i)
	// {
	// 	cout << i << "-->";
	// 	for (auto it = h.begin(i); it != h.end(i) ; it++) {
	// 		cout << "(" << it->first << "," << it->second << ") ";
	// 	}
	// 	cout << endl;
	// }






	return 0;
}
















