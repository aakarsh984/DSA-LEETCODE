class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int zero=0;
        int n=nums.size();
        for(int r = 0; r < n; r++){
          if(nums[r]==0)zero++;
          if(zero>k){
            if(nums[l]==0)zero--;
            l++;
          }
        }
        return n-l;
        
    }
};