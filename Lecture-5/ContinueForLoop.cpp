// ContinueForLoop.cpp
#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;

	for (i = 1; i <= n ; i++) {
		if (i == 5) {
			continue;
		}
		cout << i << " ";
	}

	return 0;
}
















