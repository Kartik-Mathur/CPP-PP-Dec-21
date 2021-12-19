// SquareRoot.cpp
#include <iostream>
using namespace std;

int main() {

	int n, precision;
	precision = 3;
	int cp;
	float i;
	cin >> n;
	// This is to find the integral part of the square root
	i = 0;
	float inc = 1;

	cp = 0;
	while (cp <= precision) {
		while (i * i <= n) {

			i = i + inc;
		}
		i = i - inc;
		inc = inc / 10;
		cout << "i: " << i << endl;
		cp = cp + 1;
	}

	cout << "Answer: " << i << endl;


	// while (i * i <= n) {

	// 	i = i + inc;
	// }
	// i = i - inc;

	// cout << "Integral Part is : " << i << endl;

	// // Find the answer for precision
	// inc = inc / 10;

	// while (i * i <= n) {
	// 	i = i + inc;
	// }
	// i = i - inc; // ek step peeche wala answer hoga

	// cout << "First precision: " << i << endl;

	// // second precision ko find krna hai
	// inc = inc / 10;

	// while (i * i <= n) {
	// 	i = i + inc;
	// }
	// i = i - inc; // ek step peeche wala answer hoga

	// cout << "Second precision: " << i << endl;


	return 0;
}
















