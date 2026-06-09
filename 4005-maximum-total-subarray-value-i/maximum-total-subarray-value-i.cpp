class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int ma=*max_element(nums.begin(),nums.end());
        int mi=*min_element(nums.begin(),nums.end());

        return 1LL*k*(ma-mi);
        
    }
};