#include <iostream>
using namespace std;

int fact(int n) {
	// 1. base case
	if (n == 0) {
		return 1;
	}
	// 2. Figure out the recurrence relation
	// fact(n) = n * fact(n-1)
	int ChotaAns = fact(n - 1); // Pure assumption hai, maan lo de dega answer

	int BadaAns = n * ChotaAns;

	return BadaAns;
}

int main() {

	int n;
	cin >> n;

	cout << fact(n) << endl;

	return 0;
}
















