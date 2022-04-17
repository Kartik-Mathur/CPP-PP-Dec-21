// BinaryTrees.cpp
#include <iostream>
using namespace std;
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
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

node* createTree() {
	int data;
	cin >> data;
	if (data == -1) {
		return NULL;
	}
	node* root = new node(data);
	root->left = createTree();
	root->right = createTree();
	return root;
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

int countNodes(node* root) {
	// base case
	if (!root) {
		return 0;
	}
	// recursive case
	return countNodes(root->left) + countNodes(root->right) + 1;
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

int main() {

	node* root = NULL;
	root = createTree();

	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	cout << "Total nodes: " << countNodes(root) << endl;
	cout << "Total height: " << height(root) << endl;

	return 0;
}
















