#include <iostream>
#include <climits>
using namespace std;

int main() {

	int n, i, l, no;

	cin >> n;
	l = INT_MIN;

	i = 1;
	while (i <= n) {
		cin >> no;
		if (no > l) {
			l = no;
		}

		i = i + 1;
	}
	cout << "Largest Number is: " << l << endl;

	return 0;
}
















