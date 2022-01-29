// ReverseString.cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char a[100];
	cin.getline(a, 100);

	int len_a = strlen(a);

	int i = 0, j = len_a - 1;

	cout << a << endl;

	while ( i < j ) {
		swap(a[i], a[j]);
		i++;
		j--;
	}

	cout << a << endl;

	return 0;
}
















