// ArrayPointer.cpp
#include <iostream>
using namespace std;

int main() {

	int b[] = {1, 2, 3, 4};
	int * p = b;

	for (int i = 0; i < 4; ++i)
	{
		cout << p[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 4; ++i)
	{
		cout << *(b + i) << " ";
	}
	cout << endl;

	for (int i = 0; i < 4; ++i)
	{
		cout << b[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 4; ++i)
	{
		cout << *(p + i) << " ";
	}
	cout << endl;

	return 0;
}
















