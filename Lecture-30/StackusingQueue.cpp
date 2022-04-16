// StackusingQueue.cpp
#include <iostream>
#include <queue>
using namespace std;

class Stack
{
public:
	queue<int> q1;
	queue<int> q2;

	void push(int d) {
		if (q1.empty() and q2.empty()) {
			q1.push(d);
		}
		else if (!q1.empty() and q2.empty()) {
			q1.push(d);
		}
		else {
			q2.push(d);
		}
	}

	void pop() {
		if (!q1.empty() and q2.empty()) {
			while (q1.size() > 1) {
				int e = q1.front();
				q1.pop();
				q2.push(e);
			}
			q1.pop();
		}
		else {
			while (q2.size() > 1) {
				int e = q2.front();
				q2.pop();
				q1.push(e);
			}
			q2.pop();
		}
	}

	bool empty() {
		if (q1.empty() and q2.empty()) {
			return true;
		}
		return false;
	}

	int top() {
		if (!q1.empty() and q2.empty()) {
			while (q1.size() > 1) {
				int e = q1.front();
				q1.pop();
				q2.push(e);
			}

			int t = q1.front();
			q1.pop();
			q2.push(t);
			return t;
		}
		else {
			while (q2.size() > 1) {
				int e = q2.front();
				q2.pop();
				q1.push(e);
			}

			int t = q2.front();
			q2.pop();
			q1.push(t);
			return t;
		}

	}

};

int main() {

	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << '\n';

	return 0;
}
















