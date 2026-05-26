class Solution {
public:

    vector<vector<int>> ans;
    vector<int> sub;
    int n;

    void solve(vector<int>& candidates, int target, int i, int subsum) {

        if(subsum == target) {
            ans.push_back(sub);
            return;
        }

        if(i >= n || subsum > target) {
            return;
        }

        // pick
        sub.push_back(candidates[i]);

        solve(candidates, target, i, subsum + candidates[i]);

        sub.pop_back();

        // not pick
        solve(candidates, target, i + 1, subsum);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        n = candidates.size();

        solve(candidates, target, 0, 0);

        return ans;
    }
};