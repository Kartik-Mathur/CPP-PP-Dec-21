#include <iostream>
using namespace std;

int length(char *a) {
	int i;
	for (i = 0; a[i] != '\0'; ++i)
	{

	}
	return i;
}

void Copy(char *a, char *b) {
	// b ko a ke andar copy krna hai
	int len_b = length(b);
	for (int i = 0; i <= len_b; ++i)
	{
		a[i] = b[i];
	}
}

int main() {
	char a[100];
	char largest[100];
	int largest_len = 0;

	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		cin.getline(a, 100);
		int len_a = length(a);

		if (len_a > largest_len) {
			// Update kar dena hai largest string ko
			Copy(largest, a);
			largest_len = len_a;
		}
	}

	cout << "Largest String: " << largest << endl;
	cout << "Largest String length: " << largest_len << endl;

	return 0;
}
















