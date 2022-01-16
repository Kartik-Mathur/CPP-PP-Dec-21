// PassingArraysToFunc.cpp
#include <iostream>
using namespace std;

void printArray(int a[], int n) {
	cout << "Printing via function: ";
	for (int i = 0; i < n ; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;
}

void printArray1(int a[500], int n) {
	cout << "Printing via function-1: ";
	for (int i = 0; i < n ; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;
}


int main() {

	int a[500] = {1, 4, 3, 2, 5, 6};
	int n = 6;

	printArray(a, n);
	printArray1(a, n);


	return 0;
}
















