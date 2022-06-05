// Tries.cpp
#include <iostream>
#include <unordered_map>
using namespace std;

class node {
public:
	char data;
	unordered_map<char, node*> h;
	bool isTerminal;
	node(char d) {
		data = d;
		isTerminal = false;
	}
};

class Tries {
public:
	node* root;
	Tries() {
		root = new node('\0');
	}

	void addWord(char* word) {
		node* temp = root;
		for (int i = 0; word[i] != '\0'; ++i)
		{
			char ch = word[i];
			if (temp->h.count(ch) == 1) {
				temp = temp->h[ch];
			}
			else {
				temp->h[ch] = new node(ch);
				temp = temp->h[ch];
			}

		}
		temp->isTerminal = true;
	}

	bool checkWord(char *word) {
		node* temp = root;
		for (int i = 0; word[i] != '\0'; ++i)
		{
			char ch = word[i];
			if (temp -> h.count(ch) == 0) {
				return false;
			}
			temp = temp->h[ch];
		}
		return temp->isTerminal;
	}

	void printAll(string s, node* temp) {
		// base case
		if (!temp) {
			return;
		}

		// recursive case
		if (temp->isTerminal == true) {
			cout << s << endl;
		}

		for (auto n : temp->h) {
			s.push_back(n.first);
			printAll(s, n.second);
			s.pop_back();
		}
	}

	void Suggestions(char *word) {
		node* temp = root;
		for (int i = 0; word[i] ; ++i)
		{
			char ch = word[i];
			if (temp -> h.count(ch) == 0) {
				return;
			}
			temp = temp->h[ch];
		}
		string s(word);
		printAll(s, temp);
	}
};

int main() {

	Tries t;
	// "He";
	t.addWord("Hell");
	t.addWord("Hello");
	t.addWord("Hello World");
	t.addWord("Code");
	t.addWord("Coder");
	t.addWord("Coding");

	// while (1) {
	// 	char a[100];
	// 	cin >> a;

	// 	if (t.checkWord(a)) {
	// 		cout << "Word is present" << endl;
	// 	}
	// 	else {
	// 		cout << "Word is not present" << endl;
	// 	}
	// }

	t.Suggestions("Code");


	return 0;
}
















