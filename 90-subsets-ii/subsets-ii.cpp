class Solution {
public:
    vector<vector<int>> ans;
    vector<int> subset;

    void solve(vector<int>& nums, int index) {
        ans.push_back(subset);

        for (int i = index; i < nums.size(); i++) {

            // Skip duplicates
            if (i > index && nums[i] == nums[i - 1])
                continue;

            subset.push_back(nums[i]);

            solve(nums, i + 1);

            subset.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        solve(nums, 0);

        return ans;
    }
};