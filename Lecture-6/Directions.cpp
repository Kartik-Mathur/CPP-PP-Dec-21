// Directions.cpp
#include <iostream>
using namespace std;

int main() {

	int x = 0, y = 0, i;
	char ch;
	ch = cin.get();
	while (ch != '\n') {
		if (ch == 'N') {
			y++;
		}
		else if (ch == 'S') {
			y--;
		}
		else if (ch == 'E') {
			x++;
		}
		else {
			x--;
		}
		ch = cin.get();
	}

	// cout << x << " " << y << endl;
	if (x >= 0 and y >= 0) { // 1st quadrant
		// Pehle x times 'E' print karna hai
		for (i = 1; i <= x ; i++) {
			cout << 'E';
		}
		// Then y times 'N' print krna hai
		for (i = 1; i <= y ; i++) {
			cout << 'N';
		}
	}
	else if (x <= 0 and y >= 0) { // 2nd Quadrant
		// print y times 'N'
		for (i = 1; i <= y ; i++) {
			cout << 'N';
		}
		// print x times 'W'
		// make x positive
		x = x * (-1);
		for (i = 1; i <= x ; i++) {
			cout << 'W';
		}
	}
	else if (x <= 0 and y <= 0) { // 3rd quadrant
		// y times 'S'
		y = y * (-1);
		for (i = 1; i <= y ; i++) {
			cout << 'S';
		}
		// x times 'W'
		x = x * (-1);
		for (i = 1; i <= x ; i++) {
			cout << 'W';
		}
	}
	else { //4th quadrant
		// x times 'E'
		for (i = 1; i <= x ; i++) {
			cout << 'E';
		}
		// y times 'S'
		y = y * (-1);
		for (i = 1; i <= y ; i++) {
			cout << 'S';
		}
	}


	return 0;
}
















