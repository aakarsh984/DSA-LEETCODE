class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n=nums.size();
        vector<bool> ans(n,false);
        __int128 x=0;
        for (int i = 0; i < nums.size(); i++) {
                x = (x * 2 + nums[i])%5;
                if(x==0) ans[i]=true;
        }
       return ans;
        
    }
};