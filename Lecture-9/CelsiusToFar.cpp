// CelsiusToFar.cpp
#include <iostream>
using namespace std;

void printTable(int initial, int final, int step) {
	int f = initial;
	while (f <= final) {
		int c = (5 / 9.0) * (f - 32);

		cout << f << " " << c << endl;

		f = f + step;
	}

}

int main() {

	int initial = 0, final = 300, step = 20;
	printTable(initial, final, step);
	cout << endl;
	printTable(0, 150, 30);



	return 0;
}
















