// switchcase.cpp
#include <iostream>
using namespace std;

int main() {

	char ch = 'n';

	switch (ch) {
	case 'n':
	case 'N':
		cout << "North" << endl;
		break;
	case 's':
	case 'S':
		cout << "South" << endl;
		break;
	case 'E':
		cout << "East" << endl;
		break;
	case 'W':
		cout << "West" << endl;
	}

	return 0;
}
















