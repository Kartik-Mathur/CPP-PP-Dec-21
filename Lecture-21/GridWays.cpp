// GridWays.cpp
#include <iostream>
using namespace std;

int ways(int i, int j) {
	// base case
	if (i == 0 and j == 0) {
		return 1;
	}
	if (i < 0 || j < 0) {
		return 0;
	}

	return ways(i, j - 1) + ways(i - 1, j );
}

int main() {

	cout << ways(3, 3) << endl;

	return 0;
}
















