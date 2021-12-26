// Scopes.cpp
#include <iostream>
using namespace std;
// Global Scope
int a = 100;


int main() {

	int a = 2;
	cout << a << endl;
	cout <<::a << endl; // Will ignore all the scopes and look
	// directly in global scope
	if (a > 1) {
		// int a = 10;
		cout << a << endl;
		::a = ::a + 10;
		cout << ::a << endl;
	}



	return 0;
}
















