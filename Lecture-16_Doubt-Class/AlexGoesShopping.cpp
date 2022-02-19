// AlexGoesShopping.cpp
#include <iostream>
using namespace std;

int main() {

	int item[100000];
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> item[i];
	}

	int q;
	cin >> q;
	while (q-- > 0) {
		int amount, k;
		cin >> amount >> k;

		int counter = 0;
		for (int i = 0; i < n; ++i)
		{
			if ((amount % item[i]) == 0) {
				counter++;
			}
		}

		if (counter >= k) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}

	}

	return 0;
}
















