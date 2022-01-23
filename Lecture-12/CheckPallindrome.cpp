// CheckPallindrome.cpp
#include <iostream>
using namespace std;

int length(char *a) {
	int i;
	for (i = 0; a[i] != '\0'; ++i)
	{

	}
	return i;
}


bool isPallindrome(char *a) {
	int len = length(a);

	int i = 0;
	int j = len - 1;
	while (i < j) {
		if (a[i] != a[j]) {
			return false;
		}

		i++;
		j--;
	}
	return true;
}

int main() {

	char a[] = "ch2ch2";
	if (isPallindrome(a)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}
















