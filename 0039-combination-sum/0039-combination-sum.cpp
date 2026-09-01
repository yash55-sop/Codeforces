class Solution {
public:
    vector<vector<int>> ans;

    void solve(int i, int target, vector<int>& candidates, vector<int>& cur) {
        if (target == 0) {
            ans.push_back(cur);
            return;
        }

        if (i == candidates.size() || target < 0) return;

        cur.push_back(candidates[i]);
        solve(i, target - candidates[i], candidates, cur);
        cur.pop_back();

        solve(i + 1, target, candidates, cur);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> cur;
        solve(0, target, candidates, cur);
        return ans;
    }
};