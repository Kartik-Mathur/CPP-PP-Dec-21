// IntToString.cpp
#include <iostream>
using namespace std;


void IntToString(int n, char a[][10]) {
	// base case
	if (n == 0) {
		return ;
	}
	// recursive case
	int lastdigit = n % 10;
	IntToString(n / 10, a);
	cout << a[lastdigit] << " ";

}

int main() {

	int n;
	cin >> n;
	char a[][10] = {
		"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"
	};

	IntToString(n, a);
	cout << endl;

	return 0;
}
















