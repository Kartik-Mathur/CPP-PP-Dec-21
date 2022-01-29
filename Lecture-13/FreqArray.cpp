// FreqArray.cpp
#include <iostream>
using namespace std;

int main() {
	char a[] = "abccaz";
	char b[] = "baacc";
	int freq[26] = {0};

	// a string se frequency array ko update kiya
	for (int i = 0; a[i] != '\0'; ++i)
	{
		int indx = a[i] - 'a';
		freq[indx]++;
	}

	for (int i = 0; i < 26; ++i)
	{
		cout << freq[i] << " ";
	}
	cout << endl;

	// b string se frequecy array mei characters ke count ko decrease kia
	for (int i = 0; b[i] != '\0'; ++i)
	{
		int indx = b[i] - 'a';
		freq[indx]--;
	}

	// agar har bucket zero hai toh theek nhi hai toh mtlb permutation nhi hai
	int flag = 1;
	for (int i = 0; i < 26; ++i)
	{
		if (freq[i] != 0) {
			flag = -1;
		}
		cout << freq[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 26; ++i)
	{
		cout << (char)(i + 'a') << " ";
	}
	cout << endl;

	if (flag == -1) {
		cout << "Nahi hai permutation" << endl;
	}
	else {
		cout << "Hai permutation" << endl;
	}

	// for (int i = 0; i < 26; ++i)
	// {
	// 	if (freq[i] > 0) {
	// 		cout << (char)(i + 'a') << " : " << freq[i] << endl;
	// 	}
	// }
	// cout << endl;
	// for (int i = 0; i < 26; ++i)
	// {
	// 	cout << (char)(i + 'a') << " ";
	// }
	// cout << endl;


	return 0;
}
















