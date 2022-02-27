// Power.cpp
#include <iostream>
using namespace std;

int power(int x, int n) {
	// base case
	if (n == 0) {
		return 1;
	}
	// recursive case
	int ChotiProblem = power(x, n - 1);
	int BadaAns = x * ChotiProblem;
	return BadaAns;
}

int main() {

	int x, n;
	cin >> x >> n;

	cout << power(x, n) << endl;

	return 0;
}
















