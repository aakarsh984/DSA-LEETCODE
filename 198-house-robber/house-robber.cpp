class Solution {
public:
int n;
vector<int>dp=vector<int>(401,-1);
    int solve(vector<int>& nums,int i){
        if(i>=n)return 0;
        if(dp[i]!=-1)return dp[i];
        int steal=nums[i]+solve(nums,i+2);
        int skip=solve(nums,i+1);
        return dp[i]=max(skip,steal);

    }
    int rob(vector<int>& nums) {
        n=nums.size();
        if (nums.size() == 1)
            return nums[0];
    
        return solve(nums, 0);
    }
};