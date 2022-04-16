#include <iostream>
#include "node.h"
using namespace std;
#ifndef MYQUEUE
#define MYQUEUE
template<typename T>
class Queue
{
public:
	node<T>* head;
	node<T>* tail;
	Queue() {
		head = tail = NULL;
	}

	void push(T d) {
		node<T>* n = new node<T>(d);
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
			node<T>* temp = head;
			head = head->next;
			delete temp;
		}
	}

	T front() {
		return head->data;
	}

	bool empty() {
		return head == NULL;
	}

};
#endif