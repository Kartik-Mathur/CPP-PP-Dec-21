// CallByReference.cpp
#include <iostream>
using namespace std;

void fun(int &a) {

	a = a + 1;
	cout << "a: " << a << endl;
}

int main() {

	int x = 1;

	fun(x);

	cout << x << endl;
	return 0;
}
















