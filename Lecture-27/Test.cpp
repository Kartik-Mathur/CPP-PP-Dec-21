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

void deleteAtBegin(node* &head, node* &tail) {
	if (head == NULL) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* t = head;
		head = head->next;
		delete t;
	}
}

void deleteAtEnd(node* &head, node* &tail) {
	if (head == NULL) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		while (temp->next != tail) {
			temp = temp->next;
		}

		delete tail;
		temp->next = NULL;
		tail = temp;
	}
}

void deleteAtMid(node* &head, node* &tail, int pos) {
	if (head == NULL) {
		return;
	}
	else if (lengthLL(head) < pos) {
		return;
	}
	else if (pos == lengthLL(head) - 1) {
		deleteAtEnd(head, tail);
	}
	else if (pos == 0) {
		deleteAtBegin(head, tail);
	}
	else {
		node* temp = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			temp = temp->next;
		}
		node* p = temp->next;
		temp->next = p->next;
		delete p;
	}
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

node* searchLL(node* head, int key) {

	while (head != NULL) {
		if (head->data == key) {
			return head;
		}
		head = head->next;
	}
	return NULL;
}

node* searchRecLL(node* head, int key) {
	// base case
	if (head == NULL) {
		return NULL;
	}
	// recursive case
	if (head->data == key) {
		return head;
	}

	return searchRecLL(head->next, key);
}

node* mergeLL(node* a, node* b) {
	// base case
	if (a == NULL) {
		return b;
	}
	if (b == NULL) {
		return a;
	}
	// recursive case
	node* nH;
	if (a->data < b->data) {
		nH = a;
		nH->next = mergeLL(a->next, b);
		return nH;
	}
	else {
		nH = b;
		nH->next = mergeLL(a, b->next);
		return nH;
	}
}

node* mergeSort(node* head) {
	// base case
	if (head == NULL || head->next == NULL) {
		return head;
	}
	// recursive case
	// 1. Divide
	node* m = midLL(head);
	node* a = head;
	node* b = m->next;
	m->next = NULL;

	// 2. Sort
	a = mergeSort(a);
	b = mergeSort(b);

	// 3. Merge
	node* newHead = mergeLL(a, b);
	return newHead;
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
	// InsertAtMid(head, tail, 3, 100);
	// printLL(head);
	node* head1, *tail1;
	head1 = tail1 = NULL;
	InsertAtEnd(head1, tail1, 2);
	InsertAtEnd(head1, tail1, 3);
	InsertAtEnd(head1, tail1, 6);
	InsertAtEnd(head1, tail1, 7);
	InsertAtEnd(head1, tail1, 11);
	node* ans = mergeSort(head);
	printLL(head);
	// node* newHead = mergeLL(head, head1);
	// printLL(newHead);
	// deleteAtBegin(head, tail);
	// printLL(head);
	// deleteAtEnd(head, tail);
	// printLL(head);
	// deleteAtMid(head, tail, 2);
	// printLL(head);
	// node* mid = midLL(head);
	// if (!mid) {
	// 	cout << "Middle element not present" << endl;
	// }
	// else {
	// 	cout << "Middle element is: " << mid->data << endl;
	// }
	// int key;
	// cin >> key;
	// if (searchLL(head, key) != NULL) {
	// 	cout << "Key found " << endl;
	// }
	// else {
	// 	cout << "Key Not Found" << endl;
	// }
	// if (searchRecLL(head, key) != NULL) {
	// 	cout << "Key found " << endl;
	// }
	// else {
	// 	cout << "Key Not Found" << endl;
	// }
	// cout << "Length of LL: " << lengthLL(head) << endl;

	return 0;
}
















