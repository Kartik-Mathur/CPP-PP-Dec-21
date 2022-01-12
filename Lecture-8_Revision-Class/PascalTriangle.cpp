// PascalTriangle.cpp
#include <iostream>
using namespace std;

int main() {

	int N;
	cin >> N;

	for (int n = 0; n < N; ++n)
	{
		// Print spaces
		for (int i = 0; i < N - n; ++i)
		{
			cout << " ";
		}
		int val = 1;
		for (int r = 0; r <= n; ++r)
		{
			if (r == 0 || r == n) {
				cout << 1 << " ";
			}
			else {
				val = ((n - r + 1) * val / r);
				cout << val << " ";
			}
		}

		cout << endl;
	}



	return 0;
}
















