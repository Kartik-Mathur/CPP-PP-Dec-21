// CallByVal&Ref.cpp
#include <iostream>
using namespace std;

void Update(int &x) {

	x = x + 10;

}

int MeiUpdateKareBinaNhiMaanungi(int x) {
	x = x + 10;
	return x;
}

int main() {

	int a = 1;

	cout << "Before Update: " << a << endl;

	Update(a);

	cout << "After Update: " << a << endl;


	return 0;
}
















