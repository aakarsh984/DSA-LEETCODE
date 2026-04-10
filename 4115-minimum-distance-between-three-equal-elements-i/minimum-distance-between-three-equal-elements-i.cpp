class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < (int)nums.size(); i++)
            mp[nums[i]].push_back(i);

        int res = INT_MAX;
        for (auto& [val, indices] : mp) {
            if (indices.size() < 3) continue;
            for (int i = 0; i + 2 < (int)indices.size(); i++)
                res = min(res, 2*(indices[i+2] - indices[i]));
        }
        return res == INT_MAX ? -1 : res;
    }
};