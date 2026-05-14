class Solution {
public:
    bool isGood(vector<int>& nums) {

        int n = nums.size();
        int m = *max_element(nums.begin(), nums.end());

        if(n != m + 1)
            return false;

        unordered_map<int,int> mp;

        for(auto x : nums) {
            mp[x]++;
        }

        for(int i = 1; i < m; i++) {
            if(mp[i] != 1)
                return false;
        }

        if(mp[m] != 2)
            return false;

        return true;
    }
};