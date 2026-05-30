class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int x : nums) {
            mp[x]++;
        }

        for(int i = 1; i <= nums.size() + 1; i++) {
            if(!mp.count(i))
                return i;
        }

        return nums.size() + 1;
    }
};