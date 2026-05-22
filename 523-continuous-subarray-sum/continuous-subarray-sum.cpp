class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();

        unordered_map<int, int> mp;

        vector<int> prefix(n);

        prefix[0] = nums[0];

        mp[0] = -1;

        if(!mp.count(prefix[0] % k)) {
            mp[prefix[0] % k] = 0;
        }

        for(int i = 1; i < n; i++) {

            prefix[i] = prefix[i - 1] + nums[i];

            int rem = prefix[i] % k;

            if(mp.count(rem)) {

                int len = i - mp[rem];

                if(len >= 2)
                    return true;
            }
            else {
                mp[rem] = i;
            }
        }

        return false;
    }
};