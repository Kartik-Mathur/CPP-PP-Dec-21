// Strtok.cpp
#include <iostream>
using namespace std;

int main() {

	char a[] = "......////Kartik$$$$....Prakash///..$..//Mathur__CB__$.Kumar";

	char *ptr = strtok(a, "._/$");
	// cout << ptr << endl;
	int x = 1;
	while (ptr != NULL) {
		cout << ptr << endl;

		ptr = strtok(NULL, "._/$");
	}


	return 0;
}



