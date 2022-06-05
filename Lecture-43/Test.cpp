class Solution {
public:
    void solve(vector<int>& candidates, vector<int> &temp, vector<vector<int>> &ans,
               int target, int indx) {
        // base case
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        if (target < 0) {
            return;
        }
        // recursive case
        for (int i = indx; i < candidates.size() ; i++) {
            if (i == indx || candidates[i] != candidates[i - 1]) {
                temp.push_back(candidates[i]);
                solve(candidates, temp, ans, target - candidates[i], i + 1);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates, temp, ans, target, 0);
        return ans;
    }
};