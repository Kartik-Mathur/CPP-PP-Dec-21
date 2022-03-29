// PhoneKeypad.cpp
#include <iostream>
using namespace std;
char keys[][100] = {
	"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"
};

void PhoneKeypad(char *in, char *out, int i, int j) {
	// base case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	// recursive case
	int digit = in[i] - '0';
	for (int k = 0; keys[digit][k] != '\0'; ++k)
	{
		out[j] = keys[digit][k];
		PhoneKeypad(in, out, i + 1, j + 1);
	}
}

int main() {

	char in[100];
	cin >> in;
	char out[100];

	PhoneKeypad(in, out, 0, 0);

	return 0;
}
















