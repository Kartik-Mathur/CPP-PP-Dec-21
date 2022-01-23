// NumberAndString.cpp
#include <iostream>
using namespace std;

int main() {

	int x;
	char a[100];

	cin >> x;
	cin.ignore(); // or cin.get(); // Ek character read kr lia number ke just baad wala
	// Lekin usse store nhi kiya kahi par bhi that means vo ignore ho gaya

	// 1st way to take input
	// 10'\n'
	// Hello World'\n'

	// 2nd way to take input
	// 10' 'Hello World'\n'

	cin.getline(a, 100);

	cout << "Number:" << x << endl;
	cout << a << endl;

	return 0;
}
















