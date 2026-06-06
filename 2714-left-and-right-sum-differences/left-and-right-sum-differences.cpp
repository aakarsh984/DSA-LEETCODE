class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int totalsum=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        vector<int>ans(n);
        int left=0;
        for(int i = 0; i < n; i++){
            int right=totalsum-left-nums[i];

            int x=abs(right-left);
            left+=nums[i];

            ans[i]=x;

        }
return ans;
        
    }
};