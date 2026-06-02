class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int f=0;
        int n=nums.size();
        int sum=0;
        for(int i = 0; i < n; i++){
            sum+=nums[i];
            f+=(nums[i]*i);
        }

        int ans=f;
        for(int k = 0; k < n; k++){
            int last=nums[n-1-k];
            f=f+sum-n*last;
            ans=max(ans,f);
        }
        return ans;
        
    }
};