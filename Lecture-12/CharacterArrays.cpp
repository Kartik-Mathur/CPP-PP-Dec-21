// CharacterArrays.cpp
#include <iostream>
using namespace std;

int main() {


	// char a[14] = "Kartik Mathur";
	// char a[7] = "Kartik";
	cout << a << endl;

	char a[] = {'K', 'A', 'R', 'T', 'I', 'K', '\0', 'M', 'A', 'T', 'H', 'U', 'R', '\0'};
	int n = sizeof(a);
	cout << "Buckets of a: " << n << endl;

	for (int i = 0; i < n ; ++i)
	{
		cout << a[i];
	}
	cout << endl;

	cout << a << endl;


	return 0;
}
















