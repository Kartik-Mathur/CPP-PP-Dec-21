// PatternStar.cpp
#include <iostream>
using namespace std;

int main() {

	int n, row, stars;
	cin >> n;

	// initialization; condition check ; updation
	for (row = 1 ; row <= n ; row++) {
		// Yaha par row mei kya krna vo likhdo, jo bhi generic kaam hai
		// Vo yaha aaega
		// 1. Print kardo row times star ko
		for (stars = 1; stars <= row ; stars++) {
			cout << '*';
		}

		// Go to the new line
		cout << endl;
	}

	return 0;
}
















