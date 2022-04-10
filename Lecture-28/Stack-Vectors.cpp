// Stack - Vectors.cpp
#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class Stack {
public:
	vector<T> v;
	void push(T data) {
		v.push_back(data);
	}

	void pop() {
		v.pop_back();
	}

	T top() {
		return v[v.size() - 1];
	}

	bool empty() {
		return v.size() == 0;
	}
};

int main() {
	Stack<char> s;
	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');


	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << '\n';

	return 0;
}
















