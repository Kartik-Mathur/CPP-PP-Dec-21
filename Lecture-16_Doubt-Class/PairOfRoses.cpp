// PairOfRoses.cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int roses[100000];
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		for (int i = 0; i < n; ++i)
		{
			cin >> roses[i];
		}
		sort(roses, roses + n);
		int total_rupay;
		cin >> total_rupay;

		int i = 0, j = n - 1;
		int indx_i = -1, indx_j = -1;
		while (i < j) {
			if (roses[i] + roses[j] == total_rupay) {
				indx_i = i;
				indx_j = j;
				i++;
				j--;
			}
			else if (roses[i] + roses[j] > total_rupay) {
				j--;
			}
			else {
				i++;
			}
		}
		cout << "Deepak should buy roses whose prices are " << roses[indx_i] << " and " << roses[indx_j] << "." << endl;
	}

	return 0;
}
















