#include <iostream>
using namespace std;

int stringToInt(char *a, int n) {
	// base case
	if (n == 0) {
		return 0;
	}

	// recursive case
	int last_digit = a[n - 1] - '0';
	int ans = stringToInt(a, n - 1) * 10 + last_digit;
	return ans;
}

int main() {
	char a[100];
	cin >> a;

	int n = strlen(a);
	cout << stringToInt(a, n) << endl;
	cout << stringToInt(a, n) * 10 + 5 << endl;


	return 0;
}
















