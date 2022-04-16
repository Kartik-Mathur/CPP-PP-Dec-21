#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}

};

class Queue
{
public:
	node* head;
	node* tail;
	Queue() {
		head = tail = NULL;
	}

	void push(int d) {
		node* n = new node(d);
		if (!head) {
			head = tail = n;
		}
		else {
			tail->next = n;
			tail = n;
		}

	}

	void pop() {
		if (!head) {
			cout << "Underflow" << endl;
		}
		else if (!head->next) {
			delete head;
			head = tail = NULL;
		}
		else {
			node* temp = head;
			head = head->next;
			delete temp;
		}
	}

	int front() {
		return head->data;
	}

	bool empty() {
		return head == NULL;
	}

};

int main() {

	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	} cout << '\n';


	return 0;
}
















