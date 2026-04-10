class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }
        int m = INT_MAX;

        for (auto& p : mp) {
            auto& v = p.second;

            if (v.size() >= 3) {
                for (int i = 0; i + 2 < v.size(); i++) {
                    int res = abs(v[i+2] - v[i]);
                    res*=2;  
                    m = min(m, res);
                }
            }
        }

        return (m == INT_MAX ? -1 : m);
        
    }
};