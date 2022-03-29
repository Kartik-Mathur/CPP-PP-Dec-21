#include <iostream>
using namespace std;

void PrimeSieve( int n) {
	bool a[10000];
	for (int i = 0; i < n; ++i)
	{
		a[i] = true;
	}

	for (int i = 2; i <= n; ++i)
	{
		if (a[i] == true) {
			for (int j = 2 * i; j <= n; j += i)
			{
				a[j] = false;
			}
		}
	}

	for (int i = 2; i <= n; ++i)
	{
		if (a[i] != false) {
			cout << i << " ";
		}
	}
	cout << endl;
}

int main() {



	int n;
	cin >> n;

	PrimeSieve(n);


	return 0;
}
















