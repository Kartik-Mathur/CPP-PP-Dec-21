// LengthOfString.cpp
#include <iostream>
using namespace std;

int length(char *a) {
	int i;
	for (i = 0; a[i] != '\0'; ++i)
	{

	}
	return i;
}

void printArray(char *a) {
	for (int i = 0; a[i] != '\0'; ++i)
	{
		cout << a[i];
	}
	cout << endl;
}
int main() {

	char a[100] = "Hello World";
	// cin >> a;

	printArray(a);

	cout << "Length: " << length(a) << endl;
	return 0;
}
















