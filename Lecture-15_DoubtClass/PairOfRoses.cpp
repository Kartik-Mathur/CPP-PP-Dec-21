// PairOfRoses.cpp
#include <iostream>
#include <algorithm>
using namespace std;

void PairOfRoses() {
	int a[100000];
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	sort(a, a + n);

	int money;
	cin >> money;

	cout << endl;

	int i = 0, j = n - 1;
	int r1, r2;
	while (i < j) {
		if (a[i] + a[j] == money) {
			r1 = i;
			r2 = j;
			i++;
			j--;
		}
		else if (a[i] + a[j] < money) {
			i++;
		}
		else {
			j--;
		}
	}

	cout << "Deepak should buy roses whose prices are " << a[r1] << " and " << a[r2] << "." << endl;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		PairOfRoses();
	}






	return 0;
}
















