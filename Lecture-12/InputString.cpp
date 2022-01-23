// InputString.cpp
#include <iostream>
using namespace std;

void inputString(char *a, char delimiter = '\n') {
	int i = 0 ;
	char ch = cin.get();

	while (ch != delimiter) {
		a[i] = ch;
		i++;
		ch = cin.get();
	}

	a[i] = '\0';
}

void printArray(char *a) {
	for (int i = 0; a[i] != '\0'; ++i)
	{
		cout << a[i];
	}
	cout << endl;
}

int main() {
	char a[100];
	inputString(a, '$');
	printArray(a);

	return 0;
}
















