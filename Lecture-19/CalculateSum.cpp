// CalculateSum.cpp
// CalculateSum.cpp
#include <iostream>
using namespace std;
#define int long long int

void solve(int *prev, int *naya, int n, int x) {
	int m = 1e9 + 7;

	for (int i = 0; i < n; ++i)
	{
		int peechla_i = [(i - x) + n] % n;

		naya[i] = (prev[i] + prev[peechla_i]) % (m);
	}
}

int32_t main() {

	int prev[110005], naya[110005];
	int n, q, x;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> prev[i];
	}

	cin >> q;

	while (q-- > 0) {
		cin >> x;
		solve(prev, naya, n, x);
		for (int i = 0; i < n; ++i)
		{
			prev[i] = naya[i];
		}
	}
	int sum = 0;
	int m = 1e9 + 7;
	for (int i = 0; i < n; ++i)
	{
		sum = (sum + prev[i] % m) % (m);
	}
	cout << sum << " ";

	return 0;
}
















