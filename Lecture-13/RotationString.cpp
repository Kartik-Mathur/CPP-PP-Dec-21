// RotationString.cpp
#include <iostream>
#include <cstring>
using namespace std;

void RotationString(char *a, int x) {
	cout << "String at begining is: " << a << endl;
	int len_a = strlen(a);
	// x = x % len_a;
	// Shift all characters by x position ahead
	int i = len_a - 1;
	while (i >= 0) {
		a[i + x] = a[i];
		i--;
	}
	cout << "After shifting by x character: " << a << endl;

	// Bring the last x characters to the front
	int j = len_a;
	for (int i = 0; i < x; ++i)
	{
		a[i] = a[j];
		j++;
	}
	cout << "After bringing x characters to front: " << a << endl;

	// Add null at len_a
	a[len_a] = '\0';
	cout << "finally rotated string is : " << a << endl;
}

int main() {

	char a[100] = "Code";
	int x = 5;

	RotationString(a, x);

	return 0;
}
















