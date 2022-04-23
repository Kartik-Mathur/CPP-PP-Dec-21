#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* insertInBST(node* root, int data) {
	// base case
	if (root == NULL) {
		root = new node(data);
		return root;
	}
	// recursive case
	if (root->data > data) {
		root-> left = insertInBST(root->left, data);
	}
	else {
		root->right = insertInBST(root->right, data);
	}
	return root;
}

node* buildBST() {
	node* root = NULL;
	int data;
	cin >> data;
	while (data != -1) {
		// Data ko BST mei insert krdo
		root = insertInBST(root, data);
		cin >> data;
	}
	return root;
}

void printRange(node* root, int k1, int k2) {
	// base case
	if (!root) {
		return;
	}

	// recursive case
	if (root->data >= k1 and root->data <= k2) {
		cout << root->data << " ";
	}
	printRange(root->left, k1, k2);
	printRange(root->right, k1, k2);
}

void preorder(node* root) {
	// base case
	if (root == NULL) {
		return;
	}
	// recursive case(Root Left Right)
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root) {
	if (!root) {
		return;
	}

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(node* root) {
	if (!root) {
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

void levelOrder(node* root) {

	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while (!q.empty()) {
		node* x = q.front();
		q.pop();

		if (x != NULL) {
			cout << x->data << " ";
			if (x->left) q.push(x->left);
			if (x->right) q.push(x->right);
		}
		else {
			cout << endl;
			if (!q.empty()) {
				q.push(NULL);
			}
		}
	}
}

int height(node* root) {
	// base case
	if (!root) {
		return 0;
	}

	// recursive case
	int left_height = height(root->left);
	int right_height = height(root->right);
	return max(left_height, right_height) + 1;
}
// 8 3 10 1 6 14 4 7 13 9 -1
bool isBalanced(node* root) {
	// base case
	if (!root) {
		return true;
	}

	// recursive case
	int left_height = height(root->left);
	int right_height = height(root->right);

	if (abs(left_height - right_height) <= 1
	        and isBalanced(root->left)
	        and isBalanced(root->right))
	{
		return true;
	}
	else {
		return false;
	}
}

class Pair {
public:
	bool balanced;
	int height;
};
Pair BalancedOrNot(node* root) {
	// base case
	if (!root) {
		Pair p;
		p.height = 0;
		p.balanced = true;
		return p;
	}
	// recursive case
	Pair left = BalancedOrNot(root->left);
	Pair right = BalancedOrNot(root->right);

	// Root node ka pair nikal lo
	Pair p;
	p.height = max(left.height, right.height) + 1;
	if (abs(left.height - right.height) <= 1
	        and left.balanced
	        and right.balanced) {
		p.balanced = true;
	}
	else {
		p.balanced = false;
	}
	return p;
}

bool isBST(node* root, int mi = INT_MIN, int mx = INT_MAX) {
	// base case
	if (!root) {
		return true;
	}
	// recursive case
	if (root->data >= mi and root->data <= mx
	        and isBST(root->left, mi, root->data)
	        and isBST(root->right, root->data, mx)) {
		return true;
	}
	return false;
}

node* createBST(int *a, int s, int e) {
	// base case
	if (s > e) {
		return NULL;
	}
	// recursive case
	int mid = (s + e) / 2;
	node* root = new node(a[mid]);
	root->left = createBST(a, s, mid - 1);
	root->right = createBST(a, mid + 1, e);
	return root;
}

class LL {

};


int main() {

	// node* root = NULL;
	// root = buildBST();
	int a[] = {1, 2, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(a) / sizeof(int);
	node* root = createBST(a, 0, n - 1);
	preorder(root);
	cout << '\n';
	inorder(root);
	cout << '\n';
	postorder(root);
	cout << '\n';

	levelOrder(root);
	if (isBST(root)) {
		cout << "BST hai" << endl;
	}
	// printRange(root, 5, 10);
	// if (isBalanced(root)) {
	// 	cout << "Balanced" << endl;
	// }
	// else {
	// 	cout << "Not Balanced" << endl;
	// }

	// Pair ans = BalancedOrNot(root);
	// cout << "height: " << ans.height << endl;
	// cout << "Balanced: " << ans.balanced << endl;

	return 0;
}
















