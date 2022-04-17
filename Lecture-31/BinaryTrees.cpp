// BinaryTrees.cpp
#include <iostream>
#include <queue>
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

int diameter(node* root) {
	// base case
	if (!root) {
		return 0;
	}
	// recursive case
	int op1 = height(root->left) + height(root->right);
	int op2 = diameter(root->left);
	int op3 = diameter(root->right);

	return max(op1, max(op2, op3));
}

class Pair {
public:
	int height;
	int dia;
};

Pair fastDiameter(node* root) {
	// base case
	if (!root) {
		Pair ans;
		ans.height = ans.dia = 0;
		return ans;
	}
	// recursive case
	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);

	Pair ans;
	// Height calculate karlo
	ans.height = max(left.height, right.height) + 1;
	// Diameter nikal lo
	int op1 = left.height + right.height;
	int op2 = left.dia;
	int op3 = right.dia;
	ans.dia = max(op1, max(op2, op3));
	return ans;
}

void mirror(node* root) {
	// base case
	if (!root) {
		return;
	}

	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}

node* searchBT(node* root, int key) {
	// base case
	if (!root) {
		return NULL;
	}
	// recursive case
	if (root->data == key) {
		return root;
	}

	node* left_ans = searchBT(root->left, key);
	if (left_ans != NULL) {
		return left_ans;
	}
	return searchBT(root->right, key);
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

node* levelOrderInput() {
	node* root = NULL;

	int data, l, r;
	cout << "Enter the data of root: ";
	cin >> data;
	root = new node(data);
	queue<node*> q;
	q.push(root);
	while (!q.empty()) {
		node* x = q.front();
		q.pop();
		cout << "Enter left and right child of: " << x->data << endl;
		cin >> l >> r;
		if (l != -1) {
			x->left = new node(l);
			q.push(x->left);
		}
		if (r != -1) {
			x->right = new node(r);
			q.push(x->right);
		}
	}

	return root;
}

int pre[] = {8, 10, 1, 6, 4, 7, 3, 14, 13};
int in[] = {1, 10, 4, 6, 7, 8, 3, 13, 14};
int i = 0;
node* buildTree(int s, int e) {
	if (s > e) {
		return NULL;
	}
	node* root = new node(pre[i++]);

	int k = -1;
	for (int j = s; j <= e; ++j)
	{
		if (root->data == in[j]) {
			k = j;
			break;
		}
	}
	root->left = buildTree(s, k - 1);
	root->right = buildTree(k + 1, e);
	return root;
}

int main() {

	node* root = NULL;
	// root = createTree();
	// root = levelOrderInput();
	root = buildTree(0, (sizeof(pre) / sizeof(int)) - 1);
	// mirror(root);
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	cout << "Total nodes: " << countNodes(root) << endl;
	cout << "Total height: " << height(root) << endl;
	cout << "Diameter: " << diameter(root) << endl;

	Pair ans = fastDiameter(root);
	cout << "Fast Diameter: " << ans.dia << endl;
	cout << "Fast Height: " << ans.height << endl;

	node* s = searchBT(root, 100);
	if (s) {
		cout << s->data << endl;
	}
	else {
		cout << "Key Not Found" << endl;
	}
	levelOrder(root);

	return 0;
}
















