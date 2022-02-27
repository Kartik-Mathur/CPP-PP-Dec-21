class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int leftMax[100000];
        int rightMin[100000];
        int n = nums.size();

        leftMax[0] = nums[0];
        rightMin[n - 1] = nums[n - 1];

        int ans = nums[0];

        for (int i = 1; i < n ; i++) {
            leftMax[i] = ans;
            ans = max(ans, nums[i]);
        }

        ans = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightMin[i] = ans;
            ans = min(ans, nums[i]);
        }

        for (int i = 0 ; i < n ; i++) {
            if (leftMax[i] <= rightMin[i]) {
                return i + 1;
            }
        }
        return -1;
    }
};