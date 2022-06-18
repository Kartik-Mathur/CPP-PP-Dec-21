// MurthalParantha.cpp
#include <iostream>
#include <climits>
using namespace std;
#define ll long long

bool KyaPossibleHai(ll *a, ll paranthas, ll cooks, ll mid) {

	for (int i = 0; i < cooks; ++i)
	{
		// ek cook ko pakdo and dekho maximum
		// kitne paranthas bana skta hai in mid time
		ll mul = 1;
		ll current_time = 0;
		ll r = a[i];
		while (current_time + mul * r <= mid) {
			paranthas --;
			current_time += mul * r;
			mul++;
			if (paranthas == 0) {
				return true;
			}
		}
	}
	return false;
}

ll MurthalParantha(ll *a, ll paranthas, ll cooks) {
	ll s = 0, e = INT_MAX;
	ll ans = INT_MAX;
	while (s <= e) {
		ll mid = (s + e) / 2;
		if (KyaPossibleHai(a, paranthas, cooks, mid)) {
			ans = min(ans, mid);
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}
	return ans;
}

int main() {

	ll paranthas, cooks;
	ll a[100005];
	cin >> paranthas >> cooks;
	for (int i = 0; i < cooks; ++i)
	{
		cin >> a[i];
	}

	cout << MurthalParantha(a, paranthas, cooks) << endl;

	return 0;
}
















