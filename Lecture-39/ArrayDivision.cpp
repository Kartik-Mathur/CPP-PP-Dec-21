// ArrayDivision.cpp
// https://leetcode.com/problems/all-divisions-with-the-highest-score-of-a-binary-array/
class Solution {
public:
	vector<int> maxScoreIndices(vector<int>& nums) {
		int zeroes = 0, ones = 0;
		int n = nums.size();
		for (int i = 0; i < n ; i++) {
			if (nums[i] == 1) {
				ones++;
			}
		}
		vector<int> partition_sum;
		int mx = 0;
		for (int i = 0 ; i <= n ; i++) {
			partition_sum.push_back(ones + zeroes);
			mx = max(mx, ones + zeroes);

			if (i < n and nums[i] == 0) {
				zeroes++;
			}
			else {
				ones--;
			}
		}
		vector<int> ans;
		for (int i = 0 ; i < partition_sum.size() ; i++) {
			if (partition_sum[i] == mx) {
				ans.push_back(i);
			}
		}
		return ans;
	}
};