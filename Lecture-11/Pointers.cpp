// Pointers.cpp
#include <iostream>
using namespace std;

int main() {

	int a = 10;
	int *aptr = &a;

	float f = 1.11;
	float* fptr = NULL;
	fptr = &f;

	char c = 'A';
	char* cptr = &c;

	cout << "a: " << a << endl;
	cout << "&a: " << &a << endl;
	cout << "aptr: " << aptr << endl << endl;

	cout << "f: " << f << endl;
	cout << "&f: " << &f << endl;
	cout << "fptr: " << fptr << endl;
	cout << "fptr: " << *fptr << endl << endl;

	cout << "c: " << c << endl;
	// cout << "&c: " << &c << endl;
	cout << "&c: " << (void*)&c << endl;
	cout << "cptr: " << (float*)cptr << endl << endl;






	return 0;
}
















