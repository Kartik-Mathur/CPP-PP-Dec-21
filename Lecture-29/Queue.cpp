// Queue.cpp
#include <iostream>
using namespace std;

class Queue {
public:
	int *a;
	int n;
	int cs;
	int f;
	int e;
	Queue(int s = 5) {
		n = s;
		a = new int[s];
		cs = 0;
		f = 0;
		e = n - 1;
	}

	void push(int d) {
		if (cs == n) {
			cout << "Overflow" << endl;
			return;
		}
		e = (e + 1) % n;
		a[e] = d;
		cs ++;
	}

	void pop() {
		if (cs > 0) {
			cs--;
			f = (f + 1) % n;
		}
		else {
			cout << "Underflow" << endl;
		}
	}

	bool empty() {
		return cs == 0;
	}

	int front() {
		return a[f];
	}

};

int main() {

	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}

	return 0;
}
















