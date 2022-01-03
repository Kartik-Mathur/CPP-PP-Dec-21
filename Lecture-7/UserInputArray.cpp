// UserInputArray.cpp
#include <iostream>
using namespace std;

int main() {

	int a[10];
	int n;

	cout << "Enter n(max 10): ";
	cin >> n;

	for (int i = 0; i < n ; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 10 ; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}
















