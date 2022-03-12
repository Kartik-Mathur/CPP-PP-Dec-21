// string.cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {

	string s;
	s = "Hello World";

	cout << s << endl;
	s.push_back(' ');
	s.push_back('L');
	s.push_back('E');
	s.push_back('A');
	s.push_back('R');
	s.push_back('N');
	cout << s << endl;
	s.pop_back();
	s.pop_back();
	s.pop_back();
	cout << s << endl;

	s += ", Learning Strings";
	cout << s << endl;

	// cin >> s;// Yeh toh white space ko ignore karega
	getline(cin, s);

	cout << "User ne string input kari: " << s << endl;
	cout << "User input string length: " << s.length() << endl;

	for (int i = 0; i < s.length(); ++i)
	{
		cout << s[i] << "-";
	}


	return 0;
}
















