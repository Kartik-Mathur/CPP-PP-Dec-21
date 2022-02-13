// Fibonacci.cpp
#include <iostream>
using namespace std;
int fibo(int n) {
	// 1. Base case(
	if (n == 0 || n == 1) {
		return n;
	}

	return fibo(n - 1) + fibo(n - 2);

}

int fibo(int n) {
	// 1. Base case(
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}

	// 2. Recurrence Relation
	// Fibo(n) = Fibo(n-1) + Fibo(n-2);
	// Pure assumption, ptani kaise but de dega
	int ChotaAns1 = fibo(n - 1);
	int ChotaAns2 = fibo(n - 2);

	int BadaAns = ChotaAns1 + ChotaAns2;
	return BadaAns;
}

int main() {

	int n;
	cin >> n;

	cout << fibo(n) << endl;

	return 0;
}
















