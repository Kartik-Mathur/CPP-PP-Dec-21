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

void InsertAtMid(node* &head, node* &tail, int pos, int data) {
	if (pos == 0) {
		InsertAtBegin(head, tail, data);
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


int main() {

	node* head, *tail;
	head = tail = NULL;


	InsertAtEnd(head, tail, 1);
	InsertAtEnd(head, tail, 2);
	InsertAtEnd(head, tail, 3);
	InsertAtEnd(head, tail, 4);
	InsertAtEnd(head, tail, 5);

	printLL(head);
	InsertAtMid(head, tail, 3, 100);
	printLL(head);












	// node n;
	// n.data = 1;
	// n.next = NULL;

	// node n1;
	// n1.data = 2;
	// n1.next = NULL;

	// n.next = &(n1);

	// cout << n.data << "-->";
	// cout << (*n.next).data << endl;

	// cout << n.data << "-->";
	// cout << (n.next)->data << endl;

	return 0;
}
















