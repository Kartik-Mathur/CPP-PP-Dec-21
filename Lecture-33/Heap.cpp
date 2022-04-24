#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class compare {
public:
	bool operator()(int a, int b) {
		return a < b;
	}
};

int main() {

	// priority_queue<int> h; // Maxheap
	// priority_queue<int, vector<int>, greater<int> > h;
	priority_queue<int, vector<int>, compare> h;
	h.push(1);
	h.push(2);
	h.push(17);
	h.push(7);
	h.push(0);
	h.push(5);

	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	} cout << '\n';

	return 0;
}
















