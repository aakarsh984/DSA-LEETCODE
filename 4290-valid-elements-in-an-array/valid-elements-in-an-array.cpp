class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        // int n = nums.size();

        vector<bool> valid(nums.size(), false);
        int maxSoFar = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxSoFar)
                valid[i] = true;
            maxSoFar = max(maxSoFar, nums[i]);
        }

        // vector<bool> right_valid(n, false);
        maxSoFar = INT_MIN;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] > maxSoFar)
                valid[i] = true;
            maxSoFar = max(maxSoFar, nums[i]);
        }

        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
            if (valid[i])
                result.push_back(nums[i]);

        return result;
    }
};