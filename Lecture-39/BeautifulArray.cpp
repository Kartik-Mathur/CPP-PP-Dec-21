// BeautifulArray.cpp
// https://leetcode.com/problems/beautiful-array/
class Solution {
public:
	void beautifulArrayBanao(vector<int> &ans, int a, int d, int n) {
		// base case
		if (n == 1) {
			ans.push_back(a);
			return;
		}
		if (n == 2) {
			ans.push_back(a);
			ans.push_back(a + d);
			return;
		}
		// recursive case
		beautifulArrayBanao(ans, a, 2 * d, (n + 1) / 2); // Generate odd
		for (int i = 0 ; i < (n + 1) / 2 ; i++) { // Waha se even nikal lo
			if (ans[i] + d <= a + (n - 1)*d) {
				ans.push_back(ans[i] + d);
			}
		}
	}

	vector<int> beautifulArray(int n) {
		vector<int> ans;
		int a = 1, d = 1;
		beautifulArrayBanao(ans, a, d, n);
		return ans;
	}
};