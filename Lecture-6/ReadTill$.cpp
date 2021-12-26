// ReadTill$.cpp
#include <iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch;

	int cnt =  0;
	while (ch != '$') {
		cnt++;
		cin >> ch;
	}

	cout << "total characters: " << cnt << endl;

	// cout << "Character: " << ch << endl;

	// cin >> ch;
	// cout << "Character: " << ch << endl;

	// cin >> ch;
	// cout << "Character: " << ch << endl;

	return 0;
}
















