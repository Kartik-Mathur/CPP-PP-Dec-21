// switch.cpp
#include <iostream>
using namespace std;

int main() {

	char ch = 'n';

	switch (ch) {
	case 'N':
	case 'n':
		cout << "North" << endl;
		break;

	case 'E':
	case 'e':
		cout << "East" << endl;
		break;

	case 'S':
	case 's':
		cout << "South" << endl;
		break;

	case 'W':
	case 'w':
		cout << "West" << endl;
		break;

	default:
		cout << "Invalid Input" << endl;
	}

	// if (ch == 'N' || ch == 'n') {
	// 	cout << "North" << endl;
	// }
	// else if (ch == 'E' || ch == 'e') {
	// 	cout << "East" << endl;
	// }
	// else if (ch == 'S' || ch == 's') {
	// 	cout << "South" << endl;
	// }
	// else if (ch == 'W' || ch == 'w') {
	// 	cout << "West" << endl;
	// }
	// else {
	// 	cout << "Invalid Input" << endl;
	// }


	return 0;
}
















