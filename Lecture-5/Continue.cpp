// Continue.cpp
#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;

	i = 1;
	while (i <= n) {

		if (i == 3) {
			i++;
			continue;
		}
		cout << i << " ";
		i++;
	}

	return 0;
}
















