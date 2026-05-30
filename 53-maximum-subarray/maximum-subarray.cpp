class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];
        int maxi=nums[0];
        if(n==1)return nums[0];
        for(int i = 1; i < n; i++){
            maxi = max(nums[i], maxi + nums[i]); 
            ans=max(ans,maxi);
        }
        return ans;
      
        
    }
};