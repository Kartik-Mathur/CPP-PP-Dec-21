// ProductOfArray.cpp
#include <iostream>
using namespace std;
#define ll long long
int main() {

	int n;
	cin >> n;

	ll int a[100000];

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	ll int product = 1;
	for (int i = 0; i < n; ++i)
	{
		product = product * a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		a[i] = product / a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;


	return 0;
}
















