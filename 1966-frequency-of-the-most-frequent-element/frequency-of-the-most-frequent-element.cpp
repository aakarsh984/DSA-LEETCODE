class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long sum=0;
        int i=0;
        int j=0;
        int ans=INT_MIN;
        while(j<n){
            sum+=nums[j];
            long total=1LL*nums[j]*(j-i+1);
            long ops=total-sum;
                if(ops>k){
                    sum-=nums[i++];
                    total=1LL*nums[j]*(j-i+1);
                    ops=total-sum;
                }
                    ans=max(ans,j-i+1);
                    j++;
                

        } return ans;
        
    }
};