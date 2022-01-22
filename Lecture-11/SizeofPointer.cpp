// SizeofPointer.cpp
#include <iostream>
using namespace std;

int main() {

	int a = 10;
	int *aptr = &a;

	float f = 1.11;
	float* fptr;
	fptr = &f;

	char c = 'A';
	char* cptr = &c;

	cout << sizeof(aptr) << endl;
	cout << sizeof(&a) << endl << endl;
	cout << sizeof(fptr) << endl;
	cout << sizeof(&f) << endl << endl;
	cout << sizeof(cptr) << endl;
	cout << sizeof(&c) << endl << endl;

	// cout<<sizeof(aptr)<<endl;
	// cout<<sizeof(&a)<<endl;

	// cout << "a: " << a << endl;
	// cout << "&a: " << &a << endl;
	// cout << "aptr: " << aptr << endl << endl;

	// cout << "f: " << f << endl;
	// cout << "&f: " << &f << endl;
	// cout << "fptr: " << fptr << endl << endl;

	// cout << "c: " << c << endl;
	// // cout << "&c: " << &c << endl;
	// cout << "&c: " << (void*)&c << endl;
	// cout << "cptr: " << (float*)cptr << endl << endl;

	return 0;
}
















