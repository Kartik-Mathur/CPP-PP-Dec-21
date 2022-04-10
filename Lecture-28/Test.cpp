// LinkedList.cpp
#include <iostream>
using namespace std;

//////////////////////// CLASS NODE ///////////////////////
class node {
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};
//////////////////////// CLASS NODE ///////////////////////

void InsertAtBegin(node* &head, node* &tail, int data) {
	if (!head) { // Iska mtlb hai pehli node aa rhi hai toh head & tail both will update
		node* n = new node(data);
		head = tail = n;
	}
	else {
		node* n = new node(data);
		n -> next = head;
		head = n;
	}
}

void InsertAtEnd(node* &head, node* &tail, int data) {
	if (!head) {
		node* n = new node(data);
		head = tail = n;
	}
	else {
		node* n = new node(data);
		tail->next = n;
		tail = n;
	}
}

void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;

}

int lengthLL(node* head) {
	int cnt = 0;
	while (head != NULL) {
		cnt ++;
		head = head->next;
	}
	return cnt;
}

void InsertAtMid(node* &head, node* &tail, int pos, int data) {
	if (pos == 0) {
		InsertAtBegin(head, tail, data);
	}
	else if (pos >= lengthLL(head)) {
		InsertAtEnd(head, tail, data);
	}
	else {
		node* temp = head;
		for (int i = 1; i <= pos - 1; ++i)
		{
			temp = temp -> next;
		}
		node* n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}

void reverseLL(node* &head, node* &tail) {
	node* c, *p, *n;

	c = head;
	p = NULL;
	while (c != NULL) {
		n = c -> next;
		c->next = p;
		p = c;
		c = n;
	}
	swap(head, tail);
}


node* midLL(node* head) {
	if (head == NULL || head->next == NULL) {
		return head;
	}

	node* slow = head;
	node* fast = head->next;
	while (fast != NULL && fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

void BubbleSort(node* &head) {
	int len = lengthLL(head);
	node* c, *p, *n;

	for (int i = 0; i < len - 1; ++i)
	{
		c = head;
		p = NULL;
		while (c and c->next) {
			if (c->data > c->next->data) {
				// swapping hogi
				if (p == NULL) {
					// head change hoga
					n = c->next;
					c->next = n->next;
					n->next = c;
					head = p = n;
				}
				else {
					// head change nhi hoga
					n = c->next;
					c->next = n->next;
					n->next = c;
					p->next = n;
					p = n;
				}
			}
			else {
				// swapping nhi hogi
				p = c;
				c = c->next;
			}
		}
	}
}

void breakCycle(node* fast, node* head) {
	node* slow = head;
	node* prev = head;
	while (prev->next != fast) {
		prev = prev->next;
	}

	while (fast != slow) {
		prev = fast;
		fast = fast	-> next;
		slow = slow -> next;
	}
	prev->next = NULL;
}

bool isCyclic(node*head) {
	node* slow, *fast;
	slow = fast = head;

	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow) {
			breakCycle(fast, head);
			return true;
		}
	}
	return false;
}

void createCycle(node* head) {
	node* temp = head;
	while (temp->next) {
		temp = temp->next;
	}
	temp->next = head->next->next;
}

int main() {

	node* head, *tail;
	head = tail = NULL;


	InsertAtEnd(head, tail, 1);
	InsertAtEnd(head, tail, 14);
	InsertAtEnd(head, tail, 50);
	InsertAtEnd(head, tail, 19);
	InsertAtEnd(head, tail, 2);

	printLL(head);
	BubbleSort(head);
	createCycle(head);
	// printLL(head);

	if (isCyclic(head)) {
		cout << "Cycle hai" << endl;
	}
	else {
		cout << "Cycle nhi hai" << endl;
	}
	printLL(head);

	return 0;
}
















