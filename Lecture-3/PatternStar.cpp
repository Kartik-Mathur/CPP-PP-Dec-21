// PatternStar.cpp
// Pattern123.cpp
#include <iostream>
using namespace std;

int main() {

	int n, row, i, no;
	cin >> n;
	row = 1;
	while (row <= n) {
		// Har row ke andar jo kaam krna hai vo yaha likhdo
		// this work should be generic

		// Create a loop that will run for row number of times
		i = 1;
		while (i <= row) {
			cout << '*' << " ";

			i = i + 1;
		}

		cout << endl;
		row = row + 1;
	}

	return 0;
}
















