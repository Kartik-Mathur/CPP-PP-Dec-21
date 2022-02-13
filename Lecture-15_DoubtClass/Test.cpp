// Test.cpp
#include<iostream>
#include<algorithm>
using namespace std;
// #define int long long int
int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int a[1000000];
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {

		cin >> a[i];
	}

	int key;
	cin >> key;
	int flag = -1;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == key) {
			cout << i << endl;
			flag = 0;
			break;
		}
	}

	if (flag == -1) {

		cout << "-1";
	}




	return 0;
}

