class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& nums, int i, vector<int>& sub) {
        if (i == nums.size()) {
            ans.push_back(sub);
            return;
        }
        // notpick
        solve(nums, i + 1, sub);
        // pick
        sub.push_back(nums[i]);
        solve(nums, i + 1, sub);
        sub.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> sub;

        solve(nums, 0, sub);

        return ans;
    }
};