// QueueSTL.cpp
#include <iostream>
#include <queue>
using namespace std;

void reverse(queue<int> &q) {
	// base case
	if (q.empty()) {
		return;
	}
	// recursive case
	int data = q.front();
	q.pop();
	reverse(q);
	q.push(data);
}

void print(queue<int> q) {

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	} cout << '\n';
}

int main() {

	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	print(q);
	reverse(q);
	print(q);

	return 0;
}
















