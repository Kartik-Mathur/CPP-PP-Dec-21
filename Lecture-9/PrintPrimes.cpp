// PrintPrimes.cpp
#include <iostream>
using namespace std;

bool CheckPrime(int n) {
	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
void printAllPrimes(int n) {

	for (int no = 2; no <= n; ++no)
	{
		if (CheckPrime(no) == true) {
			cout << no << " ";
		}
	}
	cout << endl;
}
int main() {

	int n;
	cin >> n;

	printAllPrimes(n);

	return 0;
}
















