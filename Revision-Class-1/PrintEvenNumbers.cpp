// PrintEvenNumbers.cpp
#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;

	for (i = 0; i <= n; ++i)
	{
		if (i % 2 == 0)
		{
			cout << i << " ";
		}
	}

	cout << endl;

	for (i = 0 ; i <= n ; i = i + 2) {
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
















