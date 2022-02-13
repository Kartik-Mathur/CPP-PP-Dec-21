#include <iostream>
using namespace std;

void update(int *x) {
	*x = *x + 1;
}

int main() {

	int a = 10;
	cout << a << endl;

	update(&a);

	cout << a << endl;

	return 0;
}
















