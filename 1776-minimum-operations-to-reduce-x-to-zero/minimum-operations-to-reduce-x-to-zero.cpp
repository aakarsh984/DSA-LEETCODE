class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int total=accumulate(nums.begin(),nums.end(),0);
        int rem=total-x;
        int i=0,j=0;
        int ans=-1;
        int sum=0;
        while(j<n){
             sum+=nums[j];
            while(sum>rem && i<=j){
                sum-=nums[i];
                i++;
            }
            if(sum==rem){
                ans = max(ans, j - i + 1);
            }
           
            j++;
        }
        return ans==-1?-1:n-ans;
        
    }
};