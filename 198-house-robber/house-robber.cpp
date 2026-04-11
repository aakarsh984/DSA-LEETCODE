class Solution {
public:
vector<int>dp=vector<int>(401,-1);
    int solve(vector<int> &nums,int i){
        // int i=0;
        int size=nums.size();
        if(i>=size)return 0;
        if(dp[i]!=-1) return dp[i];
        int steal=nums[i]+solve(nums,i+2);
        int skip= 0+solve(nums,i+1);
        return dp[i]=max(skip,steal);


    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int i=0;
        int ans= solve(nums,i);
    return ans;
        
    }
};